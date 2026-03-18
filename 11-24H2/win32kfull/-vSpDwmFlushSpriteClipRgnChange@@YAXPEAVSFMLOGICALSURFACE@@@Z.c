/*
 * XREFs of ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1401DF0C8
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1400914A8 (GreUpdateSpriteClipRgn.c)
 * Callees:
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400CFA78 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400CFA94 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 */

void __fastcall vSpDwmFlushSpriteClipRgnChange(struct SFMLOGICALSURFACE *a1)
{
  int v1; // eax
  UINT_PTR v3; // rax
  HSPRITE *v4; // rcx

  v1 = *((_DWORD *)a1 + 63);
  if ( (v1 & 0x20) != 0 )
  {
    if ( (v1 & 4) != 0 )
    {
      v3 = SFMLOGICALSURFACE::uiCookie(a1);
      bSpDwmNotifyDirty(v4[37], (struct SFMLOGICALSURFACE *)v4, 2u, v3);
    }
    *((_DWORD *)a1 + 63) &= ~0x20u;
  }
}
