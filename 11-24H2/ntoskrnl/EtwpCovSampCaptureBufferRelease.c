/*
 * XREFs of EtwpCovSampCaptureBufferRelease @ 0x140434AE4
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1404347FC (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureSample @ 0x140650444 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B2900 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140922D10 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureBufferRelease(__int64 a1, _SLIST_ENTRY *a2)
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
