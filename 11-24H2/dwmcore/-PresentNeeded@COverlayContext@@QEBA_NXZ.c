/*
 * XREFs of ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801D4F48
 * Callers:
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x1801D4EE0 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x1801D4F14 (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 * Callees:
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x180098DF4 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 */

bool __fastcall COverlayContext::PresentNeeded(COverlayContext *this)
{
  __int64 v1; // rax
  CDirectFlipInfo *v2; // rcx

  if ( *((_BYTE *)this + 19088) != *((_BYTE *)this + 19208) )
    return 1;
  if ( *((_BYTE *)this + 19089) != *((_BYTE *)this + 19209) )
    return 1;
  v1 = *((_QWORD *)this + 1585);
  if ( 0x7D6343EB1A1F58D1LL * ((*((_QWORD *)this + 1586) - v1) >> 3) != *((_DWORD *)this + 4804) )
    return 1;
  while ( v1 != *((_QWORD *)this + 1586) )
  {
    if ( *(_BYTE *)(v1 + 371) )
      return 1;
    v1 += 392LL;
  }
  v2 = (CDirectFlipInfo *)*((_QWORD *)this + 2439);
  return v2 && CDirectFlipInfo::PresentNeeded(v2);
}
