/*
 * XREFs of ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x180187E30
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x180146F30 (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x180187F20 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::CreateBatchCommand(CDrawListBatchManager *this, struct CBatchCommand **a2)
{
  char *v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rdx
  unsigned int v6; // eax
  CBatchCommand *v8; // rax
  CBatchCommand *v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  CBatchCommand *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this + 40;
  v3 = 0;
  if ( *((_DWORD *)this + 16) )
    goto LABEL_2;
  v8 = (CBatchCommand *)MIDL_user_allocate(0xB8uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = 0;
    v12 = v8;
    v10 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v2, &v12, 1LL);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x160u, 0LL);
      std::default_delete<CBatchCommand>::operator()(v11, v9);
      return v3;
    }
LABEL_2:
    v5 = (unsigned int)(*((_DWORD *)v2 + 6) - 1);
    *a2 = *(struct CBatchCommand **)(*(_QWORD *)v2 + 8 * v5);
    v6 = *((_DWORD *)v2 + 8);
    *((_DWORD *)v2 + 6) = v5;
    if ( v6 >= (unsigned int)v5 )
      v6 = v5;
    *((_DWORD *)v2 + 8) = v6;
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15Eu, 0LL);
  return 2147942414LL;
}
