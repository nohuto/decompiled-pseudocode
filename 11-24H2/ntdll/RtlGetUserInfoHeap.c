/*
 * XREFs of RtlGetUserInfoHeap @ 0x1800E63B0
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800E66BC (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpGetExtraStuffPointer @ 0x18001FE30 (RtlpGetExtraStuffPointer.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x180059380 (RtlpProbeUserBufferSafe.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800E66BC (RtlDebugGetUserInfoHeap.c)
 *     RtlpHpGetUserInfo @ 0x1800E6818 (RtlpHpGetUserInfo.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  PVOID v6; // rsi
  __int16 v7; // bx
  ULONG v9; // ebx
  unsigned __int8 *v11; // rcx
  char v12; // al
  struct _TEB *v13; // rbx
  unsigned __int64 v14; // rsi
  int v15; // edx
  BOOLEAN v16; // bl
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v18; // rbx
  int v19; // r14d
  ULONG v20; // ecx
  unsigned int v21; // edx
  int v22; // r8d
  int v23; // ecx
  int v24; // ecx
  char v25; // [rsp+31h] [rbp-27h]

  v6 = BaseAddress;
  v7 = Flags;
  v25 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( Flags )
    {
      if ( Flags == 8 )
      {
        v19 = 2;
      }
      else
      {
        v20 = (Flags >> 2) & 2;
        v21 = v20 | 0x80000000;
        if ( (v7 & 4) == 0 )
          v21 = v20;
        v22 = v21 | 0x100;
        if ( (v7 & 0x100) == 0 )
          v22 = v21;
        v23 = v7 & 0xE00 | v22;
        if ( (v7 & 0xE00) == 0 )
          v23 = v22;
        v19 = v23 | 0x10000000;
        if ( (v7 & 0x10) == 0 )
          v19 = v23;
      }
    }
    else
    {
      v19 = 0;
    }
    return RtlpHpGetUserInfo((_DWORD)HeapHandle, (_DWORD)v6, v19, (_DWORD)UserValue, (__int64)UserFlags);
  }
  v9 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(HeapHandle, UserFlags);
  if ( (v9 & 0x800) != 0 || (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v11 = RtlpProbeUserBufferSafe((__int64)HeapHandle, (__int64)BaseAddress);
  }
  else
  {
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v24 = 9;
    }
    else
    {
      v11 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v11 -= 16 * v11[14];
      if ( (v11[15] & 0x3F) != 0 )
        goto LABEL_6;
      BaseAddress = v11;
      v24 = 8;
    }
    RtlpLogHeapFailure(v24, (__int64)HeapHandle, (__int64)BaseAddress, 0LL, 0LL, 0LL);
    v11 = 0LL;
  }
LABEL_6:
  if ( !v11 )
    goto LABEL_12;
  v12 = v11[15];
  if ( v12 < 0 )
  {
    if ( (v12 & 0x3F) != 0 )
    {
      if ( UserFlags )
        *UserFlags = 0;
      return 1;
    }
LABEL_12:
    v13 = NtCurrentTeb();
    v13->LastStatusValue = -1073741811;
    v13->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    return 0;
  }
  v14 = (unsigned __int64)v6 - 16;
  _m_prefetchw((const void *)v14);
  if ( *(_BYTE *)(v14 + 15) == 5 )
    v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v25 = 1;
  }
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    v15 = *(_DWORD *)(v14 + 8) ^ *((_DWORD *)HeapHandle + 34);
    *(_DWORD *)(v14 + 8) = v15;
    if ( HIBYTE(v15) != ((unsigned __int8)v15 ^ (unsigned __int8)(BYTE1(v15) ^ BYTE2(v15))) )
      RtlpAnalyzeHeapFailure((unsigned __int64)HeapHandle, v14);
  }
  if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
  {
    if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
    {
      ExtraStuffPointer = RtlpGetExtraStuffPointer(v14);
      if ( UserValue )
        *UserValue = *(PVOID *)(ExtraStuffPointer + 8);
    }
    if ( UserFlags )
      *UserFlags = 16 * (*(_BYTE *)(v14 + 10) & 0xE0);
    v16 = 1;
  }
  else
  {
    v18 = NtCurrentTeb();
    v18->LastStatusValue = -1073741811;
    v18->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    v16 = 0;
  }
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
    *(_DWORD *)(v14 + 8) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v25 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v16;
}
