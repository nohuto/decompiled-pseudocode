/*
 * XREFs of ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x140070B34
 * Callers:
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x140070CA8 (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x14022447C (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140023480 (GreLockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1400243F0 (UserReferenceDwmApiPort.c)
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     DwmAsyncSetBlurredWallpaperSurface @ 0x140070BB0 (DwmAsyncSetBlurredWallpaperSurface.c)
 */

void __fastcall DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(
        DirectComposition::CConnection *this,
        const struct DirectComposition::ResourceObject *a2,
        const struct tagRECT *a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  void *v7; // rbx
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-18h]
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  GreLockDwmState((__int64)this);
  if ( !a2 || (int)OpenDwmHandle(a2, ExCompositionObjectType, 3u, v5, v9, &v10) >= 0 )
  {
    v7 = v10;
    v8 = UserReferenceDwmApiPort();
    DwmAsyncSetBlurredWallpaperSurface(v8, v7, a3);
  }
  GreUnlockDwmState(v6);
}
