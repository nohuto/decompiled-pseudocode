/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140113C28
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1401134D8 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x140113AD4 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x140113C10 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  return *(_QWORD *)(v3 + 24192) == PsGetCurrentProcess();
}
