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

__int64 **__fastcall RtlpHpLfhContextSlotStandbyProcess(unsigned __int64 a1, char a2)
{
  _QWORD *v2; // rbx
  __int64 **result; // rax
  _QWORD *v6; // rsi
  unsigned __int8 *v7; // rbp
  char v8; // r9
  int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 *v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v12[1] = (__int64 *)v12;
  result = v12;
  v12[0] = (__int64 *)v12;
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      RtlpHpLfhContextLockExtension(a1);
      v6 = *(_QWORD **)(a1 + 160);
      if ( v6 )
        *(_QWORD *)(a1 + 160) = *v6;
      result = (__int64 **)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 128));
      if ( !v6 )
        break;
      v7 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v6 - 7) << 6));
      RtlpHpLfhOwnerFreeListProcess((_QWORD *)a1, (__int64)(v6 - 2), (unsigned __int64 *)v12, 0);
      if ( (a2 & 1) != 0 )
      {
        v8 = 8;
      }
      else
      {
        v9 = RtlpHpLfhHeatMapQuery(a1, (volatile signed __int32 *)(a1 + 192), v7);
        v8 = 4;
        if ( v9 >= 1 )
          v8 = 8;
      }
      RtlpHpLfhBucketAddSubsegment(a1, (__int64)v7, v12, v8);
      result = (__int64 **)(v6 + 3);
      if ( *result == (__int64 *)result )
      {
        result = (__int64 **)RtlpHpLfhContextMetadataFree(a1, v6 - 2, 2);
      }
      else
      {
        *v6 = v2;
        v2 = v6;
      }
    }
    while ( *(_QWORD *)(a1 + 160) );
    if ( v2 )
    {
      RtlpHpLfhContextLockExtension(a1);
      v10 = *(_QWORD **)(a1 + 160);
      do
      {
        v11 = v2;
        v2 = (_QWORD *)*v2;
        *v11 = v10;
        v10 = v11;
        *(_QWORD *)(a1 + 160) = v11;
      }
      while ( v2 );
      return (__int64 **)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 128));
    }
  }
  return result;
}
