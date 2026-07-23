/*
 * XREFs of MiObtainParkedCoreMasks @ 0x14020D180
 * Callers:
 *     MiComputeIdealDpcGang @ 0x14026F84C (MiComputeIdealDpcGang.c)
 *     MiInitializeAffinityWalker @ 0x1402717A8 (MiInitializeAffinityWalker.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiObtainParkedCoreMasks(_OWORD *a1, int a2)
{
  __int64 v3; // rsi
  KIRQL v4; // di
  __int64 v5; // r8
  __int64 v6; // r9
  __int16 *v7; // rax
  __int128 v8; // xmm1

  v3 = 2LL;
  if ( a2 || KeGetCurrentIrql() == 2 )
  {
    v4 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2ED80);
  }
  else
  {
    v4 = ExAcquireSpinLockShared(&dword_140E2ED80);
  }
  v7 = &word_140E2ED88;
  do
  {
    *a1 = *(_OWORD *)v7;
    a1[1] = *((_OWORD *)v7 + 1);
    a1[2] = *((_OWORD *)v7 + 2);
    a1[3] = *((_OWORD *)v7 + 3);
    a1[4] = *((_OWORD *)v7 + 4);
    a1[5] = *((_OWORD *)v7 + 5);
    a1[6] = *((_OWORD *)v7 + 6);
    a1 += 8;
    v8 = *((_OWORD *)v7 + 7);
    v7 += 64;
    *(a1 - 1) = v8;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)a1 = *(_QWORD *)v7;
  return MiReleaseSpinLockShared(&dword_140E2ED80, v4, v5, v6);
}
