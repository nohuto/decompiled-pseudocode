/*
 * XREFs of MiReserveFaultPte @ 0x140678784
 * Callers:
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14024B8D0 (RtlFindClearBitsAndSet.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 MiReserveFaultPte()
{
  KIRQL v0; // bl
  __int64 ClearBitsAndSet; // rdi
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 16LL;
  BitMapHeader.Buffer = (unsigned int *)byte_140E37314;
  v0 = ExAcquireSpinLockExclusive(&dword_140E37310);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  MiReleaseSpinLockExclusive(&dword_140E37310, v0);
  if ( (_DWORD)ClearBitsAndSet == -1 )
    return 0LL;
  else
    return qword_140E37308 + 8 * ClearBitsAndSet;
}
