/*
 * XREFs of RtlpHpLfhContextSlotStandbyProcess @ 0x1800B8200
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800B810C (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextCleanup @ 0x1800B8168 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpHpLfhContextMetadataFree @ 0x180009A2C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextLockExtension @ 0x180009A88 (RtlpHpLfhContextLockExtension.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x180032D10 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180033290 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhHeatMapQuery @ 0x180033740 (RtlpHpLfhHeatMapQuery.c)
 */

void __fastcall RtlpHpLfhContextSlotStandbyProcess(unsigned __int64 a1, char a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rsi
  unsigned __int8 *v6; // rbp
  char v7; // r9
  int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 *v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v11[1] = (__int64 *)v11;
  v11[0] = (__int64 *)v11;
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      RtlpHpLfhContextLockExtension((_RTL_SRWLOCK *)a1);
      v5 = *(_QWORD **)(a1 + 160);
      if ( v5 )
        *(_QWORD *)(a1 + 160) = *v5;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 128));
      if ( !v5 )
        break;
      v6 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v5 - 7) << 6));
      RtlpHpLfhOwnerFreeListProcess((_QWORD *)a1, (__int64)(v5 - 2), (unsigned __int64 *)v11, 0);
      if ( (a2 & 1) != 0 )
      {
        v7 = 8;
      }
      else
      {
        v8 = RtlpHpLfhHeatMapQuery(a1, (volatile signed __int32 *)(a1 + 192), v6);
        v7 = 4;
        if ( v8 >= 1 )
          v7 = 8;
      }
      RtlpHpLfhBucketAddSubsegment(a1, (__int64)v6, v11, v7);
      if ( (_QWORD *)v5[3] == v5 + 3 )
      {
        RtlpHpLfhContextMetadataFree((_RTL_SRWLOCK *)a1, v5 - 2, 2);
      }
      else
      {
        *v5 = v2;
        v2 = v5;
      }
    }
    while ( *(_QWORD *)(a1 + 160) );
    if ( v2 )
    {
      RtlpHpLfhContextLockExtension((_RTL_SRWLOCK *)a1);
      v9 = *(_QWORD **)(a1 + 160);
      do
      {
        v10 = v2;
        v2 = (_QWORD *)*v2;
        *v10 = v9;
        v9 = v10;
        *(_QWORD *)(a1 + 160) = v10;
      }
      while ( v2 );
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 128));
    }
  }
}
