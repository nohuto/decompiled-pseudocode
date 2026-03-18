/*
 * XREFs of ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801E1404
 * Callers:
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18014466C (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180145C50 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::AddBatchCommand(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  int v6; // ebx
  unsigned int v8; // eax
  int v9; // r9d
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v4 = *a2;
  v10 = v4;
  v5 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v6 = -2147024362;
    v8 = 181;
    v9 = -2147024362;
    goto LABEL_7;
  }
  v6 = 0;
  if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, 1, &v10);
    v9 = v6;
    if ( v6 >= 0 )
      goto LABEL_4;
    v8 = 192;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v8, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x90u, 0LL);
    return (unsigned int)v6;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8LL * v2) = v4;
  *(_DWORD *)(a1 + 24) = v5;
LABEL_4:
  *a2 = 0LL;
  return (unsigned int)v6;
}
