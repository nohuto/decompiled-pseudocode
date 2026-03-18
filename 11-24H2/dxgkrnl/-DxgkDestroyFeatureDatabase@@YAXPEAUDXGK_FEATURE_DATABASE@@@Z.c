/*
 * XREFs of ?DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140288730
 * Callers:
 *     ?DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14007CC70 (-DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x1402884A0 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDX.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkDestroyFeatureDatabase(struct DXGK_FEATURE_DATABASE *a1)
{
  void **v2; // rdi
  __int64 v3; // rsi
  void *v4; // rcx

  v2 = (void **)((char *)a1 + 8);
  v3 = 16LL;
  do
  {
    if ( *v2 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v2);
      *v2 = 0LL;
    }
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v4 = (void *)*((_QWORD *)a1 + 106);
  if ( v4 )
  {
    ZwClose(v4);
    *((_QWORD *)a1 + 106) = 0LL;
  }
  (*((void (__fastcall **)(_QWORD))a1 + 110))(*((_QWORD *)a1 + 108));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
