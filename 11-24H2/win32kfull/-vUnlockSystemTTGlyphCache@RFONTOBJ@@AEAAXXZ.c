/*
 * XREFs of ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1400B1AAC
 * Callers:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1400B19E0 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x14005CC40 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1400B1364 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z @ 0x1400D68B4 (--$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z.c)
 */

void __fastcall RFONTOBJ::vUnlockSystemTTGlyphCache(RFONTOBJ *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x180) == 0x80 && *(_QWORD *)(*(_QWORD *)this + 728LL) )
  {
    if ( (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>() )
    {
      v2 = *(_QWORD *)(*(_QWORD *)this + 728LL);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v2);
      *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x80u;
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v2);
    }
  }
}
