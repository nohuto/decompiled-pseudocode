/*
 * XREFs of EtwpCovSampCaptureReleaseToLookaside @ 0x140442320
 * Callers:
 *     EtwpCovSampLookasidePop @ 0x140466A90 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407A30E0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureReleaseToLookaside(__int64 a1, __int64 a2, _SLIST_ENTRY *a3)
{
  __int64 v4; // rsi
  unsigned __int32 v6; // eax

  v4 = *(_QWORD *)(a2 + 32);
  if ( !*(_DWORD *)(a2 + 40) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v4, a3);
    v6 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 76));
    if ( v6 < *(_DWORD *)(v4 + 72) )
      return v6;
    goto LABEL_3;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, a3);
  v6 = *(_DWORD *)(a2 + 40);
  if ( !v6 )
LABEL_3:
    LOBYTE(v6) = KeInsertQueueDpc((PRKDPC)(a1 + 1192), 0LL, 0LL);
  return v6;
}
