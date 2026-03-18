/*
 * XREFs of ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801E1148
 * Callers:
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x1801E10E0 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x1801E1114 (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 * Callees:
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1800C6B64 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 */

bool __fastcall COverlayContext::PresentNeeded(COverlayContext *this)
{
  __int64 v1; // rax
  CDirectFlipInfo *v2; // rcx

  if ( *((_BYTE *)this + 19472) != *((_BYTE *)this + 19592) )
    return 1;
  if ( *((_BYTE *)this + 19473) != *((_BYTE *)this + 19593) )
    return 1;
  v1 = *((_QWORD *)this + 1617);
  if ( 0x8F5C28F5C28F5C29uLL * ((*((_QWORD *)this + 1618) - v1) >> 4) != *((_DWORD *)this + 4900) )
    return 1;
  while ( v1 != *((_QWORD *)this + 1618) )
  {
    if ( *(_BYTE *)(v1 + 372) )
      return 1;
    v1 += 400LL;
  }
  v2 = (CDirectFlipInfo *)*((_QWORD *)this + 2468);
  return v2 && CDirectFlipInfo::PresentNeeded(v2);
}
