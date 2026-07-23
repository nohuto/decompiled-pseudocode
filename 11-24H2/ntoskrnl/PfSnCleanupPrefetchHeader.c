/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x140935CD8
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1409358F0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PfpPrefetchSharedDeref @ 0x1409362B8 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x1409362F0 (PfpPrefetchSharedCleanup.c)
 *     PfpOpenHandleClose @ 0x140954390 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(__int64 a1)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  _QWORD **v6; // rsi
  _QWORD *v7; // rdi
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  _QWORD *v13; // rax

  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(_QWORD *)a1 )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 88LL); ++i )
      {
        v3 = *(_QWORD *)(a1 + 56) + 56LL * i;
        v4 = *(void **)(v3 + 32);
        if ( v4 )
          ObfDereferenceObject(v4);
        v5 = *(void **)(v3 + 40);
        if ( v5 )
          ObfDereferenceObject(v5);
        if ( _bittest64((const signed __int64 *)(v3 + 24), 0x22u) )
          PfpOpenHandleClose(v3, *(_QWORD *)(a1 + 8));
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 56), 0);
  }
  v6 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v13 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v13;
    v13[1] = v6;
    PfpOpenHandleClose(v7 + 8, *(_QWORD *)(a1 + 8));
    PfpOpenHandleClose(v7 + 4, *(_QWORD *)(a1 + 8));
  }
  v8 = *(void **)(a1 + 16);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = *(void **)(a1 + 80);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)(a1 + 88);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 )
  {
    PfpPrefetchSharedCleanup(v11);
    PfpPrefetchSharedDeref(*(_QWORD *)(a1 + 8));
  }
  v12 = *(void **)(a1 + 112);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
