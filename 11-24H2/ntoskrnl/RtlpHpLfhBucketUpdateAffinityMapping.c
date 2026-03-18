/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402B7624
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeap @ 0x1402B7A40 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpLfhBucketGetSlotInfo @ 0x1402B482C (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x1404895B0 (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x140489748 (RtlpHpAffinityMgrUpdateComplete.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B9584 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvTlsSetValue @ 0x1404F5694 (RtlpHpEnvTlsSetValue.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, volatile signed __int8 *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // edi
  __int64 v5; // r15
  unsigned int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  __int64 result; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned int SlotInfo; // eax
  int v14; // r9d
  char v15; // r8
  __int64 v16; // r13
  unsigned __int8 v17; // r15
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-168h]
  __int64 v20; // [rsp+30h] [rbp-168h]
  __int64 updated; // [rsp+38h] [rbp-160h]
  unsigned __int8 v22; // [rsp+3Dh] [rbp-15Bh]
  _WORD v23[128]; // [rsp+50h] [rbp-148h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 64);
  v4 = 0;
  v5 = *(unsigned __int8 *)a2 >> 1;
  v7 = KeGetCurrentPrcb()->Number & 0x3F;
  if ( v7 >= v3 )
  {
    if ( v7 == v3 || (_BYTE)v3 == 1 )
      v7 = 0;
    else
      v7 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + -1 - v3 + v7);
  }
  v8 = (*(_DWORD *)(a1 + 76) >> 13) & 0x3FFFF;
  _BitScanReverse(&v9, v8);
  result = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v9 - 2) + 8LL * (v8 ^ (1 << v9)) + 8)
                     + 8LL * ((*(_DWORD *)(a1 + 76) >> 4) & 0x1FF));
  if ( !result )
    result = RtlpHpLfhThreadDataInitializeSet(a1);
  v11 = a1 + ((unsigned __int16)result << 6);
  v22 = BYTE5(result);
  v19 = result;
  if ( v11 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8) + 1472 )
  {
    v12 = (unsigned __int64)v7 << 8;
    if ( v11 != v12 + a1 + 1472 )
    {
      v20 = result;
      LOWORD(v20) = (v12 + 1472) >> 6;
      BYTE4(v20) = v7;
      return RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v20);
    }
    result = (unsigned __int8)_InterlockedCompareExchange8(a2 + 104, 1, 0);
    if ( (_BYTE)result )
      return result;
    SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, (unsigned __int8 *)a2, v23);
    v14 = *(unsigned __int16 *)(v11 + 2 * v5);
    v15 = 0;
    v16 = (unsigned int)v5;
    v17 = v22;
    if ( v22 >= SlotInfo - 1 )
      v15 = SlotInfo < *(unsigned __int8 *)(a1 + 64);
    updated = RtlpHpAffinityMgrUpdateProcess((int)a2 + 104, v14, (unsigned int)v23, SlotInfo, v15);
    if ( (_DWORD)updated )
    {
      if ( (_DWORD)updated == 1 )
      {
        v4 = 1;
        *(_WORD *)(v11 + 2 * v16) = WORD2(updated);
        BYTE5(v19) = v17 + 1;
        RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v19);
        return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v4);
      }
      if ( (_DWORD)updated != 2 )
      {
        if ( (_DWORD)updated == 3 )
        {
          v18 = RtlpHpLfhContextSlotAllocate(a1, a2);
          if ( v18 )
          {
            ++*((_BYTE *)a2 + 1);
            *(_WORD *)(v11 + 2 * v16) = (unsigned __int64)(v18 - a1) >> 6;
            if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
            {
              BYTE5(v19) = 0;
              RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v19);
            }
            v4 = 1;
          }
        }
        return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v4);
      }
    }
    v4 = 1;
    return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v4);
  }
  return result;
}
