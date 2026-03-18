/*
 * XREFs of UpdateMouseSensitivity @ 0x14013B630
 * Callers:
 *     UnpackMouseSettings @ 0x140213D04 (UnpackMouseSettings.c)
 * Callees:
 *     BroadcastSettingsUpdateToAllContainers @ 0x14013B680 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x14022055C (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 */

__int64 __fastcall UpdateMouseSensitivity(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = a1;
  v2 = *(_QWORD *)(W32GetUserSessionState(a1) + 16368);
  if ( v1 - 1 > 0x13 )
    v1 = *(_DWORD *)(v2 + 96);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
    (CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v2 + 104),
    v1);
  return BroadcastSettingsUpdateToAllContainers();
}
