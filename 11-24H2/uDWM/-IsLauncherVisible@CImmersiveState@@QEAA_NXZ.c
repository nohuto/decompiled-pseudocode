/*
 * XREFs of ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800C6638
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x1800476AC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180055544 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800D2DE0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveState::IsLauncherVisible(CImmersiveState *this)
{
  return *((_BYTE *)this + 56);
}
