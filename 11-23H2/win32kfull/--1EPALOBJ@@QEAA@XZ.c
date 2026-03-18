/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C013F650
 * Callers:
 *     GreGetPaletteEntries @ 0x1C0023F90 (GreGetPaletteEntries.c)
 *     NtGdiEngDeletePalette @ 0x1C02C9020 (NtGdiEngDeletePalette.c)
 *     GreCreateHalftonePalette @ 0x1C02D0A00 (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02D1C70 (NtGdiResizePalette.c)
 *     EngHTBlt @ 0x1C02DE1C0 (EngHTBlt.c)
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
