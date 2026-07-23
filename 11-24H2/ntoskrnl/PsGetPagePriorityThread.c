/*
 * XREFs of PsGetPagePriorityThread @ 0x1403305B0
 * Callers:
 *     PfLogFileDataAccess @ 0x14022A610 (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcAsyncCopyRead @ 0x140273E20 (CcAsyncCopyRead.c)
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 *     CcPerformReadAhead @ 0x1404D78D0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404D929C (CcCompleteAsyncRead.c)
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x140948CE8 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x14094A918 (PfSnAsyncContextInitialize.c)
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
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
