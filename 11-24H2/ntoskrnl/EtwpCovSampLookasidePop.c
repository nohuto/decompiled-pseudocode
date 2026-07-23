/*
 * XREFs of EtwpCovSampLookasidePop @ 0x14045BD10
 * Callers:
 *     EtwpCovSampSampleBufferReserve @ 0x140434910 (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureBufferGet @ 0x1404ECF6C (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140650210 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140439240 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
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
