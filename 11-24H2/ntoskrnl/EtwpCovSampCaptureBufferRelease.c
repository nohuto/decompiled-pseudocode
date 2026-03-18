/*
 * XREFs of EtwpCovSampCaptureBufferRelease @ 0x14043EF30
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x14043EC48 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureSample @ 0x140651D44 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B24B0 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140900430 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureBufferRelease(__int64 a1, struct _SLIST_ENTRY *a2)
{
  _SLIST_ENTRY *Next; // rdi
  _SLIST_ENTRY *v4; // rbx
  unsigned __int32 v5; // eax

  Next = a2[3].Next;
  v4 = Next[2].Next;
  if ( !*((_DWORD *)&Next[2].Next + 2) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)Next[2].Next, a2);
    v5 = _InterlockedIncrement((volatile signed __int32 *)&v4[4].Next + 3);
    if ( v5 < *((_DWORD *)&v4[4].Next + 2) )
      return v5;
    goto LABEL_3;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)Next, a2);
  v5 = *((_DWORD *)&Next[2].Next + 2);
  if ( !v5 )
LABEL_3:
    LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)(a1 + 1192), 0LL, 0LL);
  return v5;
}
