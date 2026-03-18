/*
 * XREFs of CloseProtectedHandle @ 0x1C002B684
 * Callers:
 *     EditionOpenInputDesktopEntryPoint @ 0x1C0028000 (EditionOpenInputDesktopEntryPoint.c)
 *     _CloseDesktop @ 0x1C0028218 (_CloseDesktop.c)
 *     _OpenDesktop @ 0x1C0028374 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C0028660 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00293D4 (xxxCreateDesktopEx.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C002A7B0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C002AB20 (xxxRestoreCsrssThreadDesktop.c)
 *     _OpenThreadDesktop @ 0x1C0091B34 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01BE458 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle, KPROCESSOR_MODE a2)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL, 0LL);
  return ObCloseHandle(Handle, a2);
}
