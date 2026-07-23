/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x140269F40
 * Callers:
 *     MiComputePageCommitment @ 0x140212C0C (MiComputePageCommitment.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x140307460 (MiSharedVaToPartition.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax

  if ( (a1 & 0x400) == 0 )
    return (a1 & 0x800) != 0;
  v1 = a1;
  if ( qword_140E2DCC0 )
  {
    if ( (a1 & 0x10) == 0 )
      v1 = a1 & ~qword_140E2DCC0;
  }
  return HIDWORD(v1) != 0xFFFFFFFF && (a1 & 0x800) != 0;
}
