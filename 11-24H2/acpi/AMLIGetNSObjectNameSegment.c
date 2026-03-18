/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x140040B14
 * Callers:
 *     AcpiArblibAllocateArbiterInstance @ 0x14009ABC0 (AcpiArblibAllocateArbiterInstance.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1400A5090 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIGetPnpLocationString @ 0x1400B5410 (ACPIGetPnpLocationString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 40LL);
}
