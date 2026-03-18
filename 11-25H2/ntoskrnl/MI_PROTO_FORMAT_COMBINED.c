/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x1402CF530
 * Callers:
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x14023B3F0 (MiSharedVaToPartition.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x14065DD60 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax

  if ( (a1 & 0x400) == 0 )
    return (a1 & 0x800) != 0;
  v1 = a1;
  if ( qword_140E2D940 )
  {
    if ( (a1 & 0x10) == 0 )
      v1 = a1 & ~qword_140E2D940;
  }
  return HIDWORD(v1) != 0xFFFFFFFF && (a1 & 0x800) != 0;
}
