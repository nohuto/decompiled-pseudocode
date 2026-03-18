/*
 * XREFs of ??4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x18025566C
 * Callers:
 *     ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x180094F10 (-reserve_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_im.c)
 *     ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x180095260 (-AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z.c)
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@V12@0@Z @ 0x18029169C (--$_Swap_ranges_unchecked@V-$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@.c)
 *     ??$move@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1802919B0 (--$move@V-$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V-$checked.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::SinkRenderParameters::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  CDrawListCache *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v5 = *(CDrawListCache **)a1;
  *(_QWORD *)a1 = v2;
  if ( v5 )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v5);
  *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 3);
  v6 = a2[2];
  a2[2] = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = a2[3];
  a2[3] = 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *(_BYTE *)(a1 + 32) = *((_BYTE *)a2 + 32);
  *(_BYTE *)(a1 + 33) = *((_BYTE *)a2 + 33);
  return a1;
}
