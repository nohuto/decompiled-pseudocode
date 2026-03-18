/*
 * XREFs of MiRetryNonPagedAllocation @ 0x1404807B0
 * Callers:
 *     MiGetPoolPages @ 0x140378DE4 (MiGetPoolPages.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
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
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_140E3C928, WrFreePage, 0, 0, Timeout) )
  {
    v6 = ExAcquireSpinLockExclusive(dword_140E3C900);
    if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0xA0uLL) )
      break;
    if ( i == 1 )
    {
      if ( byte_140E2C81C )
      {
        if ( dword_140E2C818 == dword_140E3C940 )
          goto LABEL_22;
        byte_140E2C81C = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_140E2C81C )
        {
          dword_140E2C818 = dword_140E3C940;
          byte_140E2C81C = 1;
        }
        goto LABEL_22;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_140E3C928);
    MiReleaseSpinLockExclusive(dword_140E3C900, v6);
  }
  if ( byte_140E2C81C )
    byte_140E2C81C = 0;
  v3 = 1;
LABEL_22:
  MiReleaseSpinLockExclusive(dword_140E3C900, v6);
  return v3;
}
