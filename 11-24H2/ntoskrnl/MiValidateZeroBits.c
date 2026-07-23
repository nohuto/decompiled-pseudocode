/*
 * XREFs of MiValidateZeroBits @ 0x1409169F0
 * Callers:
 *     NtCreateEnclave @ 0x1407F80D0 (NtCreateEnclave.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409157C0 (MiAllocateVirtualMemoryPrepare.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x1404410F0 (RtlFindMostSignificantBit.c)
 */

ULONGLONG __fastcall MiValidateZeroBits(ULONGLONG *a1)
{
  ULONGLONG result; // rax
  unsigned __int64 v3; // rcx

  result = *a1;
  if ( *a1 )
  {
    if ( result < 0x20 )
      v3 = result + 32;
    else
      v3 = 63 - RtlFindMostSignificantBit(*a1);
    result = 0LL;
    *a1 = v3;
    if ( v3 > 0x35 )
      return 3221225485LL;
  }
  return result;
}
