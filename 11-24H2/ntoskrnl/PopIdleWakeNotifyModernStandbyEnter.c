/*
 * XREFs of PopIdleWakeNotifyModernStandbyEnter @ 0x1404A38EC
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void PopIdleWakeNotifyModernStandbyEnter()
{
  __int64 Pool2; // rax
  void *v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // esi
  unsigned int *v4; // r14
  KIRQL v5; // al
  signed __int32 v6; // eax

  Pool2 = ExAllocatePool2(0x40uLL, 0x9520uLL, 0x67696450u);
  v1 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 38056) = Pool2;
    *(_QWORD *)(Pool2 + 38048) = PopIdleWakeNotifyModernStandbyExitWorker;
    *(_QWORD *)(Pool2 + 38032) = 0LL;
    *(_QWORD *)(Pool2 + 38104) = PopIdleWakeDelayedWakeSourceReferencer;
    v2 = Pool2 + 292;
    *(_DWORD *)(Pool2 + 38080) = 275;
    *(_QWORD *)(Pool2 + 38112) = Pool2;
    *(_QWORD *)(Pool2 + 38136) = 0LL;
    v3 = 0;
    *(_QWORD *)(Pool2 + 38096) = 0LL;
    *(_WORD *)(Pool2 + 38144) = 0;
    *(_BYTE *)(Pool2 + 38146) = 6;
    *(_DWORD *)(Pool2 + 38148) = 1;
    *(_QWORD *)(Pool2 + 38160) = Pool2 + 38152;
    *(_QWORD *)(Pool2 + 38152) = Pool2 + 38152;
    do
    {
      v4 = (unsigned int *)(v2 - 148);
      memset_0((void *)(v2 - 148), 0, 0x4A0uLL);
      *(_QWORD *)(v2 + 276) = -1LL;
      *(_QWORD *)(v2 + 660) = -1LL;
      *(_QWORD *)(v2 - 4) = 2097153LL;
      memset_0((void *)(v2 + 4), 0, 0x100uLL);
      if ( v3 <= 0xB )
      {
        *v4 = v3;
        do
        {
          v6 = _InterlockedIncrement(&PopIdleWakeNextToken);
          *(_DWORD *)(v2 + 260) = v6;
        }
        while ( v6 == -1 );
      }
      else
      {
        *v4 = 130;
      }
      ++v3;
      v2 += 1184LL;
    }
    while ( v3 < 0x20 );
    v5 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
    PopIdleWakeContext = v1;
    KeReleaseSpinLock(&PopIdleWakeContextLock, v5);
  }
}
