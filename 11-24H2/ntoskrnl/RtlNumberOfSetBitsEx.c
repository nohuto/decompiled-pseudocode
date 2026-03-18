/*
 * XREFs of RtlNumberOfSetBitsEx @ 0x1404181F0
 * Callers:
 *     KiHeteroSelectIdleProcessorFromNode @ 0x1402938F0 (KiHeteroSelectIdleProcessorFromNode.c)
 *     KeQueryNodeActiveAffinity2 @ 0x140417E90 (KeQueryNodeActiveAffinity2.c)
 *     KeFindFirstSetLeftGroupMask @ 0x140417FA4 (KeFindFirstSetLeftGroupMask.c)
 *     KeCountSetBitsGroupMask @ 0x140418024 (KeCountSetBitsGroupMask.c)
 *     KeFindBiasedSetBitGroupMask @ 0x14041804C (KeFindBiasedSetBitGroupMask.c)
 *     IopLiveDumpWriteDumpFile @ 0x14049ADE4 (IopLiveDumpWriteDumpFile.c)
 *     HvlIsSingleGroupRequired @ 0x140582834 (HvlIsSingleGroupRequired.c)
 *     IoWriteCrashDump @ 0x1405927D4 (IoWriteCrashDump.c)
 *     IopLiveDumpCollectPages @ 0x14059A264 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14059A9C0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059E850 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     RtlNumberOfClearBitsEx @ 0x1405E8150 (RtlNumberOfClearBitsEx.c)
 *     MiMakeEntireHugePfnGood @ 0x140670DEC (MiMakeEntireHugePfnGood.c)
 *     MiFinishChildPartitionHotAdd @ 0x14068A330 (MiFinishChildPartitionHotAdd.c)
 *     MiInsertPartitionPageNodes @ 0x14068A6C4 (MiInsertPartitionPageNodes.c)
 *     MiInsertPartitionPages @ 0x14068A8D0 (MiInsertPartitionPages.c)
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
      v12 &= byte_14002B770[v4];
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
        v19 &= byte_14002B770[v18];
      ++i;
      v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v19);
      --v9;
    }
    while ( v9 );
  }
  return v2;
}
