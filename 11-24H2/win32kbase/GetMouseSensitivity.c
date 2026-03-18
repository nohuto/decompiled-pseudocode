/*
 * XREFs of GetMouseSensitivity @ 0x1401080E0
 * Callers:
 *     PackMouseSettings @ 0x140213938 (PackMouseSettings.c)
 *     UnpackMouseSettings @ 0x140213D04 (UnpackMouseSettings.c)
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1402204DC (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     ?GetMouseSensitivityFactor@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x14022051C (-GetMouseSensitivityFactor@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 */

unsigned int __fastcall GetMouseSensitivity(_DWORD *a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1) + 16368);
  if ( a1 )
    *a1 = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivityFactor((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v2 + 104));
  return CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v2 + 104));
}
