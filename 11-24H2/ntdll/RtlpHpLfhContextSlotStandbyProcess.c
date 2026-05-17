/*
 * XREFs of RtlpHpLfhContextSlotStandbyProcess @ 0x18004B3D8
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextCleanup @ 0x18008EF4C (RtlpHpLfhContextCleanup.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800A4C3C (RtlpHpLfhContextSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x18004B220 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x18004E2B0 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004E6E0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800A4C98 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextLockExtension @ 0x1800A4E8C (RtlpHpLfhContextLockExtension.c)
 */

_QWORD *__fastcall RtlpHpLfhContextSlotStandbyProcess(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rsi
  unsigned __int8 *v7; // rbp
  __int64 v8; // r9
  int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v12[1] = v12;
  result = v12;
  v12[0] = v12;
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      RtlpHpLfhContextLockExtension(a1);
      v6 = *(_QWORD **)(a1 + 160);
      if ( v6 )
        *(_QWORD *)(a1 + 160) = *v6;
      result = (_QWORD *)RtlReleaseSRWLockExclusive(a1 + 128);
      if ( !v6 )
        break;
      v7 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v6 - 7) << 6));
      ((void (__fastcall *)(__int64, _QWORD *, _QWORD *, _QWORD))RtlpHpLfhOwnerFreeListProcess)(a1, v6 - 2, v12, 0LL);
      if ( (a2 & 1) != 0 )
      {
        v8 = 8LL;
      }
      else
      {
        v9 = RtlpHpLfhHeatMapQuery(a1, (volatile signed __int32 *)(a1 + 192), v7);
        v8 = 4LL;
        if ( v9 >= 1 )
          v8 = 8LL;
      }
      RtlpHpLfhBucketAddSubsegment(a1, v7, v12, v8);
      result = v6 + 3;
      if ( (_QWORD *)*result == result )
      {
        result = (_QWORD *)RtlpHpLfhContextMetadataFree(a1, v6 - 2, 2LL);
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
      return (_QWORD *)RtlReleaseSRWLockExclusive(a1 + 128);
    }
  }
  return result;
}
