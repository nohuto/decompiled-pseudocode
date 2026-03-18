/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x14040E5F0
 * Callers:
 *     MiSharedVaToPartition @ 0x140214100 (MiSharedVaToPartition.c)
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiGetPageProtection @ 0x1403019B0 (MiGetPageProtection.c)
 *     MiCheckCommitReleaseFromVad @ 0x140669880 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax

  if ( (a1 & 0x400) == 0 )
    return (a1 & 0x800) != 0;
  v1 = a1;
  if ( qword_140E2DB80 )
  {
    if ( (a1 & 0x10) == 0 )
      v1 = a1 & ~qword_140E2DB80;
  }
  return HIDWORD(v1) != 0xFFFFFFFF && (a1 & 0x800) != 0;
}
