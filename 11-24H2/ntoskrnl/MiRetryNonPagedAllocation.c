/*
 * XREFs of MiRetryNonPagedAllocation @ 0x14047C730
 * Callers:
 *     MiGetPoolPages @ 0x14034B598 (MiGetPoolPages.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 */

__int64 __fastcall MiRetryNonPagedAllocation(int a1)
{
  unsigned int v3; // ebx
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS i; // edi
  KIRQL v6; // bp

  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 0LL;
  v3 = 0;
  if ( !KeAreInterruptsEnabled() || a1 )
    return 0LL;
  if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0xA0uLL) )
    return 1LL;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_140E3CCA8, WrFreePage, 0, 0, Timeout) )
  {
    v6 = ExAcquireSpinLockExclusive(dword_140E3CC80);
    if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0xA0uLL) )
      break;
    if ( i == 1 )
    {
      if ( byte_140E2CB9C )
      {
        if ( dword_140E2CB98 == dword_140E3CCC0 )
          goto LABEL_22;
        byte_140E2CB9C = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_140E2CB9C )
        {
          dword_140E2CB98 = dword_140E3CCC0;
          byte_140E2CB9C = 1;
        }
        goto LABEL_22;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_140E3CCA8);
    MiReleaseSpinLockExclusive(dword_140E3CC80, v6);
  }
  if ( byte_140E2CB9C )
    byte_140E2CB9C = 0;
  v3 = 1;
LABEL_22:
  MiReleaseSpinLockExclusive(dword_140E3CC80, v6);
  return v3;
}
