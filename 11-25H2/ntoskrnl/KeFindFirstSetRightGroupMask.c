/*
 * XREFs of KeFindFirstSetRightGroupMask @ 0x140305380
 * Callers:
 *     PoCopyDeepIdleMask @ 0x14026728C (PoCopyDeepIdleMask.c)
 *     KeFindFirstSetLeftGroupMask @ 0x14026A604 (KeFindFirstSetLeftGroupMask.c)
 *     EtwTraceThreadAffinity @ 0x14026B7D8 (EtwTraceThreadAffinity.c)
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140304F78 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140305020 (KeQueryNodeActiveAffinityEx.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140305140 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     PpmEventTraceHeteroSets @ 0x140427BB0 (PpmEventTraceHeteroSets.c)
 *     PpmGetIdleConstrainedMask @ 0x1404B1924 (PpmGetIdleConstrainedMask.c)
 *     KeQueryNodeActiveAffinity2 @ 0x1404CCA50 (KeQueryNodeActiveAffinity2.c)
 *     KiChooseTargetProcessor @ 0x1404E7040 (KiChooseTargetProcessor.c)
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupMask(__int64 *a1)
{
  unsigned __int16 v2; // dx
  __int64 *v4; // rax
  __int64 i; // rcx
  __int64 v6; // rcx
  unsigned __int64 v8; // rax

  v2 = -1;
  v4 = a1;
  for ( i = *a1; ; i = *v4 )
  {
    v6 = ~i;
    if ( v6 != -1 )
      break;
    if ( ++v4 > a1 )
      return v2;
  }
  _BitScanForward64((unsigned __int64 *)&v6, ~v6);
  v8 = v6 + ((v4 - a1) << 6);
  if ( v8 > 0x1F )
    LOWORD(v8) = -1;
  return (unsigned __int16)v8;
}
