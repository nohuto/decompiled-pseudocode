/*
 * XREFs of ??1RFONTTMPOBJ@@QEAA@XZ @ 0x14005CC40
 * Callers:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1400B19E0 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1400B1AAC (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D71F0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D9EE0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14033A780 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTTMPOBJ::~RFONTTMPOBJ(RFONTTMPOBJ *this)
{
  *(_QWORD *)this = 0LL;
  RFONTOBJ::~RFONTOBJ(this);
}
