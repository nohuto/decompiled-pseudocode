/*
 * XREFs of MiGetPrivatePageCount @ 0x14049352C
 * Callers:
 *     MiAllocateCrcList @ 0x1409F2EE0 (MiAllocateCrcList.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiGetPrivatePageCount(__int64 a1)
{
  unsigned __int64 v2; // rdi
  KIRQL v3; // al
  _QWORD *v4; // rbx
  _QWORD *v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&dword_140E373C0);
  v4 = (_QWORD *)(a1 + 17608);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v6 = v5[14];
    v5 = (_QWORD *)*v5;
    v7 = v2 + v6;
    if ( v7 <= v2 )
      v7 = v2;
    v2 = v7;
  }
  MiReleaseSpinLockShared(&dword_140E373C0, v3);
  return v2;
}
