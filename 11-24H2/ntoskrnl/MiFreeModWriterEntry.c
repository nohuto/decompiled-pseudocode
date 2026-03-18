/*
 * XREFs of MiFreeModWriterEntry @ 0x14043A49C
 * Callers:
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiDeleteMappedMdls @ 0x140469D6C (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1407EEEF8 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x14043A500 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *P, unsigned int a2)
{
  __int64 v3; // rsi
  void *v6; // rcx

  v3 = P[7];
  if ( (P[5] & 0x20) != 0 )
  {
    v6 = (void *)P[9];
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  ExFreePoolWithTag(P, 0);
  return MiReleaseWriteInProgressCharges(v3, 1LL, a2);
}
