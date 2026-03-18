/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180061A30
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800615F8 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x180061A00 (-HideVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x1800971F0 (-Hide@CExcludeVisualReference@@QEAAJXZ.c)
 *     ?erase@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@@Z @ 0x18025C968 (-erase@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@QEAA-AV-$_Vector_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  CExcludeVisualReference *v2; // rbx
  CExcludeVisualReference **v3; // rdi
  int v5; // eax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CExcludeVisualReference *)*((_QWORD *)this + 768);
  v3 = (CExcludeVisualReference **)((char *)this + 6136);
  while ( v2 != *v3 )
  {
    v2 = (CExcludeVisualReference *)((char *)v2 - 32);
    if ( a2 )
      v5 = (**(__int64 (__fastcall ***)(CExcludeVisualReference *))v2)(v2);
    else
      v5 = CExcludeVisualReference::Hide(v2);
    if ( v5 < 0 )
      std::vector<CursorVisualData>::erase(v3, &v6, v2);
  }
}
