/*
 * XREFs of PsGetPagePriorityThread @ 0x140208FD0
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 *     PfLogFileDataAccess @ 0x140275080 (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     CcScheduleReadAheadNuma @ 0x1404992C0 (CcScheduleReadAheadNuma.c)
 *     CcPerformReadAhead @ 0x1404DDEB0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 *     EtwTraceThread @ 0x1408A6918 (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x140961228 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x140962E58 (PfSnAsyncContextInitialize.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned int v3; // ecx

  result = (*(_DWORD *)(a1 + 1440) >> 12) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1092);
    if ( (unsigned int)result >= v3 )
      return v3;
  }
  return result;
}
