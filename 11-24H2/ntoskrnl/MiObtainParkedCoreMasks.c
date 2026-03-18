/*
 * XREFs of MiObtainParkedCoreMasks @ 0x140244998
 * Callers:
 *     MiComputeIdealDpcGang @ 0x1403A8170 (MiComputeIdealDpcGang.c)
 *     MiInitializeAffinityWalker @ 0x140415948 (MiInitializeAffinityWalker.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiObtainParkedCoreMasks(_OWORD *a1, int a2)
{
  __int64 v3; // rsi
  KIRQL v4; // di
  __int16 *v5; // rax
  __int128 v6; // xmm1

  v3 = 2LL;
  if ( a2 || KeGetCurrentIrql() == 2 )
  {
    v4 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&SpinLock);
  }
  else
  {
    v4 = ExAcquireSpinLockShared(&SpinLock);
  }
  v5 = &word_140E2EC48;
  do
  {
    *a1 = *(_OWORD *)v5;
    a1[1] = *((_OWORD *)v5 + 1);
    a1[2] = *((_OWORD *)v5 + 2);
    a1[3] = *((_OWORD *)v5 + 3);
    a1[4] = *((_OWORD *)v5 + 4);
    a1[5] = *((_OWORD *)v5 + 5);
    a1[6] = *((_OWORD *)v5 + 6);
    a1 += 8;
    v6 = *((_OWORD *)v5 + 7);
    v5 += 64;
    *(a1 - 1) = v6;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)a1 = *(_QWORD *)v5;
  return MiReleaseSpinLockShared(&SpinLock, v4);
}
