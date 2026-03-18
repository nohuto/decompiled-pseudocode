/*
 * XREFs of ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1400E4890 (xxxUserChangeDisplaySettings.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x14016F580 (NtUserQueryDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 *     NtUserSetManipulationInputTarget @ 0x140171460 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetSysColors @ 0x140171750 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x140171AA0 (NtUserSystemParametersInfo.c)
 *     NtUserToUnicodeEx @ 0x140173450 (NtUserToUnicodeEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
