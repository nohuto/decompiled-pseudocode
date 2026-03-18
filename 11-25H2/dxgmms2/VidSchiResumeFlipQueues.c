/*
 * XREFs of VidSchiResumeFlipQueues @ 0x1400FFDEC
 * Callers:
 *     VidSchResumeSchedulerForSource @ 0x1400FFDD0 (VidSchResumeSchedulerForSource.c)
 * Callees:
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x14002B914 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x14003C9C0 (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

void __fastcall VidSchiResumeFlipQueues(__int64 a1, int a2)
{
  __int64 i; // rbx
  __int64 v5; // rdx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&a2, i) )
    {
      v5 = *(_QWORD *)(a1 + 8 * i + 3432);
      if ( v5 )
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo(a1, v5, 1u, 0LL);
    }
  }
  VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(a1);
}
