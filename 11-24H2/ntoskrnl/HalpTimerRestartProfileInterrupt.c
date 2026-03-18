/*
 * XREFs of HalpTimerRestartProfileInterrupt @ 0x140549F74
 * Callers:
 *     HalpTimerPowerChange @ 0x1405486C0 (HalpTimerPowerChange.c)
 *     DefaultRestartProfiling @ 0x140B4CBE0 (DefaultRestartProfiling.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 *     HalpTimerSetProblemEx @ 0x1404F98E4 (HalpTimerSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerRestartProfileInterrupt()
{
  __int64 v0; // rbx
  unsigned int Number; // edi
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpProfileTimer;
  if ( HalpProfileTimer )
  {
    Number = KeGetPcr()->Prcb.Number;
    if ( (*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !Number )
    {
      InternalData = HalpTimerGetInternalData(HalpProfileTimer);
      v6 = guard_dispatch_icall_no_overrides(InternalData, v3, v4, v5);
      if ( v6 >= 0 )
      {
        if ( HalpProfilingActive )
        {
          LOBYTE(v7) = 1;
          HalpSetTimer(v0, 2u, *(unsigned int *)(296LL * Number + HalpProfileData + 24), v7, &v12);
        }
        else
        {
          v8 = HalpTimerGetInternalData(v0);
          guard_dispatch_icall_no_overrides(v8, v9, v10, v11);
        }
      }
      else
      {
        HalpTimerSetProblemEx(v0, 15, v6, (__int64)"minkernel\\hals\\lib\\timers\\common\\timeprof.c", 0x21Cu);
      }
    }
  }
}
