/*
 * XREFs of HalpCmciInitProcessor @ 0x14047D1E4
 * Callers:
 *     HalpInitializeCmc @ 0x140B4BAE8 (HalpInitializeCmc.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B68E20 (HalpMcaResumeProcessorConfig.c)
 *     HalpCmciInit @ 0x140B6C938 (HalpCmciInit.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfig @ 0x14047D604 (HalpCmciSetProcessorConfig.c)
 *     HalpGetMcaPcrContext @ 0x14047D638 (HalpGetMcaPcrContext.c)
 *     HalpCmciPollProcessor @ 0x14047D688 (HalpCmciPollProcessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIsCmciImplementedAMD @ 0x140B4C35C (HalpIsCmciImplementedAMD.c)
 */

BOOLEAN __fastcall HalpCmciInitProcessor(__int64 a1, __int64 a2)
{
  char v4; // si
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rdx
  __int64 McaPcrContext; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  BOOLEAN result; // al

  v4 = 1;
  if ( (unsigned __int8)HalpGetCpuVendor(a1, a2) == 1 && !(unsigned __int8)HalpIsCmciImplementedAMD() )
  {
    HalpMcaPollForCmc = 1;
    v4 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  v7 = 15LL;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, 15LL);
  }
  if ( !HalpCmciRevertToPolledMode )
  {
    if ( *(_BYTE *)(a1 + 48) == 5 )
      goto LABEL_6;
    HalpMcaPollForCmc = 1;
  }
  v4 = 0;
LABEL_6:
  LOBYTE(v7) = v4;
  HalpCmciSetProcessorConfig(a1, v7, a2);
  McaPcrContext = HalpGetMcaPcrContext(a2);
  v12 = McaPcrContext;
  if ( McaPcrContext && v4 )
  {
    *(_DWORD *)(McaPcrContext + 120) = 0;
    *(_BYTE *)(McaPcrContext + 128) = 0;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    result = HalpMcaWheaReady;
    if ( HalpMcaWheaReady )
    {
      result = KeGetCurrentIrql();
      if ( result > 2u )
      {
        if ( v12 && *(_QWORD *)(v12 + 16) )
        {
          if ( *(_QWORD *)(v12 + 24) )
            return KeInsertQueueDpc((PRKDPC)(v12 + 48), 0LL, 0LL);
        }
      }
      else
      {
        return HalpCmciPollProcessor(a2, v9, v10, v11);
      }
    }
  }
  return result;
}
