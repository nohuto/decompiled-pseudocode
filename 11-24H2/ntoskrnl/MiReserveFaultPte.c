/*
 * XREFs of MiReserveFaultPte @ 0x140679910
 * Callers:
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 MiReserveFaultPte()
{
  KIRQL v0; // bl
  __int64 ClearBitsAndSet; // rdi
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 16LL;
  BitMapHeader.Buffer = (unsigned int *)byte_140E37454;
  v0 = ExAcquireSpinLockExclusive(&dword_140E37450);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  MiReleaseSpinLockExclusive(&dword_140E37450, v0);
  if ( (_DWORD)ClearBitsAndSet == -1 )
    return 0LL;
  else
    return qword_140E37448 + 8 * ClearBitsAndSet;
}
