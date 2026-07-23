/*
 * XREFs of KeIsEmptyGroupMask @ 0x14032FF20
 * Callers:
 *     KeGetNodePrimarySubNode @ 0x14026FD94 (KeGetNodePrimarySubNode.c)
 *     PoCopyDeepIdleMask @ 0x14032C648 (PoCopyDeepIdleMask.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     PpmEventTraceHeteroSets @ 0x14042BE28 (PpmEventTraceHeteroSets.c)
 *     PpmGetIdleConstrainedMask @ 0x1404AD2F4 (PpmGetIdleConstrainedMask.c)
 *     KiChooseTargetProcessor @ 0x1404DE410 (KiChooseTargetProcessor.c)
 *     KeQueryActiveNodeCount @ 0x1405B7F94 (KeQueryActiveNodeCount.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PspReadIFEONodeOptions @ 0x140A17168 (PspReadIFEONodeOptions.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 *     PspSelectNodeForProcess @ 0x140A6DD70 (PspSelectNodeForProcess.c)
 *     KiConfigureProcessorBlock @ 0x140B57FF8 (KiConfigureProcessorBlock.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyGroupMask(unsigned __int64 *a1)
{
  unsigned int v1; // r10d
  __int64 v2; // r11
  int v3; // ebx
  int v4; // r8d
  int v5; // r14d
  __int64 v6; // rbp
  int i; // r9d
  char v8; // dl
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  char v12; // dl

  v1 = 0;
  v2 = 0LL;
  v3 = (unsigned __int8)a1 & 7;
  if ( 8 - (unsigned __int64)((unsigned __int8)a1 & 7) <= 4 )
  {
    v4 = 8 - v3;
    v5 = (4 - (8 - (_BYTE)v3)) & 7;
    v6 = 4LL - (unsigned int)(v5 + 8 - v3);
  }
  else
  {
    v4 = 4;
    v5 = 0;
    v6 = 0LL;
  }
  for ( i = 0; v4; --v4 )
  {
    v8 = *(_BYTE *)a1;
    a1 = (unsigned __int64 *)((char *)a1 + 1);
    ++i;
    v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v8);
  }
  if ( v6 )
  {
    v10 = ((unsigned __int64)(v6 - 1) >> 3) + 1;
    i += 8 * v10;
    do
    {
      v11 = *a1++;
      v2 += (unsigned int)__popcnt(v11);
      --v10;
    }
    while ( v10 );
  }
  for ( ; v5; --v5 )
  {
    v12 = *(_BYTE *)a1;
    a1 = (unsigned __int64 *)((char *)a1 + 1);
    ++i;
    v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v12);
  }
  LOBYTE(v1) = v2 == 0;
  return v1;
}
