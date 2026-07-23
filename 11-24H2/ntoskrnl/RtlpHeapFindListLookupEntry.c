/*
 * XREFs of RtlpHeapFindListLookupEntry @ 0x1405F0C38
 * Callers:
 *     RtlpFindEntry @ 0x1405F0A74 (RtlpFindEntry.c)
 *     RtlpFindUCREntry @ 0x1405F0AE8 (RtlpFindUCREntry.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x1405F0DD4 (RtlpHeapListCompare.c)
 */

_QWORD *__fastcall RtlpHeapFindListLookupEntry(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 v8; // rbx
  int v9; // r13d
  _QWORD *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r9
  _QWORD *i; // rsi
  __int64 v16; // r8
  unsigned int *v17; // r9
  unsigned int v18; // edx
  int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rcx

  v5 = *(_QWORD **)(a2 + 32);
  v6 = (unsigned int)(a4 - *(_DWORD *)(a2 + 24));
  v8 = 0LL;
  v9 = a4;
  v12 = (_QWORD *)v5[1];
  if ( v5 == v12 )
    return v5;
  LOBYTE(a4) = a3;
  if ( (int)RtlpHeapListCompare(a1, v12, a5, a4) > 0 )
    return v5;
  LOBYTE(v13) = a3;
  if ( (int)RtlpHeapListCompare(a1, *v5, a5, v13) <= 0 )
    return (_QWORD *)*v5;
  if ( *(_QWORD *)a2 || v9 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v16 = (unsigned int)v6 >> 5;
    v17 = (unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v16);
    v18 = *v17 & (-1 << (v6 & 0x1F));
    if ( v18 )
    {
LABEL_18:
      if ( (_WORD)v18 )
      {
        if ( (_BYTE)v18 )
          v19 = *((unsigned __int8 *)RtlpBitsClearLow + (unsigned __int8)v18);
        else
          v19 = *((unsigned __int8 *)RtlpBitsClearLow + BYTE1(v18)) + 8;
      }
      else if ( (v18 & 0xFF0000) != 0 )
      {
        v19 = *((unsigned __int8 *)RtlpBitsClearLow + BYTE2(v18)) + 16;
      }
      else
      {
        v19 = *((unsigned __int8 *)RtlpBitsClearLow + ((unsigned __int64)v18 >> 24)) + 24;
      }
      v20 = 32 * v16 + v19;
      v21 = 2 * v20;
      if ( !*(_DWORD *)(a2 + 12) )
        v21 = v20;
      return *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v21);
    }
    else
    {
      while ( (unsigned int)v16 <= ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
      {
        ++v17;
        LODWORD(v16) = v16 + 1;
        v18 = *v17;
        if ( *v17 )
          goto LABEL_18;
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 12) )
      v6 = (unsigned int)(2 * v6);
    for ( i = *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v6); v5 != i; i = (_QWORD *)*i )
    {
      LOBYTE(v14) = a3;
      if ( (int)RtlpHeapListCompare(a1, i, a5, v14) <= 0 )
        return i;
    }
  }
  return (_QWORD *)v8;
}
