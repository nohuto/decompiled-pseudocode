/*
 * XREFs of RtlSetUserFlagsHeap @ 0x18010E270
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x18010E0EC (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x18002C980 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x18002CA80 (RtlpHpExtrasGet.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     RtlDebugSetUserFlagsHeap @ 0x18010E0EC (RtlDebugSetUserFlagsHeap.c)
 */

char __fastcall RtlSetUserFlagsHeap(unsigned __int64 a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v6; // r13
  __int16 v7; // bx
  int v9; // ebx
  char v10; // si
  struct _TEB *v11; // rbx
  unsigned int v12; // eax
  unsigned __int8 *v14; // rcx
  unsigned __int64 v15; // rbx
  char v16; // r15
  struct _TEB *v17; // rbx
  int v18; // ecx
  __int16 v19; // r8
  int v20; // ecx
  __int16 v21; // dx
  __int16 v22; // r8
  __int16 v23; // cx
  unsigned __int64 v24; // rax
  char v25; // [rsp+31h] [rbp-27h]
  unsigned __int64 v26; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v7 = a2;
  v25 = 0;
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    goto LABEL_5;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( a2 )
    {
      if ( a2 == 8 )
      {
        v19 = 2;
      }
      else
      {
        v20 = (a2 >> 2) & 2;
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
      v24 = RtlpHpExtrasGet(a1, v6, *(_WORD *)(a1 + 20) | v19, 0LL);
      if ( v24 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v10 = 0;
      }
      else
      {
        *(_BYTE *)(v24 + 2) = (16 * BYTE1(a5)) | *(_BYTE *)(v24 + 2) & ((16 * ~BYTE1(a4)) | 0xF);
        v10 = 1;
      }
      if ( v10 )
        return v10;
      v11 = NtCurrentTeb();
      v11->LastStatusValue = -1073741811;
      v12 = RtlNtStatusToDosErrorNoTeb(0xC000000D);
LABEL_6:
      v11->LastErrorValue = v12;
      return v10;
    }
LABEL_5:
    v11 = NtCurrentTeb();
    v11->LastStatusValue = -1073741811;
    v12 = RtlNtStatusToDosErrorNoTeb(0xC000000D);
    v10 = 0;
    goto LABEL_6;
  }
  v9 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
    return RtlDebugSetUserFlagsHeap(a1, v9, a3, a4, a5);
  v10 = 1;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v14 = RtlpProbeUserBufferSafe(a1, a3);
    goto LABEL_13;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v18 = 9;
LABEL_30:
    RtlpLogHeapFailure(v18, a1, a3, 0LL, 0LL, 0LL);
    v14 = 0LL;
    goto LABEL_13;
  }
  v14 = (unsigned __int8 *)(a3 - 16);
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v14 -= 16 * v14[14];
  if ( (v14[15] & 0x3F) == 0 )
  {
    a3 = (__int64)v14;
    v18 = 8;
    goto LABEL_30;
  }
LABEL_13:
  if ( !v14 || (v14[15] & 0x80u) != 0 )
    goto LABEL_5;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v25 = 1;
  }
  v15 = v6 - 16;
  _m_prefetchw((const void *)(v6 - 16));
  if ( *(_BYTE *)(v6 - 16 + 15) == 5 )
    v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
  v26 = v15;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v15);
  }
  if ( (*(_BYTE *)(v15 + 15) & 0x3F) != 0 )
  {
    v16 = *(_BYTE *)(v15 + 10) & ~(unsigned __int8)(a4 >> 4);
    *(_BYTE *)(v15 + 10) = v16;
    *(_BYTE *)(v15 + 10) = v16 | (a5 >> 4);
  }
  else
  {
    v17 = NtCurrentTeb();
    v17->LastStatusValue = -1073741811;
    v17->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC000000D);
    v15 = v26;
    v10 = 0;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
    *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v25 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v10;
}
