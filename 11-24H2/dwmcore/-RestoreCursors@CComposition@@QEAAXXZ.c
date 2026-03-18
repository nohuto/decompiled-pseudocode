/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800992D8
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800615F8 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x180097390 (-RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180097480 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?erase@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@@Z @ 0x18025C968 (-erase@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@QEAA-AV-$_Vector_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 768);
  v2 = (_QWORD *)((char *)this + 6136);
  while ( v1 != *v2 )
  {
    v1 -= 32LL;
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1) < 0 )
      std::vector<CursorVisualData>::erase(v2, &v3, v1);
  }
}
