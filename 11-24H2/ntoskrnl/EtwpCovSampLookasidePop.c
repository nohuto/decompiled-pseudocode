/*
 * XREFs of EtwpCovSampLookasidePop @ 0x140465630
 * Callers:
 *     EtwpCovSampSampleBufferReserve @ 0x14043ED5C (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureBufferGet @ 0x1404EF638 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140651B10 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254310 (KiInsertQueueDpc.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140442670 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampLookasidePop(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( *(_WORD *)a2 && (result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a2)) != 0LL )
  {
    if ( *(_DWORD *)(a2 + 40) )
    {
      result->Next = (_SLIST_ENTRY *)6941;
    }
    else
    {
      EtwpCovSampCaptureReleaseToLookaside(a1, a2, result);
      return 0LL;
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
      if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 1068)) >= 0x40 )
      {
        *(_DWORD *)(a1 + 1068) = MEMORY[0xFFFFF78000000320];
        KiInsertQueueDpc(a1 + 976, 0LL, 0LL, 0LL, 0);
      }
    }
    return 0LL;
  }
  return result;
}
