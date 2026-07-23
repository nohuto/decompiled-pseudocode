/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x1404341E4
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x1404340A0 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140650064 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140650210 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureApcRundown @ 0x1407B23D0 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall EtwpCovSampCaptureApcRelease(PSLIST_ENTRY ListEntry)
{
  __int64 v1; // rbp
  _SLIST_ENTRY *Next; // rsi
  _SLIST_ENTRY *v4; // rbx
  unsigned __int32 v5; // eax

  v1 = qword_140EFEFA8;
  memset_0(&ListEntry[3].Next + 1, 0, 0x58uLL);
  LODWORD(ListEntry[9].Next) = 0;
  Next = ListEntry[3].Next;
  v4 = Next[2].Next;
  if ( !*((_DWORD *)&Next[2].Next + 2) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)Next[2].Next, ListEntry);
    v5 = _InterlockedIncrement((volatile signed __int32 *)&v4[4].Next + 3);
    if ( v5 < *((_DWORD *)&v4[4].Next + 2) )
      return v5;
    goto LABEL_3;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)ListEntry[3].Next, ListEntry);
  v5 = *((_DWORD *)&Next[2].Next + 2);
  if ( !v5 )
LABEL_3:
    LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)(v1 + 1192), 0LL, 0LL);
  return v5;
}
