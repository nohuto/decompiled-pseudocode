/*
 * XREFs of RtlSetUserFlagsHeap @ 0x180109150
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x180108FCC (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x180059380 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x180059480 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108FCC (RtlDebugSetUserFlagsHeap.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  char *v6; // r13
  __int16 v7; // bx
  ULONG v9; // ebx
  BOOLEAN v10; // si
  struct _TEB *v11; // rbx
  ULONG v12; // eax
  unsigned __int8 *v14; // rcx
  unsigned __int64 v15; // rbx
  char v16; // r15
  struct _TEB *v17; // rbx
  int v18; // ecx
  __int16 v19; // r8
  ULONG v20; // ecx
  __int16 v21; // dx
  __int16 v22; // r8
  __int16 v23; // cx
  unsigned __int64 v24; // rax
  char v25; // [rsp+31h] [rbp-27h]
  unsigned __int64 v26; // [rsp+38h] [rbp-20h]

  v6 = (char *)BaseAddress;
  v7 = Flags;
  v25 = 0;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_5;
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
        v21 = v20;
        if ( (v7 & 4) == 0 )
          v21 = v20;
        v22 = v21 | 0x100;
        if ( (v7 & 0x100) == 0 )
          v22 = v21;
        v23 = v7 & 0xE00 | v22;
        if ( (v7 & 0xE00) == 0 )
          v23 = v22;
        v19 = v23;
        if ( (v7 & 0x10) == 0 )
          v19 = v23;
      }
    }
    else
    {
      v19 = 0;
    }
    if ( v6 )
    {
      v24 = RtlpHpExtrasGet((_RTL_SRWLOCK *)HeapHandle, (unsigned __int64)v6, *((_WORD *)HeapHandle + 10) | v19, 0LL);
      if ( v24 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v10 = 0;
      }
      else
      {
        *(_BYTE *)(v24 + 2) = (16 * BYTE1(UserFlagsSet)) | *(_BYTE *)(v24 + 2) & ((16 * ~BYTE1(UserFlagsReset)) | 0xF);
        v10 = 1;
      }
      if ( v10 )
        return v10;
      v11 = NtCurrentTeb();
      v11->LastStatusValue = -1073741811;
      v12 = RtlNtStatusToDosErrorNoTeb(-1073741811);
LABEL_6:
      v11->LastErrorValue = v12;
      return v10;
    }
LABEL_5:
    v11 = NtCurrentTeb();
    v11->LastStatusValue = -1073741811;
    v12 = RtlNtStatusToDosErrorNoTeb(-1073741811);
    v10 = 0;
    goto LABEL_6;
  }
  v9 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
    return RtlDebugSetUserFlagsHeap(HeapHandle, v9, (char *)BaseAddress, UserFlagsReset, UserFlagsSet);
  v10 = 1;
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v14 = RtlpProbeUserBufferSafe((__int64)HeapHandle, (__int64)BaseAddress);
    goto LABEL_13;
  }
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    v18 = 9;
LABEL_30:
    RtlpLogHeapFailure(v18, (__int64)HeapHandle, (__int64)BaseAddress, 0LL, 0LL, 0LL);
    v14 = 0LL;
    goto LABEL_13;
  }
  v14 = (unsigned __int8 *)BaseAddress - 16;
  _m_prefetchw((char *)BaseAddress - 16);
  if ( *((char *)BaseAddress - 1) == 5 )
    v14 -= 16 * v14[14];
  if ( (v14[15] & 0x3F) == 0 )
  {
    BaseAddress = v14;
    v18 = 8;
    goto LABEL_30;
  }
LABEL_13:
  if ( !v14 || (v14[15] & 0x80u) != 0 )
    goto LABEL_5;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v25 = 1;
  }
  v15 = (unsigned __int64)(v6 - 16);
  _m_prefetchw(v6 - 16);
  if ( *(v6 - 1) == 5 )
    v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
  v26 = v15;
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    *(_DWORD *)(v15 + 8) ^= *((_DWORD *)HeapHandle + 34);
    if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
      RtlpAnalyzeHeapFailure((unsigned __int64)HeapHandle, v15);
  }
  if ( (*(_BYTE *)(v15 + 15) & 0x3F) != 0 )
  {
    v16 = *(_BYTE *)(v15 + 10) & ~(unsigned __int8)(UserFlagsReset >> 4);
    *(_BYTE *)(v15 + 10) = v16;
    *(_BYTE *)(v15 + 10) = v16 | (UserFlagsSet >> 4);
  }
  else
  {
    v17 = NtCurrentTeb();
    v17->LastStatusValue = -1073741811;
    v17->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    v15 = v26;
    v10 = 0;
  }
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
    *(_DWORD *)(v15 + 8) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v25 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v10;
}
