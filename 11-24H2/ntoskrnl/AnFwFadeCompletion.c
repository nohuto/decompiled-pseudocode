/*
 * XREFs of AnFwFadeCompletion @ 0x140BB558C
 * Callers:
 *     BgpConsoleDisplayCharacter @ 0x140BB2AB0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140BB2E60 (BgpConsoleDisplayString.c)
 *     BgpFwLibraryDisable @ 0x140BB3724 (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140BB54C4 (ResFwFreeContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B0FB4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGxRectangleDestroy @ 0x140BB5F04 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (dword_140EF0270 & 0xC00) != 0xC00 )
  {
    qword_140EEFDD8 = BgpFwQueryPerformanceCounter(0LL).QuadPart;
    qword_140EEFD80 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E65198;
    qword_140EEFDE8 = qword_140EEFD80;
    BgpFwReleaseLock(v1, v0);
    KeWaitForSingleObject(&stru_140E65140, Executive, 0, 0, 0LL);
    BgpFwAcquireLock(v3, v2, v4, v5);
    if ( qword_140E0EF08 )
    {
      BgpGxRectangleDestroy(qword_140E0EF08);
      qword_140E0EF08 = 0LL;
    }
    if ( qword_140E0EF38 )
    {
      BgpGxRectangleDestroy(qword_140E0EF38);
      qword_140E0EF38 = 0LL;
    }
    if ( qword_140E0EF40 )
    {
      BgpGxRectangleDestroy(qword_140E0EF40);
      qword_140E0EF40 = 0LL;
    }
    if ( qword_140E0EF48 )
    {
      BgpGxRectangleDestroy(qword_140E0EF48);
      qword_140E0EF48 = 0LL;
    }
    if ( qword_140E0EF78 )
    {
      BgpGxRectangleDestroy(qword_140E0EF78);
      qword_140E0EF78 = 0LL;
    }
    if ( qword_140E0EF80 )
    {
      BgpGxRectangleDestroy(qword_140E0EF80);
      qword_140E0EF80 = 0LL;
    }
  }
}
