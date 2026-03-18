/*
 * XREFs of ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C013E964
 * Callers:
 *     EngTextOut @ 0x1C001E590 (EngTextOut.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C001ED00 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1C0292F58 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02930C0 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02BF54C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 */

void __fastcall UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem(UMPDReleaseAcquireRFONTSem *this)
{
  char *v2; // rcx

  if ( *(_DWORD *)this )
  {
    UMPDAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)((char *)this + 72),
      0LL,
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 2),
      *((const int **)this + 7));
    v2 = (char *)*((_QWORD *)this + 7);
    if ( v2 )
    {
      if ( v2 != (char *)this + 12 )
        Win32FreePool(v2);
    }
  }
  *((_QWORD *)this + 9) = 0LL;
  RFONTOBJ::~RFONTOBJ((UMPDReleaseAcquireRFONTSem *)((char *)this + 72));
}
