/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpEnvTlsGetValue @ 0x14035F690 (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x1403689B4 (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x140368B4C (RtlpHpAffinityMgrUpdateComplete.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1403FBF40 (KeGetCurrentProcessorNumberEx.c)
 *     RtlpHpLfhBucketGetSlotInfo @ 0x1404324D0 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B4424 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvTlsSetValue @ 0x1404F2F94 (RtlpHpEnvTlsSetValue.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, volatile signed __int8 *a2)
{
  __int64 v3; // r14
  char CurrentProcessorNumber; // bl
  int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 Value; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int16 *v14; // r12
  unsigned __int64 v15; // rax
  __int16 v16; // dx
  __int16 v17; // r14
  unsigned int SlotInfo; // eax
  char v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v23; // [rsp+30h] [rbp-168h]
  unsigned __int64 v24; // [rsp+30h] [rbp-168h]
  __int16 v25; // [rsp+38h] [rbp-160h]
  unsigned int v26; // [rsp+40h] [rbp-158h]
  __int64 updated; // [rsp+40h] [rbp-158h]
  unsigned __int16 v28[128]; // [rsp+50h] [rbp-148h] BYREF

  v3 = *(unsigned __int8 *)a2 >> 1;
  v26 = *(unsigned __int8 *)a2 >> 1;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
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
  Value = RtlpHpEnvTlsGetValue(*(_DWORD *)(a1 + 76));
  if ( !Value )
    Value = RtlpHpLfhThreadDataInitializeSet(a1);
  v10 = 0LL;
  v11 = a1 + ((unsigned __int16)Value << 6);
  v12 = (unsigned __int64)v8 << 8;
  v13 = v12 + a1 + 1472;
  v23 = Value;
  if ( v11 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8) + 1472 )
  {
    if ( v11 != v13 )
    {
      v24 = Value;
      LOWORD(v24) = (v12 + 1472) >> 6;
      BYTE4(v24) = v8;
      LOBYTE(v15) = RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v24);
      return v15;
    }
    goto LABEL_18;
  }
  v14 = (__int16 *)(v11 + 2 * v3);
  v15 = HIDWORD(Value);
  v16 = *v14;
  v10 = v11;
  v17 = *(_WORD *)(v13 + 2 * v3);
  v11 = v13;
  v25 = *v14;
  if ( (_BYTE)v15 != (_BYTE)v8 )
  {
    BYTE4(v23) = v8;
    LOBYTE(v15) = RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v23);
    v16 = v25;
  }
  if ( v16 == v17 )
  {
    v3 = v26;
LABEL_18:
    LOBYTE(v15) = _InterlockedCompareExchange8(a2 + 104, 1, 0);
    if ( (_BYTE)v15 )
      return v15;
    SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, (unsigned __int8 *)a2, v28);
    v19 = 0;
    if ( BYTE5(v23) >= SlotInfo - 1 )
      v19 = SlotInfo < *(unsigned __int8 *)(a1 + 64);
    updated = RtlpHpAffinityMgrUpdateProcess(
                (__int64)(a2 + 104),
                *(unsigned __int16 *)(v11 + 2 * v3),
                v28,
                SlotInfo,
                v19);
    switch ( (_DWORD)updated )
    {
      case 0:
        goto LABEL_34;
      case 1:
        *(_WORD *)(v11 + 2 * v3) = WORD2(updated);
        if ( v10 )
          *(_WORD *)(v10 + 2 * v3) = WORD2(updated);
        v6 = 1;
        ++BYTE5(v23);
        RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v23);
        break;
      case 2:
LABEL_34:
        v6 = 1;
        break;
      case 3:
        v20 = RtlpHpLfhContextSlotAllocate(a1, (unsigned __int8 *)a2);
        if ( v20 )
        {
          ++*((_BYTE *)a2 + 1);
          v21 = (unsigned __int64)(v20 - a1) >> 6;
          *(_WORD *)(v11 + 2 * v3) = v21;
          if ( v10 )
            *(_WORD *)(v10 + 2 * v3) = v21;
          if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
          {
            BYTE5(v23) = 0;
            RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v23);
          }
          v6 = 1;
        }
        break;
    }
    LOBYTE(v15) = RtlpHpAffinityMgrUpdateComplete((__int64)(a2 + 104), updated, v6);
    return v15;
  }
  *v14 = v17;
  return v15;
}
