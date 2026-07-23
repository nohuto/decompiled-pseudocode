/*
 * XREFs of CcInitializeQuickLWSThreadItem @ 0x140431140
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1404300DC (CcInitializePrivateVolumeCacheMap.c)
 * Callees:
 *     ExAllocatePoolWithTagFromNode @ 0x140277180 (ExAllocatePoolWithTagFromNode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall CcInitializeQuickLWSThreadItem(_QWORD *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  ULONG_PTR v4; // r9
  __int64 PoolWithTagFromNode; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rcx

  v1 = a1[8];
  v2 = 0;
  if ( !v1 )
    KeBugCheckEx(0x34u, 0xE42uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = *(unsigned int *)(v1 + 24);
  LODWORD(v4) = v4 | 0x80000000;
  PoolWithTagFromNode = ExAllocatePoolWithTagFromNode((__int64)a1, 0x50uLL, 0x71576343uLL, v4);
  v6 = PoolWithTagFromNode;
  if ( PoolWithTagFromNode )
  {
    *(_DWORD *)(PoolWithTagFromNode + 32) = 6;
    v7 = a1[4];
    *(_DWORD *)(v6 + 36) = -1;
    *(_QWORD *)(v6 + 56) = v7;
    *(_QWORD *)(v6 + 64) = a1;
    *(_QWORD *)(v6 + 72) = v1;
    *(_DWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 16) = CcQuickLazyWriteScanForVolume;
    *(_QWORD *)(v6 + 24) = v6;
    *(_QWORD *)v6 = 0LL;
    v8 = (__int64 *)a1[196];
    if ( (_QWORD *)*v8 != a1 + 195 )
      __fastfail(3u);
    *(_QWORD *)v6 = a1 + 195;
    v2 = 1;
    *(_QWORD *)(v6 + 8) = v8;
    *v8 = v6;
    a1[196] = v6;
  }
  return v2;
}
