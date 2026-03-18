/*
 * XREFs of ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x140097A5C
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1400E4890 (xxxUserChangeDisplaySettings.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x14016F580 (NtUserQueryDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 *     NtUserSetManipulationInputTarget @ 0x140171460 (NtUserSetManipulationInputTarget.c)
 *     NtUserToUnicodeEx @ 0x140173450 (NtUserToUnicodeEx.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1400991CC (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    result = PopAndFreeW32ThreadLock();
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
