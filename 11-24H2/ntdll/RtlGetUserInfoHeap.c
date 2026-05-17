/*
 * XREFs of RtlGetUserInfoHeap @ 0x1800423E0
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800426EC (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x18002C980 (RtlpProbeUserBufferSafe.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800426EC (RtlDebugGetUserInfoHeap.c)
 *     RtlpHpGetUserInfo @ 0x180042848 (RtlpHpGetUserInfo.c)
 *     RtlpGetExtraStuffPointer @ 0x18009CFC0 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlGetUserInfoHeap(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rsi
  __int16 v7; // bx
  int v9; // ebx
  unsigned __int8 *v11; // rcx
  char v12; // al
  struct _TEB *v13; // rbx
  unsigned __int64 v14; // rsi
  int v15; // edx
  char v16; // bl
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v18; // rbx
  int v19; // r14d
  int v20; // ecx
  unsigned int v21; // edx
  int v22; // r8d
  int v23; // ecx
  int v24; // ecx
  char v25; // [rsp+31h] [rbp-27h]

  v6 = a3;
  v7 = a2;
  v25 = 0;
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
    return RtlpHpGetUserInfo(a1, v6, v19, (_DWORD)a4, (__int64)a5);
  }
  v9 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(a1, v9, a3, (_DWORD)a4, (__int64)a5);
  if ( (v9 & 0x800) != 0 || (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v11 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v24 = 9;
    }
    else
    {
      v11 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v11 -= 16 * v11[14];
      if ( (v11[15] & 0x3F) != 0 )
        goto LABEL_6;
      a3 = (__int64)v11;
      v24 = 8;
    }
    RtlpLogHeapFailure(v24, a1, a3, 0LL, 0LL, 0LL);
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
      if ( a5 )
        *a5 = 0;
      return 1;
    }
LABEL_12:
    v13 = NtCurrentTeb();
    v13->LastStatusValue = -1073741811;
    v13->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
    return 0;
  }
  v14 = v6 - 16;
  _m_prefetchw((const void *)v14);
  if ( *(_BYTE *)(v14 + 15) == 5 )
    v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v25 = 1;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v15 = *(_DWORD *)(v14 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v14 + 8) = v15;
    if ( HIBYTE(v15) != ((unsigned __int8)v15 ^ (unsigned __int8)(BYTE1(v15) ^ BYTE2(v15))) )
      RtlpAnalyzeHeapFailure(a1, v14);
  }
  if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
  {
    if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
    {
      ExtraStuffPointer = RtlpGetExtraStuffPointer(v14);
      if ( a4 )
        *a4 = *(_QWORD *)(ExtraStuffPointer + 8);
    }
    if ( a5 )
      *a5 = 16 * (*(_BYTE *)(v14 + 10) & 0xE0);
    v16 = 1;
  }
  else
  {
    v18 = NtCurrentTeb();
    v18->LastStatusValue = -1073741811;
    v18->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
    v16 = 0;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
    *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v25 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v16;
}
