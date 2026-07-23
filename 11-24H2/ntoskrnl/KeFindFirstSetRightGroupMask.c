/*
 * XREFs of KeFindFirstSetRightGroupMask @ 0x140330524
 * Callers:
 *     PoCopyDeepIdleMask @ 0x14032C648 (PoCopyDeepIdleMask.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140330080 (KeQueryNodeActiveAffinityEx.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140330300 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 *     KeQueryNodeActiveAffinity2 @ 0x140407C40 (KeQueryNodeActiveAffinity2.c)
 *     KeFindFirstSetLeftGroupMask @ 0x140407D54 (KeFindFirstSetLeftGroupMask.c)
 *     PpmEventTraceHeteroSets @ 0x14042BE28 (PpmEventTraceHeteroSets.c)
 *     PpmGetIdleConstrainedMask @ 0x1404AD2F4 (PpmGetIdleConstrainedMask.c)
 *     KiChooseTargetProcessor @ 0x1404DE410 (KiChooseTargetProcessor.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
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
