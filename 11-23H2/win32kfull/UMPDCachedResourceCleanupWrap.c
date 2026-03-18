/*
 * XREFs of UMPDCachedResourceCleanupWrap @ 0x1C0082050
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C02984C0 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02BF08C (-Close@PROXYPORT@@QEAAXXZ.c)
 */

void __fastcall UMPDCachedResourceCleanupWrap(__int64 a1)
{
  struct _UMPDHEAP *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(struct _UMPDHEAP **)(a1 + 56);
  if ( v2 )
  {
    DestroyUMPDHeap(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 64) )
  {
    v3 = *(_QWORD *)(a1 + 64);
    PROXYPORT::Close((PROXYPORT *)&v3);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
}
