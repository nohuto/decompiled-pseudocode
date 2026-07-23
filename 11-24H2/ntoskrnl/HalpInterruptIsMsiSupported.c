/*
 * XREFs of HalpInterruptIsMsiSupported @ 0x1404B1F6C
 * Callers:
 *     HalGetInterruptTargetInformation @ 0x1404B1E00 (HalGetInterruptTargetInformation.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpIommuConfigureInterrupt @ 0x14054F964 (HalpIommuConfigureInterrupt.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 */

char __fastcall HalpInterruptIsMsiSupported(char a1)
{
  char result; // al
  char CpuInfo; // al
  char v4; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  char CpuType; // dl
  bool v7; // cc
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  if ( HalpInterruptMsiSupportDetermined )
  {
    result = HalpInterruptMsiSupported;
    goto LABEL_22;
  }
  if ( HalpInterruptController && !*(_QWORD *)(HalpInterruptController + 136) )
  {
    result = 0;
    goto LABEL_22;
  }
  if ( a1 || (int)EmClientQueryRuleState(&GUID_EM_DISABLE_MSI_RULE, &v8) >= 0 && v8 != 2 )
  {
    LOBYTE(v8) = 0;
    CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&v8);
    v4 = CpuInfo != 0 ? v8 : 0;
    if ( v4 == 2 || v4 == 1 )
      goto LABEL_17;
    result = 0;
    if ( v4 == 3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CpuType = CurrentPrcb->CpuType;
      v7 = (unsigned __int8)CpuType <= 6u;
      if ( CpuType == 6 )
      {
        if ( CurrentPrcb->CpuModel >= 0xAu )
        {
LABEL_17:
          result = 1;
          goto LABEL_18;
        }
        v7 = 1;
      }
      if ( !v7 )
        goto LABEL_17;
    }
LABEL_18:
    if ( (HalpInterruptMsiOverrideFlags & 1) != 0 )
      result = 1;
    if ( (HalpInterruptMsiOverrideFlags & 2) != 0 )
      result = 0;
LABEL_22:
    if ( a1 )
      return result;
    goto LABEL_23;
  }
  result = 0;
LABEL_23:
  HalpInterruptMsiSupported = result;
  HalpInterruptMsiSupportDetermined = 1;
  return result;
}
