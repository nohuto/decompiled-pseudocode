/*
 * XREFs of AnFwFadeCompletion @ 0x140BA358C
 * Callers:
 *     BgpConsoleDisplayCharacter @ 0x140BA0AB0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140BA0E60 (BgpConsoleDisplayString.c)
 *     BgpFwLibraryDisable @ 0x140BA1724 (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140BA34C4 (ResFwFreeContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B6CE4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGxRectangleDestroy @ 0x140BA3F04 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (dword_140EEFD90 & 0xC00) != 0xC00 )
  {
    qword_140EEF888 = BgpFwQueryPerformanceCounter(0LL).QuadPart;
    qword_140EEF8E0 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64DD8;
    qword_140EEF8A0 = qword_140EEF8E0;
    BgpFwReleaseLock(v1, v0);
    KeWaitForSingleObject(&stru_140E64D80, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140E0EC28 )
    {
      BgpGxRectangleDestroy(qword_140E0EC28);
      qword_140E0EC28 = 0LL;
    }
    if ( qword_140E0EC58 )
    {
      BgpGxRectangleDestroy(qword_140E0EC58);
      qword_140E0EC58 = 0LL;
    }
    if ( qword_140E0EC60 )
    {
      BgpGxRectangleDestroy(qword_140E0EC60);
      qword_140E0EC60 = 0LL;
    }
    if ( qword_140E0EC68 )
    {
      BgpGxRectangleDestroy(qword_140E0EC68);
      qword_140E0EC68 = 0LL;
    }
    if ( qword_140E0EC98 )
    {
      BgpGxRectangleDestroy(qword_140E0EC98);
      qword_140E0EC98 = 0LL;
    }
    if ( qword_140E0ECA0 )
    {
      BgpGxRectangleDestroy(qword_140E0ECA0);
      qword_140E0ECA0 = 0LL;
    }
  }
}
