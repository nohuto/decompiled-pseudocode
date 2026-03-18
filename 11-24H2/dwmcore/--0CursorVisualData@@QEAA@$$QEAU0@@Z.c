/*
 * XREFs of ??0CursorVisualData@@QEAA@$$QEAU0@@Z @ 0x180259BA0
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18019E0EC (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@UCursorVisualData@@@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@AEAAPEAUCursorVisualData@@QEAU2@$$QEAU2@@Z @ 0x18025977C (--$_Emplace_reallocate@UCursorVisualData@@@-$vector@UCursorVisualData@@V-$allocator@UCursorVisua.c)
 *     ??$_Uninitialized_move@PEAUCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@YAPEAUCursorVisualData@@QEAU1@0PEAU1@AEAV?$allocator@UCursorVisualData@@@0@@Z @ 0x180259A04 (--$_Uninitialized_move@PEAUCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@YAPEAUC.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CursorVisualData::CursorVisualData(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)a1 = &CExcludeVisualReference::`vftable';
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20);
  v5 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a1 + 24) = v5;
  return a1;
}
