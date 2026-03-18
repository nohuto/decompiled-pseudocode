/*
 * XREFs of IrqPolicyGetDistributionDisposition @ 0x1400C8D54
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400A878C (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     IrqArbIrqFromGsiv @ 0x1400A9D8C (IrqArbIrqFromGsiv.c)
 *     OSGetRegistryValue @ 0x1400B3AFC (OSGetRegistryValue.c)
 *     OSOpenUnicodeHandle @ 0x1400B71E8 (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall IrqPolicyGetDistributionDisposition(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ecx
  bool v4; // zf
  PVOID v5; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+40h] [rbp+10h] BYREF
  int v9; // [rsp+48h] [rbp+18h] BYREF
  int v10; // [rsp+4Ch] [rbp+1Ch]
  HANDLE Handle; // [rsp+50h] [rbp+20h] BYREF

  v10 = HIDWORD(a2);
  Handle = 0LL;
  P = 0LL;
  v9 = 1;
  v2 = 0;
  IrqArbGlobalDistributionDisposition = 0;
  DestinationString = 0LL;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_DISTRIBUTION_STACK_UP, &v9);
  if ( v9 == 2 )
    IrqArbGlobalDistributionDisposition = 2;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_DISTRIBUTION_SPREAD_OUT, &v9);
  if ( v9 == 2 )
    IrqArbGlobalDistributionDisposition = 1;
  if ( IrqArbGlobalDistributionDisposition )
  {
    EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_ROUTING_STACK_ON_IRQ9, &v9);
    if ( v9 == 2 )
    {
      IrqArbGlobalStackingIrq = 9;
    }
    else
    {
      EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_ROUTING_STACK_ON_IRQ10, &v9);
      if ( v9 == 2 )
      {
        IrqArbGlobalStackingIrq = 10;
      }
      else
      {
        EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_ROUTING_STACK_ON_IRQ11, &v9);
        if ( v9 == 2 )
          IrqArbGlobalStackingIrq = 11;
      }
    }
  }
  else
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
    v3 = OSOpenUnicodeHandle(&DestinationString, 0LL, &Handle);
    if ( v3 < 0 || (v3 = OSGetRegistryValue(Handle, L"IRQDistribution", &P), v3 < 0) )
    {
      v4 = v3 == -1073741772;
      if ( v3 == -1073741772 )
      {
        IrqArbGlobalDistributionDisposition = 0;
        v4 = 1;
      }
      if ( !v4 )
        v2 = v3;
    }
    else
    {
      v5 = P;
      if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
      {
        IrqArbGlobalDistributionDisposition = *((_DWORD *)P + 2);
        ExFreePoolWithTag(P, 0);
        IrqArbGlobalStackingIrq = IrqArbIrqFromGsiv((unsigned int)IrqLibSciGsiv);
        if ( OSGetRegistryValue(Handle, L"ForcePCIBootConfig", &P) < 0 )
          goto LABEL_27;
        v5 = P;
        if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
          IrqArbGlobalStackingIrq = *((_DWORD *)P + 2);
      }
      else
      {
        v2 = -1073741275;
      }
      ExFreePoolWithTag(v5, 0);
    }
  }
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
