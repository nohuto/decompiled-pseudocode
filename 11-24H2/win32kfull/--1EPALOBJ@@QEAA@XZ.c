/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x140180CA0
 * Callers:
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14011F570 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreGetPaletteEntries @ 0x140180BD0 (GreGetPaletteEntries.c)
 *     NtGdiEngDeletePalette @ 0x140261AF0 (NtGdiEngDeletePalette.c)
 *     EngQueryPalette @ 0x140305F10 (EngQueryPalette.c)
 *     GreAnimatePalette @ 0x14030F350 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x14030F3CC (GreCreateHalftonePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1403228B4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140324550 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x140338860 (NtGdiUnrealizeObject.c)
 *     NtGdiColorCorrectPalette @ 0x14033B950 (NtGdiColorCorrectPalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
