/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x14023D714
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiPdoRemovePdoObjects @ 0x1402558C8 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x140255D5C (DpiGdoDestroyGdiObjects.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1402CA0D0 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiFdoDestroyRelatedObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 64);
  DpiGdoDestroyGdiObjects();
  KeWaitForSingleObject((PVOID)(v2 + 3720), Executive, 0, 0, 0LL);
  KeReleaseMutex((PRKMUTEX)(v2 + 3720), 0);
  LOBYTE(v5) = 1;
  if ( (int)DpiAcquireCoreSyncAccessSafe(a1, v5) >= 0 )
  {
    DmmResetModeState(*(void *const *)(v2 + 4032), 0xFFFFFFFF);
    LOBYTE(v6) = 1;
    DpiReleaseCoreSyncAccessSafe(a1, v6);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL, a2);
}
