/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0027280
 * Callers:
 *     GreNotifyDirtySprite @ 0x1C000B1A0 (GreNotifyDirtySprite.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00217FC (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0027228 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0133B68 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0158F7A (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     DwmAsyncDirtySprite @ 0x1C0027344 (DwmAsyncDirtySprite.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C009CF2C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C009FD98 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C42A0 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, __int64 a3, __int64 a4)
{
  int v6; // r14d
  int v7; // ebp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // ebx
  void *v15; // rax

  v6 = 0;
  v7 = 0;
  v8 = SFMLOGICALSURFACE::bDeviceBitmap(a2);
  v12 = 1;
  v13 = v11 & 0xFFFFFFFE;
  if ( !v8 )
    v13 = v11;
  v14 = v13;
  if ( (v13 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*(unsigned int *)(v9 + 252)) )
  {
    v6 = GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)a2);
    v14 = v13 & 0xFFFFFFFE;
  }
  if ( v14 )
  {
    v15 = (void *)UserReferenceDwmApiPort(v10, v9, v11);
    v7 = DwmAsyncDirtySprite(v15, a4);
  }
  if ( v6 < 0 || v7 < 0 )
    return 0;
  return v12;
}
