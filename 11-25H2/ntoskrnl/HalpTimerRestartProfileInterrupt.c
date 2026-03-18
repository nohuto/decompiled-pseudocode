/*
 * XREFs of HalpTimerRestartProfileInterrupt @ 0x140547684
 * Callers:
 *     HalpTimerPowerChange @ 0x140545DD0 (HalpTimerPowerChange.c)
 *     DefaultRestartProfiling @ 0x140B3CBE0 (DefaultRestartProfiling.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpSetTimer @ 0x14028F6F0 (HalpSetTimer.c)
 *     HalpTimerSetProblemEx @ 0x1404F70E4 (HalpTimerSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerRestartProfileInterrupt()
{
  __int64 v0; // rbx
  unsigned int Number; // edi
  __int64 InternalData; // rax
  int v3; // eax
  __int64 v4; // rax
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpProfileTimer;
  if ( HalpProfileTimer )
  {
    Number = KeGetPcr()->Prcb.Number;
    if ( (*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !Number )
    {
      InternalData = HalpTimerGetInternalData(HalpProfileTimer);
      v3 = guard_dispatch_icall_no_overrides(InternalData);
      if ( v3 >= 0 )
      {
        if ( HalpProfilingActive )
        {
          HalpSetTimer(v0, 2u, *(unsigned int *)(296LL * Number + HalpProfileData + 24), 1, &v5);
        }
        else
        {
          v4 = HalpTimerGetInternalData(v0);
          guard_dispatch_icall_no_overrides(v4);
        }
      }
      else
      {
        HalpTimerSetProblemEx(v0, 15, v3, (__int64)"minkernel\\hals\\lib\\timers\\common\\timeprof.c", 0x21Cu);
      }
    }
  }
}
