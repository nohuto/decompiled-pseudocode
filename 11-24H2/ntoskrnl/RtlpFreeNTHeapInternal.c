/*
 * XREFs of RtlpFreeNTHeapInternal @ 0x14047917C
 * Callers:
 *     RtlFreeHeap @ 0x140479100 (RtlFreeHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsContextFree @ 0x14035BAE0 (RtlpHpVsContextFree.c)
 *     RtlpCallInterceptRoutine @ 0x1404688C8 (RtlpCallInterceptRoutine.c)
 *     RtlpProbeUserBufferSafe @ 0x1404F39C4 (RtlpProbeUserBufferSafe.c)
 *     RtlpFreeHeap @ 0x1405E9FB0 (RtlpFreeHeap.c)
 */

__int64 __fastcall RtlpFreeNTHeapInternal(_DWORD *a1, ULONG_PTR a2, int a3)
{
  unsigned int v3; // ebx
  ULONG_PTR v8; // rdi
  _DWORD *v9; // r8
  ULONG_PTR v10; // r8
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // dx
  int v16; // ecx
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+38h] [rbp-30h]
  int v21; // [rsp+48h] [rbp-20h]
  unsigned int v22; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  if ( a1[4] == -857879331 )
  {
    v22 = 0;
    return (unsigned int)RtlpHpVsContextFree((__int64)(a1 + 16), 0LL, a2, &v22);
  }
  if ( (a1[30] & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe();
  }
  else
  {
    if ( (a2 & 0xF) != 0 )
    {
      v10 = a2;
      v11 = 9;
    }
    else
    {
      v8 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
      if ( (*(_BYTE *)(v8 + 15) & 0x3F) != 0 )
        goto LABEL_6;
      v10 = v8;
      v11 = 8;
    }
    RtlpLogHeapFailure(v11, (ULONG_PTR)a1, v10, 0LL, 0LL, 0LL);
    v8 = 0LL;
  }
LABEL_6:
  if ( v8 )
  {
    if ( *(_BYTE *)(a2 - 1) != 5 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v8);
    v9 = a1 + 34;
    if ( a1[31]
      && (unsigned int)(*v9 ^ *(_DWORD *)(v8 + 8)) >> 24 != ((unsigned __int8)(*(_BYTE *)v9 ^ *(_BYTE *)(v8 + 8)) ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)v9 ^ *(_WORD *)(v8 + 8)) >> 8) ^ ((unsigned int)(*v9 ^ *(_DWORD *)(v8 + 8)) >> 16))) )
    {
      goto LABEL_35;
    }
    v12 = a1[31];
    if ( v12 )
    {
      v13 = *(_DWORD *)(v8 + 8);
      v12 = a1[31];
      v20 = v13;
      if ( (v12 & v13) != 0 )
      {
        v14 = *v9 ^ v13;
        v9 = a1 + 34;
        v20 = v14;
      }
      v15 = v20;
    }
    else
    {
      v15 = *(_WORD *)(v8 + 8);
    }
    if ( *(_BYTE *)(v8 + 15) == 4 )
    {
      if ( v12 )
      {
        v16 = *(_DWORD *)(v8 + 8);
        LOWORD(v21) = v16;
        if ( (v16 & a1[31]) != 0 )
          v21 = *v9 ^ v16;
        v17 = v21;
      }
      else
      {
        v17 = *(_WORD *)(v8 + 8);
      }
      v18 = v15 + *(_QWORD *)(v8 - 16) - v17;
    }
    else
    {
      v18 = 16LL * v15;
    }
    if ( v18 + v8 < a2 )
    {
LABEL_35:
      RtlpLogHeapFailure(3, (ULONG_PTR)a1, v8, a2, 0LL, 0LL);
      return v3;
    }
    if ( (a3 & 0x3C000102) != 0 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v8);
    v19 = *(_BYTE *)(a2 - 16 + 15) == 5 ? a2 - 16LL * *(unsigned __int8 *)(a2 - 16 + 14) : 0LL;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(a2 - 8), (__int64)a1, a2, 3u, v19) >= 0 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v8);
  }
  return v3;
}
