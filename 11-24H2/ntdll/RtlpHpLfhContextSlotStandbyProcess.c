/*
 * XREFs of RtlpHpLfhContextSlotStandbyProcess @ 0x180060FB8
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x180026920 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800D65B0 (RtlpHpLfhContextSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x180060E00 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x180063E90 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1800642C0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800D660C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextLockExtension @ 0x1800D6800 (RtlpHpLfhContextLockExtension.c)
 */

void __fastcall RtlpHpLfhContextSlotStandbyProcess(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rsi
  unsigned __int8 *v6; // rbp
  __int64 v7; // r9
  int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v11[1] = v11;
  v11[0] = v11;
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      RtlpHpLfhContextLockExtension(a1);
      v5 = *(_QWORD **)(a1 + 160);
      if ( v5 )
        *(_QWORD *)(a1 + 160) = *v5;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 128));
      if ( !v5 )
        break;
      v6 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v5 - 7) << 6));
      ((void (__fastcall *)(__int64, _QWORD *, _QWORD *, _QWORD))RtlpHpLfhOwnerFreeListProcess)(a1, v5 - 2, v11, 0LL);
      if ( (a2 & 1) != 0 )
      {
        v7 = 8LL;
      }
      else
      {
        v8 = RtlpHpLfhHeatMapQuery(a1, (volatile signed __int32 *)(a1 + 192), v6);
        v7 = 4LL;
        if ( v8 >= 1 )
          v7 = 8LL;
      }
      RtlpHpLfhBucketAddSubsegment(a1, v6, v11, v7);
      if ( (_QWORD *)v5[3] == v5 + 3 )
      {
        RtlpHpLfhContextMetadataFree(a1, v5 - 2, 2LL);
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
      RtlpHpLfhContextLockExtension(a1);
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
