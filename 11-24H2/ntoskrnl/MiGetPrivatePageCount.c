/*
 * XREFs of MiGetPrivatePageCount @ 0x14048DE5C
 * Callers:
 *     MiAllocateCrcList @ 0x1409E7240 (MiAllocateCrcList.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiGetPrivatePageCount(__int64 a1)
{
  unsigned __int64 v2; // rdi
  KIRQL v3; // al
  __int64 v4; // r9
  _QWORD **v5; // rbx
  _QWORD *v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&SpinLock);
  v5 = (_QWORD **)(a1 + 17608);
  v6 = *v5;
  while ( v6 != v5 )
  {
    v7 = v6[14];
    v6 = (_QWORD *)*v6;
    v8 = v2 + v7;
    if ( v8 <= v2 )
      v8 = v2;
    v2 = v8;
  }
  MiReleaseSpinLockShared(&SpinLock, v3, (__int64)v6, v4);
  return v2;
}
