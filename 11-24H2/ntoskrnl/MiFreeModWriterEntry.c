/*
 * XREFs of MiFreeModWriterEntry @ 0x14042CCD0
 * Callers:
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiDeleteMappedMdls @ 0x140462C9C (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1407EF4C8 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x14042CD34 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
