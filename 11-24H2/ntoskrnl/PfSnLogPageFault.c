/*
 * XREFs of PfSnLogPageFault @ 0x14034E5A0
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x14093E524 (MiLogRelocationRva.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     PfSnLogPageFaultCommon @ 0x14022B5F0 (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x14034E6D0 (PfSnReferenceProcessTrace.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rbx
  int v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  struct _KTHREAD *v11; // rax
  unsigned __int64 v12; // rtt

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
    if ( v7 )
    {
      if ( ((__int64)CurrentThread[1].Queue & 0x40) == 0 || (a3 & 2) != 0 )
      {
        v8 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
        v9 = CurrentThread->Process[1].Padding[3];
        if ( v9 )
        {
          v10 = *(_DWORD *)(v9 + 1084);
          if ( v8 >= v10 )
            v8 = v10;
        }
        if ( v8 >= 2 || CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
        {
          v11 = *(struct _KTHREAD **)(v7 + 432);
          if ( !v11 || v11 == CurrentThread && *(_QWORD *)(v7 + 440) == *(_QWORD *)&CurrentThread[1].CurrentRunTime )
            PfSnLogPageFaultCommon(v7, a1, *(_QWORD *)(a1 + 24), a2, a3);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 336));
        }
      }
      _m_prefetchw((const void *)(v7 + 360));
      v12 = *(_QWORD *)(v7 + 360) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 360), v12 - 2, v12) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v7 + 360));
    }
  }
}
