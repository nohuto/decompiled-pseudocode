/*
 * XREFs of RtlpHpLfhContextSlotStandbyProcess @ 0x14049CB38
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1406050DC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x1402B4550 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1402B5D24 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14045CC3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhContextLockExtension @ 0x140606780 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140606834 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x14060694C (RtlpHpLfhContextUnlockExtension.c)
 */

__int64 **__fastcall RtlpHpLfhContextSlotStandbyProcess(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  __int64 **result; // rax
  char v6; // al
  __int64 v7; // rdx
  _QWORD *v8; // rsi
  unsigned __int8 *v9; // rbp
  int v10; // r9d
  char v11; // r9
  int v12; // eax
  char v13; // al
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 *v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v16[1] = (__int64 *)v16;
  result = v16;
  v16[0] = (__int64 *)v16;
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      v6 = RtlpHpLfhContextLockExtension(a1);
      v8 = *(_QWORD **)(a1 + 160);
      if ( v8 )
        *(_QWORD *)(a1 + 160) = *v8;
      LOBYTE(v7) = v6;
      result = (__int64 **)RtlpHpLfhContextUnlockExtension(a1, v7);
      if ( !v8 )
        break;
      v9 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v8 - 7) << 6));
      RtlpHpLfhOwnerFreeListProcess(a1, (__int64)(v8 - 2), (unsigned __int64 *)v16, 0);
      if ( (a2 & 1) != 0 )
      {
        v11 = 8;
      }
      else
      {
        v12 = RtlpHpLfhHeatMapQuery(a1, a1 + 192, v9, v10);
        v11 = 4;
        if ( v12 >= 1 )
          v11 = 8;
      }
      RtlpHpLfhBucketAddSubsegment(a1, (__int64)v9, v16, v11);
      result = (__int64 **)(v8 + 3);
      if ( *result == (__int64 *)result )
      {
        result = (__int64 **)RtlpHpLfhContextMetadataFree(a1, v8 - 2, 2LL);
      }
      else
      {
        *v8 = v2;
        v2 = v8;
      }
    }
    while ( *(_QWORD *)(a1 + 160) );
    if ( v2 )
    {
      v13 = RtlpHpLfhContextLockExtension(a1);
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
      LOBYTE(v14) = v13;
      return (__int64 **)RtlpHpLfhContextUnlockExtension(a1, v14);
    }
  }
  return result;
}
