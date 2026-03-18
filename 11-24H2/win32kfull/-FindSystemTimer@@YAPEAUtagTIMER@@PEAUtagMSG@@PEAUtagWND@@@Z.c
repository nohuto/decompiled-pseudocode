/*
 * XREFs of ?FindSystemTimer@@YAPEAUtagTIMER@@PEAUtagMSG@@PEAUtagWND@@@Z @ 0x140165784
 * Callers:
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall FindSystemTimer(__int64 **a1, struct tagWND *a2)
{
  __int64 ***v4; // r9
  __int64 **i; // r8

  v4 = (__int64 ***)(W32GetUserSessionState(a1, a2) + 57584);
  for ( i = *v4; i != (__int64 **)v4; i = (__int64 **)*i )
  {
    if ( (*(_DWORD *)(i - 3) & 2) != 0 && a1[2] == i[5] && a2 == (struct tagWND *)i[4] )
      return i - 9;
  }
  return 0LL;
}
