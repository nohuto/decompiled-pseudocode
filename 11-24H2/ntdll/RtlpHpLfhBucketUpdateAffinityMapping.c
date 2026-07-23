/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpLfhBucketGetSlotInfo @ 0x180026DE0 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvTlsSetValue @ 0x18006471C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x180064794 (RtlpHpGetCurrentProcessorNumber.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800D65B0 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x18011A86C (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x18011A9E8 (RtlpHpAffinityMgrUpdateComplete.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, volatile signed __int8 *a2)
{
  __int64 v3; // r14
  char CurrentProcessorNumber; // bl
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  void **TlsExpansionSlots; // rdx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int16 *v16; // r12
  __int64 result; // rax
  __int16 v18; // dx
  __int16 v19; // r14
  unsigned int SlotInfo; // eax
  char v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-168h]
  __int64 v25; // [rsp+30h] [rbp-168h]
  __int16 v26; // [rsp+38h] [rbp-160h]
  unsigned int v27; // [rsp+40h] [rbp-158h]
  __int64 updated; // [rsp+40h] [rbp-158h]
  _WORD v29[128]; // [rsp+50h] [rbp-148h] BYREF

  v3 = *(unsigned __int8 *)a2 >> 1;
  v27 = *(unsigned __int8 *)a2 >> 1;
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
    v10 = __readgsqword(8 * v9 + 5248);
    goto LABEL_10;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v10 = (unsigned __int64)TlsExpansionSlots[v9 - 64];
LABEL_10:
    if ( v10 )
      goto LABEL_12;
  }
  v10 = RtlpHpLfhThreadDataInitializeSet(a1);
LABEL_12:
  v12 = 0LL;
  v13 = a1 + ((unsigned __int16)v10 << 6);
  v14 = (unsigned __int64)v8 << 8;
  v15 = v14 + a1 + 1472;
  v24 = v10;
  if ( v13 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8) + 1472 )
  {
    if ( v13 != v15 )
    {
      v25 = v10;
      LOWORD(v25) = (v14 + 1472) >> 6;
      BYTE4(v25) = v8;
      return RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), v25);
    }
  }
  else
  {
    v16 = (__int16 *)(v13 + 2LL * (unsigned int)v3);
    result = HIDWORD(v10);
    v18 = *v16;
    v12 = v13;
    v19 = *(_WORD *)(v15 + 2LL * (unsigned int)v3);
    v13 = v15;
    v26 = *v16;
    if ( (_BYTE)result != (_BYTE)v8 )
    {
      BYTE4(v24) = v8;
      result = RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), v24);
      v18 = v26;
    }
    if ( v18 != v19 )
    {
      *v16 = v19;
      return result;
    }
    v3 = v27;
  }
  result = (unsigned __int8)_InterlockedCompareExchange8(a2 + 104, 1, 0);
  if ( !(_BYTE)result )
  {
    SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, (unsigned __int8 *)a2, v29);
    v21 = 0;
    if ( BYTE5(v24) >= SlotInfo - 1 )
      v21 = SlotInfo < *(unsigned __int8 *)(a1 + 64);
    updated = RtlpHpAffinityMgrUpdateProcess(
                (int)a2 + 104,
                *(unsigned __int16 *)(v13 + 2 * v3),
                (unsigned int)v29,
                SlotInfo,
                v21);
    switch ( (_DWORD)updated )
    {
      case 0:
        goto LABEL_38;
      case 1:
        *(_WORD *)(v13 + 2 * v3) = WORD2(updated);
        if ( v12 )
          *(_WORD *)(v12 + 2 * v3) = WORD2(updated);
        v6 = 1;
        ++BYTE5(v24);
        RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), v24);
        return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v6);
      case 2:
LABEL_38:
        v6 = 1;
        break;
      case 3:
        v22 = RtlpHpLfhContextSlotAllocate(a1, (__int64)a2);
        if ( v22 )
        {
          ++*((_BYTE *)a2 + 1);
          v23 = (unsigned __int64)(v22 - a1) >> 6;
          *(_WORD *)(v13 + 2 * v3) = v23;
          if ( v12 )
            *(_WORD *)(v12 + 2 * v3) = v23;
          if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
          {
            BYTE5(v24) = 0;
            RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), v24);
          }
          v6 = 1;
        }
        break;
    }
    return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v6);
  }
  return result;
}
