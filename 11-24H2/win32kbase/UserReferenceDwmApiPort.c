/*
 * XREFs of UserReferenceDwmApiPort @ 0x1400243F0
 * Callers:
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x140070B34 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011D360 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x140148D10 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1402235E0 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDCompositionSetChildRootVisual @ 0x1402239E0 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140023480 (GreLockDwmState.c)
 *     GreIsDwmStateLocked @ 0x140024460 (GreIsDwmStateLocked.c)
 */

__int64 UserReferenceDwmApiPort()
{
  int v0; // edi
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsDwmStateLocked() )
  {
    GreLockDwmState(v1);
    v0 = 1;
  }
  UserSessionState = W32GetUserSessionState();
  v4 = *(_QWORD *)(UserSessionState + 70824);
  if ( v4 )
    ObfReferenceObject(*(PVOID *)(UserSessionState + 70824));
  if ( v0 )
    GreUnlockDwmState(v3);
  return v4;
}
