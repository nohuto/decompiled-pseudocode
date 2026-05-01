/*
 * XREFs of DeviceConvertibilityHelpers::QueryDeviceConvertibility @ 0x180112BA4
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x180112AD0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 * Callees:
 *     ?HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ @ 0x180112C44 (-HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

__int64 __fastcall DeviceConvertibilityHelpers::QueryDeviceConvertibility(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // r9d
  __int64 result; // rax
  TabletModeHelpers *v6; // rcx
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_LOCAL_MACHINE,
              L"System\\CurrentControlSet\\Control\\PriorityControl",
              L"ConvertibilityEnabled",
              a4,
              &v7) >= 0 )
    return v7 != 0 ? 1 : 3;
  v7 = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleChassis",
              L"ConvertibleChassis",
              v4,
              &v7) < 0 )
    return 2 - (unsigned int)TabletModeHelpers::HasConvertibleSlateModeChanged(v6);
  result = 1LL;
  v6 = (TabletModeHelpers *)(v7 != 0 ? 1 : 3);
  if ( (v7 != 0 ? 0xFFFFFFFE : 0) != 0xFFFFFFFE )
    return 2 - (unsigned int)TabletModeHelpers::HasConvertibleSlateModeChanged(v6);
  return result;
}
