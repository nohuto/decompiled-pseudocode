/*
 * XREFs of RtlpHpLfhContextSlotAllocate @ 0x1404B4424
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1406040C0 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotInitialize @ 0x1403D7E64 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1403D8924 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1404321F4 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404B4594 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextLockExtension @ 0x140603DC0 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140603E74 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140603F8C (RtlpHpLfhContextUnlockExtension.c)
 */

__int64 __fastcall RtlpHpLfhContextSlotAllocate(__int64 a1, unsigned __int8 *a2)
{
  _QWORD *v2; // rbx
  char v5; // al
  __int64 v6; // rdx
  _QWORD *v7; // r14
  unsigned __int8 *v8; // rdi
  int v9; // r9d
  int v10; // eax
  char v11; // r9
  char v12; // al
  __int64 v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v19[1] = (unsigned __int64)v19;
  v19[0] = (unsigned __int64)v19;
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      v5 = RtlpHpLfhContextLockExtension(a1);
      v7 = *(_QWORD **)(a1 + 160);
      if ( v7 )
        *(_QWORD *)(a1 + 160) = *v7;
      LOBYTE(v6) = v5;
      RtlpHpLfhContextUnlockExtension(a1, v6);
      if ( !v7 )
        break;
      v8 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v7 - 7) << 6));
      RtlpHpLfhOwnerFreeListProcess(a1, (__int64)(v7 - 2), v19, 0);
      v10 = RtlpHpLfhHeatMapQuery(a1, a1 + 192, v8, v9);
      v11 = 8;
      if ( v10 < 1 )
        v11 = 4;
      RtlpHpLfhBucketAddSubsegment(a1, (__int64)v8, v19, v11);
      if ( (_QWORD *)v7[3] == v7 + 3 )
      {
        RtlpHpLfhContextMetadataFree(a1, v7 - 2, 2LL);
      }
      else
      {
        *v7 = v2;
        v2 = v7;
      }
    }
    while ( *(_QWORD *)(a1 + 160) );
    if ( v2 )
    {
      v12 = RtlpHpLfhContextLockExtension(a1);
      v14 = *(_QWORD **)(a1 + 160);
      do
      {
        v15 = v2;
        v2 = (_QWORD *)*v2;
        *v15 = v14;
        v14 = v15;
        *(_QWORD *)(a1 + 160) = v15;
      }
      while ( v2 );
      LOBYTE(v13) = v12;
      RtlpHpLfhContextUnlockExtension(a1, v13);
    }
  }
  v16 = RtlpHpLfhContextMetadataAllocate(a1, 2LL);
  v17 = v16;
  if ( v16 )
    RtlpHpLfhSlotInitialize(v16, a2, a1);
  return v17;
}
