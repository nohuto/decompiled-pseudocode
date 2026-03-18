/*
 * XREFs of ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14009D200
 * Callers:
 *     NtUserTranslateAccelerator @ 0x14009CCF0 (NtUserTranslateAccelerator.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     NtUserTrackPopupMenuEx @ 0x1401B1250 (NtUserTrackPopupMenuEx.c)
 *     NtUserGetMenuItemRect @ 0x1401B1410 (NtUserGetMenuItemRect.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     NtUserPaintMonitor @ 0x14029A240 (NtUserPaintMonitor.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 */

__int64 __fastcall Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>(ULONG_PTR a1)
{
  return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(a1);
}
