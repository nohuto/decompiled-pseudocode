/*
 * XREFs of IsProcessWin32kLockedOut @ 0x140158EE0
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x140166C60 (UserGlobalAtomTableCallout.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B2370 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall IsProcessWin32kLockedOut(void *a1)
{
  char result; // al
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 4LL;
  if ( ZwQueryInformationProcess(a1, ProcessCookie|ProcessUserModeIOPL, &v2, 8u, 0LL) < 0 )
    return 0;
  result = 1;
  if ( (v2 & 0x100000000LL) == 0 )
    return 0;
  return result;
}
