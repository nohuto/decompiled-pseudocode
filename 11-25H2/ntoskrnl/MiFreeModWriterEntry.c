/*
 * XREFs of MiFreeModWriterEntry @ 0x14040ABB0
 * Callers:
 *     MiDeleteMappedMdls @ 0x14040A9BC (MiDeleteMappedMdls.c)
 *     MiMappedPageWriter @ 0x14040C760 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiDeletePagefile @ 0x1407DF058 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x14040AC14 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
