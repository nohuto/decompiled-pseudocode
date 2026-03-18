/*
 * XREFs of ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x180282460
 * Callers:
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802360E4 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802364E0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180097238 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@@Z @ 0x18025C968 (-erase@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@QEAA-AV-$_Vector_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::ForEachCursorVisual(__int64 a1, __int64 a2)
{
  CExcludeVisualReference *v2; // rbx
  CExcludeVisualReference **v3; // rbp
  __int64 v4; // rdi
  unsigned int v5; // esi
  struct CVisual *VisualNoRef; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  struct CVisual *v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v2 = *(CExcludeVisualReference **)(a1 + 6144);
  v3 = (CExcludeVisualReference **)(a1 + 6136);
  v4 = a2;
  v5 = 0;
  while ( v2 != *v3 )
  {
    v2 = (CExcludeVisualReference *)((char *)v2 - 32);
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v2);
    if ( VisualNoRef )
    {
      v7 = *((_QWORD *)v2 + 3);
      v13 = VisualNoRef;
      v8 = *(_QWORD *)(v4 + 56);
      v12 = v7;
      if ( !v8 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        JUMPOUT(0x180282540LL);
      }
      v9 = (*(__int64 (__fastcall **)(__int64, struct CVisual **, __int64 *))(*(_QWORD *)v8 + 16LL))(v8, &v13, &v12);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x3A3u, 0LL);
        break;
      }
    }
    else
    {
      std::vector<CursorVisualData>::erase((__int64)v3, &v14, (__int64)v2);
    }
  }
  v10 = *(_QWORD *)(v4 + 56);
  if ( v10 )
  {
    LOBYTE(a2) = v10 != v4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, a2);
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  return v5;
}
