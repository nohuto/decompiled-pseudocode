/*
 * XREFs of RtlpHpLfhContextSlotAllocate @ 0x1404B9584
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402B7624 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140606A80 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x1402B4550 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1402B5D24 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14045CC3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404B96F4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhSlotInitialize @ 0x1404C21E4 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhContextLockExtension @ 0x140606780 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140606834 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x14060694C (RtlpHpLfhContextUnlockExtension.c)
 */

__int64 __fastcall RtlpHpLfhContextSlotAllocate(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  char v6; // al
  __int64 v7; // rdx
  _QWORD *v8; // r14
  unsigned __int8 *v9; // rdi
  int v10; // r9d
  int v11; // eax
  char v12; // r9
  char v13; // al
  __int64 v14; // rdx
  _QWORD *v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v20[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v20[1] = (__int64 *)v20;
  v20[0] = (__int64 *)v20;
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      v6 = RtlpHpLfhContextLockExtension(a1);
      v8 = *(_QWORD **)(a1 + 160);
      if ( v8 )
        *(_QWORD *)(a1 + 160) = *v8;
      LOBYTE(v7) = v6;
      RtlpHpLfhContextUnlockExtension(a1, v7);
      if ( !v8 )
        break;
      v9 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v8 - 7) << 6));
      RtlpHpLfhOwnerFreeListProcess(a1, (__int64)(v8 - 2), (unsigned __int64 *)v20, 0);
      v11 = RtlpHpLfhHeatMapQuery(a1, a1 + 192, v9, v10);
      v12 = 8;
      if ( v11 < 1 )
        v12 = 4;
      RtlpHpLfhBucketAddSubsegment(a1, (__int64)v9, v20, v12);
      if ( (_QWORD *)v8[3] == v8 + 3 )
      {
        RtlpHpLfhContextMetadataFree(a1, v8 - 2, 2LL);
      }
      else
      {
        *v8 = v3;
        v3 = v8;
      }
    }
    while ( *(_QWORD *)(a1 + 160) );
    if ( v3 )
    {
      v13 = RtlpHpLfhContextLockExtension(a1);
      v15 = *(_QWORD **)(a1 + 160);
      do
      {
        v16 = v3;
        v3 = (_QWORD *)*v3;
        *v16 = v15;
        v15 = v16;
        *(_QWORD *)(a1 + 160) = v16;
      }
      while ( v3 );
      LOBYTE(v14) = v13;
      RtlpHpLfhContextUnlockExtension(a1, v14);
    }
  }
  v17 = RtlpHpLfhContextMetadataAllocate(a1, 2LL, a3);
  v18 = v17;
  if ( v17 )
    RtlpHpLfhSlotInitialize(v17, a2, a1);
  return v18;
}
