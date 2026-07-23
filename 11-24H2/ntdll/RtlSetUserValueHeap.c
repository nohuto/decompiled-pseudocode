/*
 * XREFs of RtlSetUserValueHeap @ 0x18001FB40
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x18010C554 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpGetExtraStuffPointer @ 0x18001FE30 (RtlpGetExtraStuffPointer.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x180059380 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x180059480 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlDebugSetUserValueHeap @ 0x18010C554 (RtlDebugSetUserValueHeap.c)
 */

BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  PVOID v5; // r10
  BOOLEAN v8; // r12
  char v9; // r15
  ULONG v10; // esi
  char *v11; // rbx
  char v12; // al
  struct _TEB *v13; // rbx
  int v15; // eax
  __int64 v16; // rax
  BOOLEAN v17; // r14
  int v18; // ecx
  ULONG v19; // edx
  int v20; // r8d
  ULONG v21; // ecx
  struct _TEB *v22; // rbx
  struct _TEB *v23; // rbx
  char v24; // [rsp+30h] [rbp-38h]

  v5 = BaseAddress;
  v8 = 0;
  v9 = 0;
  v24 = 0;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v10 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v10 & 0x61000000) != 0 && (v10 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap(HeapHandle);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) == 0 )
    {
      if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        v18 = 9;
      }
      else
      {
        v11 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v11 -= 16 * (unsigned __int8)v11[14];
        if ( (v11[15] & 0x3F) != 0 )
        {
LABEL_8:
          if ( !v11 )
          {
            v22 = NtCurrentTeb();
            v22->LastStatusValue = -1073741811;
            v22->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
            return 0;
          }
          if ( (v10 & 1) == 0 )
          {
            RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
            v9 = 1;
            v24 = 1;
          }
          v12 = v11[15];
          if ( (v12 & 0x3F) != 0 )
          {
            if ( v12 >= 0 )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
                if ( v11[11] != ((unsigned __int8)v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
                  RtlpAnalyzeHeapFailure((unsigned __int64)HeapHandle, (unsigned __int64)v11);
              }
              if ( (v11[10] & 2) != 0 )
              {
                *(_QWORD *)(RtlpGetExtraStuffPointer(v11) + 8) = UserValue;
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
            v9 = v24;
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
        LODWORD(BaseAddress) = (_DWORD)v11;
        v18 = 8;
      }
      RtlpLogHeapFailure(v18, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
      v11 = 0LL;
      goto LABEL_8;
    }
    v11 = (char *)RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
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
      v19 = (Flags >> 2) & 2 | 0x80000000;
      if ( (Flags & 4) == 0 )
        v19 = (Flags >> 2) & 2;
      v20 = v19 | 0x100;
      if ( (Flags & 0x100) == 0 )
        v20 = v19;
      v21 = Flags & 0xE00 | v20;
      if ( (Flags & 0xE00) == 0 )
        v21 = v20;
      v15 = v21 | 0x10000000;
      if ( (Flags & 0x10) == 0 )
        v15 = v21;
    }
  }
  else
  {
    v15 = 0;
  }
  v16 = RtlpHpExtrasGet(HeapHandle, v5, *((_DWORD *)HeapHandle + 5) | (unsigned int)v15, 0LL);
  if ( (unsigned __int64)(v16 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
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
    v23 = NtCurrentTeb();
    v23->LastStatusValue = -1073741811;
    v23->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
  }
  return v17;
}
