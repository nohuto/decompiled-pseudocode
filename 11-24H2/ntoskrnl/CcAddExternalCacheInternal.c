/*
 * XREFs of CcAddExternalCacheInternal @ 0x14057A014
 * Callers:
 *     CcRegisterExternalCache @ 0x14057A8A0 (CcRegisterExternalCache.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall CcAddExternalCacheInternal(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  KIRQL v7; // r8
  unsigned int v8; // eax

  v4 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v5 = *(_QWORD **)(a2 + 8);
  v6 = (_QWORD *)(a1 + 32);
  v7 = v4;
  if ( *v5 != a2 )
    __fastfail(3u);
  v8 = CcNumberOfExternalCaches;
  *v6 = a2;
  v6[1] = v5;
  *v5 = v6;
  *(_QWORD *)(a2 + 8) = v6;
  if ( v8 + 1 < v8 )
    KeBugCheckEx(0x34u, 0x1E27uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v8 + 1;
  KeReleaseSpinLock(&CcExternalCacheListLock, v7);
}
