/*
 * XREFs of CloseProtectedHandle @ 0x1401AABAC
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x140107460 (xxxSetCsrssThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1401952E0 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1401CE108 (_OpenDesktop.c)
 *     _OpenThreadDesktop @ 0x140205314 (_OpenThreadDesktop.c)
 *     xxxResolveDesktop @ 0x14023C550 (xxxResolveDesktop.c)
 *     _CloseDesktop @ 0x14028628C (_CloseDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x140286E50 (xxxResolveDesktopForWOW.c)
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
