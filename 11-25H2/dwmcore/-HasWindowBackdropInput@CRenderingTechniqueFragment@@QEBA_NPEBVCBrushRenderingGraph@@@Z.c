/*
 * XREFs of ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x1801EEC40
 * Callers:
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1801EEB28 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x1801EEAEC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRenderingTechniqueFragment::HasWindowBackdropInput(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2)
{
  char v2; // bl
  __int64 v4; // rsi
  unsigned int i; // edi
  __int64 v7; // rdx
  struct CBrush *NamedInput; // rax

  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    v7 = *((_QWORD *)this + 4) + 16LL * i;
    if ( !*(_QWORD *)(v7 + 8) && !*(_BYTE *)(v7 + 4) )
    {
      NamedInput = CBrushRenderingGraph::GetNamedInput(a2, *(_DWORD *)v7);
      if ( NamedInput )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)NamedInput + 64LL))(
               NamedInput,
               189LL) )
        {
          return 1;
        }
      }
    }
  }
  return v2;
}
