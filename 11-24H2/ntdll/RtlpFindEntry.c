/*
 * XREFs of RtlpFindEntry @ 0x18000C880
 * Callers:
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapSegment @ 0x1800222F8 (RtlpValidateHeapSegment.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 */

_QWORD *__fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rdi
  int v3; // r14d
  unsigned __int64 v5; // rax
  int v6; // r12d
  int i; // eax
  _QWORD *v8; // rbx
  __int64 v9; // r15
  _QWORD *v10; // rax
  int v11; // edx
  __int16 v12; // bp
  __int64 v13; // r8
  int v14; // edx
  __int16 v15; // bp
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // r10
  int v20; // ecx
  unsigned int v21; // ecx
  __int64 v22; // rax
  _QWORD *j; // r15
  int v25; // edx
  __int16 v26; // bp

  v2 = *(__int64 **)(a1 + 312);
  v3 = a2;
  while ( 1 )
  {
    v5 = *((unsigned int *)v2 + 2);
    if ( a2 < v5 )
    {
      v6 = a2;
      goto LABEL_6;
    }
    if ( !*v2 )
      break;
    v2 = (__int64 *)*v2;
  }
  v6 = v5 - 1;
LABEL_6:
  for ( i = *((_DWORD *)v2 + 6); ; i = v6 )
  {
    v8 = (_QWORD *)v2[4];
    v9 = (unsigned int)(v6 - i);
    v10 = (_QWORD *)v8[1];
    if ( v8 == v10 )
      break;
    v11 = *((_DWORD *)v10 - 2);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v11 ^= *(_DWORD *)(a1 + 136);
      v12 = v11;
      if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(BYTE1(v11) ^ BYTE2(v11))) )
      {
        RtlpLogHeapFailure(3, a1, (_DWORD)v10 - 16, 0, 0LL, 0LL);
        LOWORD(v11) = v12;
      }
    }
    if ( v3 - (unsigned __int16)v11 > 0 )
      break;
    v13 = *v8 - 16LL;
    v14 = *(_DWORD *)(v13 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v14 ^= *(_DWORD *)(a1 + 136);
      v15 = v14;
      if ( HIBYTE(v14) != ((unsigned __int8)v14 ^ (unsigned __int8)(BYTE1(v14) ^ BYTE2(v14))) )
      {
        RtlpLogHeapFailure(3, a1, v13, 0, 0LL, 0LL);
        LOWORD(v14) = v15;
      }
    }
    if ( v3 - (unsigned __int16)v14 <= 0 )
    {
      v8 = (_QWORD *)*v8;
      break;
    }
    if ( !*v2 && v6 == *((_DWORD *)v2 + 2) - 1 )
    {
      if ( *((_DWORD *)v2 + 3) )
        v9 = (unsigned int)(2 * v9);
      for ( j = *(_QWORD **)(v2[6] + 8 * v9); v8 != j; j = (_QWORD *)*j )
      {
        v25 = *((_DWORD *)j - 2);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v25 ^= *(_DWORD *)(a1 + 136);
          v26 = v25;
          if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
          {
            RtlpLogHeapFailure(3, a1, (_DWORD)j - 16, 0, 0LL, 0LL);
            LOWORD(v25) = v26;
          }
        }
        if ( v3 - (unsigned __int16)v25 <= 0 )
        {
          v8 = j;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v16 = v2[5];
      v17 = (unsigned int)v9 >> 5;
      v18 = *(_DWORD *)(v16 + 4 * v17) & (-1 << (v9 & 0x1F));
      v19 = v16 + 4 * v17;
      if ( v18 )
      {
LABEL_19:
        if ( (_WORD)v18 )
        {
          if ( (_BYTE)v18 )
            v20 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v18];
          else
            v20 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v18)] + 8;
        }
        else if ( (v18 & 0xFF0000) != 0 )
        {
          v20 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v18)] + 16;
        }
        else
        {
          v20 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v18 >> 24] + 24;
        }
        v21 = 32 * v17 + v20;
        v22 = 2 * v21;
        if ( !*((_DWORD *)v2 + 3) )
          v22 = v21;
        v8 = *(_QWORD **)(v2[6] + 8 * v22);
        break;
      }
      while ( (unsigned int)v17 <= ((unsigned int)(*((_DWORD *)v2 + 2) - *((_DWORD *)v2 + 6)) >> 5) - 1 )
      {
        v18 = *(_DWORD *)(v19 + 4);
        v19 += 4LL;
        LODWORD(v17) = v17 + 1;
        if ( v18 )
          goto LABEL_19;
      }
    }
LABEL_27:
    v2 = (__int64 *)*v2;
    v6 = *((_DWORD *)v2 + 6);
  }
LABEL_25:
  if ( !v8 )
    goto LABEL_27;
  return v8;
}
