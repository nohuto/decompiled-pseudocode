/*
 * XREFs of WheapCreateLiveDumpFromPreviousSession @ 0x140B63FA8
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x140474590 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     WheapReportLiveDump @ 0x1407C8DE8 (WheapReportLiveDump.c)
 *     WheapSaveRecordForLiveDump @ 0x140B6403C (WheapSaveRecordForLiveDump.c)
 */

__int64 __fastcall WheapCreateLiveDumpFromPreviousSession(__int64 a1)
{
  char v3; // bl
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v4[0] = 0LL;
  v4[1] = 0LL;
  v6 = 0;
  if ( _InterlockedIncrement(&WheapLiveDumpsCreated) > 8 )
    return 3221225473LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  v3 = WheapCrashDumpInitialized;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  if ( !v3 )
    return WheapSaveRecordForLiveDump(a1);
  v7 = a1 + 40;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
  return WheapReportLiveDump((__int64)v4);
}
