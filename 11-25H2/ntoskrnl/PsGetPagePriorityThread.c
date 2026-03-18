/*
 * XREFs of PsGetPagePriorityThread @ 0x1403059B0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14020D8E4 (SmKmStoreHelperCommandProcess.c)
 *     PfLogFileDataAccess @ 0x140301920 (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     CcScheduleReadAheadNuma @ 0x140499150 (CcScheduleReadAheadNuma.c)
 *     CcPerformReadAhead @ 0x1404DE7C0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 *     PfSnCheckActionsNeeded @ 0x140826AA8 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x140828698 (PfSnAsyncContextInitialize.c)
 *     EtwTraceThread @ 0x1408F592C (EtwTraceThread.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
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
