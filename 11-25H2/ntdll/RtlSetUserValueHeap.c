/*
 * XREFs of RtlSetUserValueHeap @ 0x1800962A0
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x180096590 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x180025F70 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x180055450 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x180055550 (RtlpHpExtrasGet.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlDebugSetUserValueHeap @ 0x180096590 (RtlDebugSetUserValueHeap.c)
 */

BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  PVOID v5; // r10
  __int16 v6; // si
  BOOLEAN v8; // r12
  char v9; // r15
  ULONG v10; // esi
  unsigned __int8 *v11; // rbx
  char v12; // al
  struct _TEB *v13; // rbx
  __int16 v15; // ax
  unsigned __int64 v16; // rax
  BOOLEAN v17; // r14
  int v18; // ecx
  ULONG v19; // ecx
  __int16 v20; // dx
  __int16 v21; // r8
  __int16 v22; // cx
  struct _TEB *v23; // rbx
  struct _TEB *v24; // rbx
  char v25; // [rsp+30h] [rbp-38h]

  v5 = BaseAddress;
  v6 = Flags;
  v8 = 0;
  v9 = 0;
  v25 = 0;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v10 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v10 & 0x61000000) != 0 && (v10 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap((int)HeapHandle);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) == 0 )
    {
      if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        v18 = 9;
      }
      else
      {
        v11 = (unsigned __int8 *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v11 -= 16 * v11[14];
        if ( (v11[15] & 0x3F) != 0 )
        {
LABEL_8:
          if ( !v11 )
          {
            v23 = NtCurrentTeb();
            v23->LastStatusValue = -1073741811;
            v23->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
            return 0;
          }
          if ( (v10 & 1) == 0 )
          {
            RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
            v9 = 1;
            v25 = 1;
          }
          v12 = v11[15];
          if ( (v12 & 0x3F) != 0 )
          {
            if ( v12 >= 0 )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
                if ( v11[11] != (v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
                  RtlpAnalyzeHeapFailure((__int64)HeapHandle, (unsigned __int64)v11);
              }
              if ( (v11[10] & 2) != 0 )
              {
                *(_QWORD *)(RtlpGetExtraStuffPointer((__int64)v11) + 8) = UserValue;
                v8 = 1;
              }
              goto LABEL_20;
            }
          }
          else
          {
            v13 = NtCurrentTeb();
            v13->LastStatusValue = -1073741811;
            v13->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
            v9 = v25;
            v8 = 0;
          }
          v11 = 0LL;
LABEL_20:
          if ( v11 && *((_DWORD *)HeapHandle + 31) )
          {
            v11[11] = v11[8] ^ v11[9] ^ v11[10];
            *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
          }
          if ( v9 )
            RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
          return v8;
        }
        BaseAddress = v11;
        v18 = 8;
      }
      RtlpLogHeapFailure(v18, (__int64)HeapHandle, (__int64)BaseAddress, 0LL, 0LL, 0LL);
      v11 = 0LL;
      goto LABEL_8;
    }
    v11 = RtlpProbeUserBufferSafe((__int64)HeapHandle, (__int64)BaseAddress);
    goto LABEL_8;
  }
  if ( Flags )
  {
    if ( Flags == 8 )
    {
      v15 = 2;
    }
    else
    {
      v19 = (Flags >> 2) & 2;
      v20 = v19;
      if ( (v6 & 4) == 0 )
        v20 = v19;
      v21 = v20 | 0x100;
      if ( (v6 & 0x100) == 0 )
        v21 = v20;
      v22 = v6 & 0xE00 | v21;
      if ( (v6 & 0xE00) == 0 )
        v22 = v21;
      v15 = v22;
      if ( (v6 & 0x10) == 0 )
        v15 = v22;
    }
  }
  else
  {
    v15 = 0;
  }
  v16 = RtlpHpExtrasGet((_RTL_SRWLOCK *)HeapHandle, (unsigned __int64)v5, *((_WORD *)HeapHandle + 10) | v15, 0LL);
  if ( v16 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v17 = 0;
  }
  else
  {
    *(_QWORD *)(v16 + 8) = UserValue;
    v17 = 1;
  }
  if ( !v17 )
  {
    v24 = NtCurrentTeb();
    v24->LastStatusValue = -1073741811;
    v24->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
  }
  return v17;
}
