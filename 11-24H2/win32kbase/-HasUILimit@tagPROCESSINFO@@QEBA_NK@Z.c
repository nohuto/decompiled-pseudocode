/*
 * XREFs of ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340
 * Callers:
 *     UserGetDesktopDC @ 0x14000EDE0 (UserGetDesktopDC.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     RealInternalSetProp @ 0x140168EA0 (RealInternalSetProp.c)
 *     NtUserActivateKeyboardLayout @ 0x14016B3B0 (NtUserActivateKeyboardLayout.c)
 *     NtUserChangeDisplaySettings @ 0x14016B4D0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserGetDC @ 0x14016C9E0 (NtUserGetDC.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x140171750 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x140171AA0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagPROCESSINFO::HasUILimit(tagPROCESSINFO *this, int a2)
{
  int ProcessEffectiveUILimits; // eax
  char v4; // cl

  ProcessEffectiveUILimits = KfGetProcessEffectiveUILimits(*(_QWORD *)this);
  v4 = 0;
  if ( ProcessEffectiveUILimits )
    return (a2 & ProcessEffectiveUILimits) == a2;
  return v4;
}
