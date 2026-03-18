/*
 * XREFs of ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x140122468
 * Callers:
 *     EngTextOut @ 0x140058790 (EngTextOut.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400A9F28 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x140121B88 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x140180A64 (--1FRINGERECT@@QEAA@XZ.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

UMPDReleaseAcquireRFONTSem *__fastcall UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        UMPDReleaseAcquireRFONTSem *this,
        struct SURFACE *a2,
        struct _FONTOBJ *a3,
        int a4)
{
  char *v4; // rax
  void **v5; // rdi
  struct RFONTOBJ *v7; // rcx
  __int64 v8; // rax

  *(_DWORD *)this = 0;
  v4 = (char *)this + 12;
  *((_DWORD *)this + 1) = 0;
  v5 = (void **)((char *)this + 56);
  *((_DWORD *)this + 2) = 0;
  v7 = (UMPDReleaseAcquireRFONTSem *)((char *)this + 64);
  *v5 = v4;
  *(_QWORD *)v7 = a3;
  v8 = *((_QWORD *)a2 + 6);
  if ( v8 && (*(_DWORD *)(v8 + 40) & 0x8000) != 0 && a4 )
    *(_DWORD *)this = UMPDReleaseRFONTSem(v7, 0LL, (unsigned int *)this + 1, (unsigned int *)this + 2, v5);
  return this;
}
