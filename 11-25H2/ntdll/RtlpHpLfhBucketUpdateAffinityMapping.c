/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0
 * Callers:
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvTlsSetValue @ 0x18000A3CC (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x18000A840 (RtlpHpGetCurrentProcessorNumber.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800B810C (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhBucketGetSlotInfo @ 0x1800B8790 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x18011DED4 (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x18011E050 (RtlpHpAffinityMgrUpdateComplete.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, volatile signed __int8 *a2)
{
  unsigned int v3; // ebp
  char CurrentProcessorNumber; // bl
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned int SlotInfo; // eax
  __int64 v14; // r12
  char v15; // r8
  unsigned __int8 v16; // bp
  __int64 v17; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v19; // [rsp+30h] [rbp-158h]
  __int64 v20; // [rsp+30h] [rbp-158h]
  __int64 updated; // [rsp+38h] [rbp-150h]
  unsigned __int8 v22; // [rsp+3Dh] [rbp-14Bh]
  _BYTE v23[256]; // [rsp+40h] [rbp-148h] BYREF

  v3 = *(unsigned __int8 *)a2 >> 1;
  CurrentProcessorNumber = RtlpHpGetCurrentProcessorNumber();
  v6 = 0;
  v7 = *(unsigned __int8 *)(a1 + 64);
  v8 = CurrentProcessorNumber & 0x3F;
  if ( v8 >= v7 )
  {
    if ( v8 == v7 || (_BYTE)v7 == 1 )
      v8 = 0;
    else
      v8 = *(unsigned __int8 *)(v8 - v7 - 1 + *(_QWORD *)(a1 + 56));
  }
  v9 = *(unsigned __int16 *)(a1 + 76);
  if ( v9 < 0x40 )
  {
    result = __readgsqword(8 * v9 + 5248);
    goto LABEL_4;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    result = (unsigned __int64)TlsExpansionSlots[v9 - 64];
LABEL_4:
    if ( result )
      goto LABEL_5;
  }
  result = RtlpHpLfhThreadDataInitializeSet(a1);
LABEL_5:
  v11 = a1 + ((unsigned __int16)result << 6);
  v22 = BYTE5(result);
  v19 = result;
  if ( v11 >= a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8) + 1472 )
    return result;
  v12 = (unsigned __int64)v8 << 8;
  if ( v11 == v12 + a1 + 1472 )
  {
    result = (unsigned __int8)_InterlockedCompareExchange8(a2 + 104, 1, 0);
    if ( (_BYTE)result )
      return result;
    SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, a2, v23);
    v14 = v3;
    v15 = 0;
    v16 = v22;
    if ( v22 >= SlotInfo - 1 )
      v15 = SlotInfo < *(unsigned __int8 *)(a1 + 64);
    updated = RtlpHpAffinityMgrUpdateProcess(
                (int)a2 + 104,
                *(unsigned __int16 *)(v11 + 2 * v14),
                (unsigned int)v23,
                SlotInfo,
                v15);
    if ( (_DWORD)updated )
    {
      if ( (_DWORD)updated == 1 )
      {
        v6 = 1;
        *(_WORD *)(v11 + 2 * v14) = WORD2(updated);
        BYTE5(v19) = v16 + 1;
        RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), v19);
        return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v6);
      }
      if ( (_DWORD)updated != 2 )
      {
        if ( (_DWORD)updated == 3 )
        {
          v17 = RtlpHpLfhContextSlotAllocate(a1, a2);
          if ( v17 )
          {
            ++*((_BYTE *)a2 + 1);
            *(_WORD *)(v11 + 2 * v14) = (unsigned __int64)(v17 - a1) >> 6;
            if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
            {
              BYTE5(v19) = 0;
              RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), v19);
            }
            v6 = 1;
          }
        }
        return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v6);
      }
    }
    v6 = 1;
    return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v6);
  }
  v20 = result;
  LOWORD(v20) = (v12 + 1472) >> 6;
  BYTE4(v20) = v8;
  return RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), v20);
}
