/*
 * XREFs of AnFwFadeCompletion @ 0x140BB358C
 * Callers:
 *     BgpConsoleDisplayCharacter @ 0x140BB0AB0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140BB0E60 (BgpConsoleDisplayString.c)
 *     BgpFwLibraryDisable @ 0x140BB1724 (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140BB34C4 (ResFwFreeContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B67D4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGxRectangleDestroy @ 0x140BB3F04 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (dword_140EF0050 & 0xC00) != 0xC00 )
  {
    qword_140EEFB40 = BgpFwQueryPerformanceCounter(0LL).QuadPart;
    qword_140EEFB88 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E65018;
    qword_140EEFB48 = qword_140EEFB88;
    BgpFwReleaseLock(v1, v0);
    KeWaitForSingleObject(&stru_140E64FC0, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140E0EE48 )
    {
      BgpGxRectangleDestroy(qword_140E0EE48);
      qword_140E0EE48 = 0LL;
    }
    if ( qword_140E0EE78 )
    {
      BgpGxRectangleDestroy(qword_140E0EE78);
      qword_140E0EE78 = 0LL;
    }
    if ( qword_140E0EE80 )
    {
      BgpGxRectangleDestroy(qword_140E0EE80);
      qword_140E0EE80 = 0LL;
    }
    if ( qword_140E0EE88 )
    {
      BgpGxRectangleDestroy(qword_140E0EE88);
      qword_140E0EE88 = 0LL;
    }
    if ( qword_140E0EEB8 )
    {
      BgpGxRectangleDestroy(qword_140E0EEB8);
      qword_140E0EEB8 = 0LL;
    }
    if ( qword_140E0EEC0 )
    {
      BgpGxRectangleDestroy(qword_140E0EEC0);
      qword_140E0EEC0 = 0LL;
    }
  }
}
