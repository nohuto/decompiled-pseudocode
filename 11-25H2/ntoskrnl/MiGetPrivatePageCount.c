/*
 * XREFs of MiGetPrivatePageCount @ 0x14049474C
 * Callers:
 *     MiAllocateCrcList @ 0x1409F49B8 (MiAllocateCrcList.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
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
  v3 = ExAcquireSpinLockShared(&dword_140E37180);
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
  MiReleaseSpinLockShared(&dword_140E37180, v3);
  return v2;
}
