/*
 * XREFs of ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400E7320
 * Callers:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x140034950 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E71E0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     <none>
 */

__int64 GrepGetCurrentProcessBehaviorRestriction()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !(unsigned __int8)PsIsWin32KFilterEnabled() )
    return 0LL;
  LOBYTE(v0) = (unsigned int)PsGetWin32KFilterSet() == 5;
  return v0;
}
