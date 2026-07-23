/*
 * XREFs of MiReserveFaultPte @ 0x14066CE78
 * Callers:
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     RtlFindClearBitsAndSet @ 0x140338AF0 (RtlFindClearBitsAndSet.c)
 */

__int64 MiReserveFaultPte()
{
  KIRQL v0; // bl
  __int64 ClearBitsAndSet; // rdi
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 16LL;
  BitMapHeader.Buffer = (unsigned int *)byte_140E370D4;
  v0 = ExAcquireSpinLockExclusive(&dword_140E370D0);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  MiReleaseSpinLockExclusive(&dword_140E370D0, v0);
  if ( (_DWORD)ClearBitsAndSet == -1 )
    return 0LL;
  else
    return qword_140E370C8 + 8 * ClearBitsAndSet;
}
