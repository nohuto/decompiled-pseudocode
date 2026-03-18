/*
 * XREFs of KeFindFirstSetRightGroupMask @ 0x140208F44
 * Callers:
 *     PoCopyDeepIdleMask @ 0x140205068 (PoCopyDeepIdleMask.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402088E0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140208AA0 (KeQueryNodeActiveAffinityEx.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140208D20 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     EtwTraceThreadAffinity @ 0x1403B3E48 (EtwTraceThreadAffinity.c)
 *     KeQueryNodeActiveAffinity2 @ 0x140417E90 (KeQueryNodeActiveAffinity2.c)
 *     KeFindFirstSetLeftGroupMask @ 0x140417FA4 (KeFindFirstSetLeftGroupMask.c)
 *     PpmEventTraceHeteroSets @ 0x140439268 (PpmEventTraceHeteroSets.c)
 *     PpmGetIdleConstrainedMask @ 0x1404B2AEC (PpmGetIdleConstrainedMask.c)
 *     KiChooseTargetProcessor @ 0x1404E7710 (KiChooseTargetProcessor.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 *     MmCreatePeb @ 0x140AE79AC (MmCreatePeb.c)
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
