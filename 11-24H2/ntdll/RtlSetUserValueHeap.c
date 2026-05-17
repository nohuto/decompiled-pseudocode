/*
 * XREFs of RtlSetUserValueHeap @ 0x18009BF90
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x1800428AC (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x18002C980 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x18002CA80 (RtlpHpExtrasGet.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserValueHeap @ 0x1800428AC (RtlDebugSetUserValueHeap.c)
 *     RtlpGetExtraStuffPointer @ 0x18009CFC0 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 */

char __fastcall RtlSetUserValueHeap(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r10
  __int16 v6; // si
  char v8; // r12
  char v9; // r15
  int v10; // esi
  unsigned __int8 *v11; // rbx
  char v12; // al
  struct _TEB *v13; // rbx
  __int16 v15; // ax
  unsigned __int64 v16; // rax
  char v17; // r14
  int v18; // ecx
  int v19; // ecx
  __int16 v20; // dx
  __int16 v21; // r8
  __int16 v22; // cx
  struct _TEB *v23; // rbx
  struct _TEB *v24; // rbx
  char v25; // [rsp+30h] [rbp-38h]

  v5 = a3;
  v6 = a2;
  v8 = 0;
  v9 = 0;
  v25 = 0;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v10 = *(_DWORD *)(a1 + 116) | a2;
    if ( (v10 & 0x61000000) != 0 && (v10 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap(a1, v10, a3, a4);
    if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
    {
      if ( (a3 & 0xF) != 0 )
      {
        v18 = 9;
      }
      else
      {
        v11 = (unsigned __int8 *)(a3 - 16);
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v11 -= 16 * v11[14];
        if ( (v11[15] & 0x3F) != 0 )
        {
LABEL_8:
          if ( !v11 )
          {
            v23 = NtCurrentTeb();
            v23->LastStatusValue = -1073741811;
            v23->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
            return 0;
          }
          if ( (v10 & 1) == 0 )
          {
            RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
            v9 = 1;
            v25 = 1;
          }
          v12 = v11[15];
          if ( (v12 & 0x3F) != 0 )
          {
            if ( v12 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
                if ( v11[11] != (v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
                  RtlpAnalyzeHeapFailure(a1, (unsigned __int64)v11);
              }
              if ( (v11[10] & 2) != 0 )
              {
                *(_QWORD *)(RtlpGetExtraStuffPointer(v11) + 8) = a4;
                v8 = 1;
              }
              goto LABEL_20;
            }
          }
          else
          {
            v13 = NtCurrentTeb();
            v13->LastStatusValue = -1073741811;
            v13->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
            v9 = v25;
            v8 = 0;
          }
          v11 = 0LL;
LABEL_20:
          if ( v11 && *(_DWORD *)(a1 + 124) )
          {
            v11[11] = v11[8] ^ v11[9] ^ v11[10];
            *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
          }
          if ( v9 )
            RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
          return v8;
        }
        a3 = (__int64)v11;
        v18 = 8;
      }
      RtlpLogHeapFailure(v18, a1, a3, 0LL, 0LL, 0LL);
      v11 = 0LL;
      goto LABEL_8;
    }
    v11 = RtlpProbeUserBufferSafe(a1, a3);
    goto LABEL_8;
  }
  if ( a2 )
  {
    if ( a2 == 8 )
    {
      v15 = 2;
    }
    else
    {
      v19 = (a2 >> 2) & 2;
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
  v16 = RtlpHpExtrasGet(a1, v5, *(_WORD *)(a1 + 20) | v15, 0LL);
  if ( v16 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v17 = 0;
  }
  else
  {
    *(_QWORD *)(v16 + 8) = a4;
    v17 = 1;
  }
  if ( !v17 )
  {
    v24 = NtCurrentTeb();
    v24->LastStatusValue = -1073741811;
    v24->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
  }
  return v17;
}
