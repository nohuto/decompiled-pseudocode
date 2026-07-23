/*
 * XREFs of RtlpHpLfhContextSlotStandbyProcess @ 0x1404977E0
 * Callers:
 *     RtlpHpHeapDestroy @ 0x14060271C (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1403D8924 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1404321F4 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhContextLockExtension @ 0x140603DC0 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140603E74 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140603F8C (RtlpHpLfhContextUnlockExtension.c)
 */

unsigned __int64 *__fastcall RtlpHpLfhContextSlotStandbyProcess(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 *result; // rax
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
  unsigned __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v16[1] = (unsigned __int64)v16;
  result = v16;
  v16[0] = (unsigned __int64)v16;
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      v6 = RtlpHpLfhContextLockExtension(a1);
      v8 = *(_QWORD **)(a1 + 160);
      if ( v8 )
        *(_QWORD *)(a1 + 160) = *v8;
      LOBYTE(v7) = v6;
      result = (unsigned __int64 *)RtlpHpLfhContextUnlockExtension(a1, v7);
      if ( !v8 )
        break;
      v9 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v8 - 7) << 6));
      RtlpHpLfhOwnerFreeListProcess(a1, (__int64)(v8 - 2), v16, 0);
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
      result = v8 + 3;
      if ( (unsigned __int64 *)*result == result )
      {
        result = (unsigned __int64 *)RtlpHpLfhContextMetadataFree(a1, v8 - 2, 2LL);
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
      return (unsigned __int64 *)RtlpHpLfhContextUnlockExtension(a1, v14);
    }
  }
  return result;
}
