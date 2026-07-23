/*
 * XREFs of EtwpCovSampCaptureBufferQueue @ 0x1404347FC
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140650444 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140922D10 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140434910 (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140434AE4 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1406507D4 (EtwpCovSampSampleBufferDecRef.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

char __fastcall EtwpCovSampCaptureBufferQueue(__int64 a1, __int64 a2)
{
  int v4; // eax
  PSLIST_ENTRY v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rax
  int v8; // edx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  v4 = *(unsigned __int16 *)(a2 + 62);
  if ( !(_WORD)v4 )
    goto LABEL_2;
  v6 = 8 * v4;
  v7 = EtwpCovSampSampleBufferReserve(a1, (unsigned __int16)(8 * v4), &v10);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4) ^ (*(_DWORD *)(v7 + 4) ^ (*(unsigned __int16 *)(a2 + 62) << 16)) & 0x7FFF0000;
    *(_DWORD *)(v7 + 4) = v8;
    *(_DWORD *)(v7 + 4) = v8 & 0x7FFFFFFF | ((*(_DWORD *)(a2 + 56) & 0xFFFFFFFC) << 29);
    memmove((void *)(v7 + 8), (const void *)(a2 + 64), v6);
    EtwpCovSampSampleBufferDecRef(a1, v10);
LABEL_2:
    LOBYTE(v5) = EtwpCovSampCaptureBufferRelease();
    return (char)v5;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    v5 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1072), (PSLIST_ENTRY)a2);
    if ( !v5 )
      LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)(a1 + 1128), 0LL, 0LL);
  }
  else
  {
    v5 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1088), (PSLIST_ENTRY)a2);
    if ( !v5 )
      LOBYTE(v5) = KeSetEvent((PRKEVENT)(a1 + 1104), *(_DWORD *)(a1 + 1304), 0);
  }
  return (char)v5;
}
