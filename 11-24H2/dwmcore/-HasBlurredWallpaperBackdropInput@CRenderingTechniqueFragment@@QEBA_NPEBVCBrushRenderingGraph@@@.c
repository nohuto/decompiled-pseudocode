/*
 * XREFs of ?HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18008A178
 * Callers:
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18008A378 (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18008A2B0 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRenderingTechniqueFragment::HasBlurredWallpaperBackdropInput(
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
               15LL) )
        {
          return 1;
        }
      }
    }
  }
  return v2;
}
