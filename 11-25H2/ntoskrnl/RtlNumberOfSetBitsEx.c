/*
 * XREFs of RtlNumberOfSetBitsEx @ 0x140305240
 * Callers:
 *     KeGetNodePrimarySubNode @ 0x1402676D4 (KeGetNodePrimarySubNode.c)
 *     KeFindFirstSetLeftGroupMask @ 0x14026A604 (KeFindFirstSetLeftGroupMask.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140304F78 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeIsEmptyGroupMask @ 0x140304FE8 (KeIsEmptyGroupMask.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140305020 (KeQueryNodeActiveAffinityEx.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140305140 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KiHeteroSelectIdleProcessorFromNode @ 0x14032E630 (KiHeteroSelectIdleProcessorFromNode.c)
 *     IopLiveDumpWriteDumpFile @ 0x14049AB34 (IopLiveDumpWriteDumpFile.c)
 *     KeCountSetBitsGroupMask @ 0x1404A1600 (KeCountSetBitsGroupMask.c)
 *     KeFindBiasedSetBitGroupMask @ 0x1404BAF00 (KeFindBiasedSetBitGroupMask.c)
 *     KeQueryNodeActiveAffinity2 @ 0x1404CCA50 (KeQueryNodeActiveAffinity2.c)
 *     KiChooseTargetProcessor @ 0x1404E7040 (KiChooseTargetProcessor.c)
 *     HvlIsSingleGroupRequired @ 0x14057F084 (HvlIsSingleGroupRequired.c)
 *     IoWriteCrashDump @ 0x14058EFA4 (IoWriteCrashDump.c)
 *     IopLiveDumpCollectPages @ 0x140596B54 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405972B0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B140 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     RtlNumberOfClearBitsEx @ 0x1405DC0A0 (RtlNumberOfClearBitsEx.c)
 *     MiMakeEntireHugePfnGood @ 0x140665344 (MiMakeEntireHugePfnGood.c)
 *     MiFinishChildPartitionHotAdd @ 0x14067EAA0 (MiFinishChildPartitionHotAdd.c)
 *     MiInsertPartitionPageNodes @ 0x14067EE34 (MiInsertPartitionPageNodes.c)
 *     MiInsertPartitionPages @ 0x14067F040 (MiInsertPartitionPages.c)
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBitsEx(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r8
  unsigned __int64 *v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r9
  int v6; // r11d
  unsigned __int64 v7; // rbx
  int v8; // r10d
  int v9; // r14d
  unsigned __int64 v10; // rsi
  int i; // r9d
  char v12; // dl
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  int v16; // r9d
  unsigned __int64 v17; // rbx
  int v18; // ebp
  char v19; // dl

  v1 = *a1;
  v2 = 0LL;
  v3 = (unsigned __int64 *)a1[1];
  v4 = *a1 & 7;
  v5 = (unsigned __int64)*a1 >> 3;
  v6 = (unsigned __int8)v3 & 7;
  v7 = v5 + (v4 != 0);
  if ( 8 - (unsigned __int64)((unsigned __int8)v3 & 7) <= v5 )
  {
    v8 = 8 - v6;
    v16 = ((_BYTE)v5 - (8 - (_BYTE)v6)) & 7;
    v9 = v16 + 1;
    if ( !v4 )
      v9 = v16;
    v10 = v7 - (unsigned int)(v9 + v8);
  }
  else
  {
    v8 = v5 + (v4 != 0);
    v9 = 0;
    v10 = 0LL;
  }
  for ( i = 0; v8; --v8 )
  {
    v12 = *(_BYTE *)v3;
    v3 = (unsigned __int64 *)((char *)v3 + 1);
    if ( i == v7 - 1 && v4 )
      v12 &= byte_14002B070[v4];
    ++i;
    v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v12);
  }
  if ( v10 )
  {
    v14 = ((v10 - 1) >> 3) + 1;
    i += 8 * v14;
    do
    {
      v15 = *v3++;
      v2 += (unsigned int)__popcnt(v15);
      --v14;
    }
    while ( v14 );
  }
  if ( v9 )
  {
    v17 = v7 - 1;
    v18 = v1 & 7;
    do
    {
      v19 = *(_BYTE *)v3;
      v3 = (unsigned __int64 *)((char *)v3 + 1);
      if ( i == v17 && v18 )
        v19 &= byte_14002B070[v18];
      ++i;
      v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v19);
      --v9;
    }
    while ( v9 );
  }
  return v2;
}
