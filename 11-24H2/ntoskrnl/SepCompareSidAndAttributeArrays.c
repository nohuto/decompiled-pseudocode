/*
 * XREFs of SepCompareSidAndAttributeArrays @ 0x140A17CFC
 * Callers:
 *     SeCompareTokens @ 0x140A179B8 (SeCompareTokens.c)
 *     SepCompareClaimAttributes @ 0x140A17C10 (SepCompareClaimAttributes.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 */

char __fastcall SepCompareSidAndAttributeArrays(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r12d
  __int64 v5; // r13
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // ebx
  _BYTE *v9; // rsi
  __int64 v10; // r14
  unsigned int i; // ebp
  unsigned int j; // esi
  unsigned int v14; // r14d
  void *v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // ebp
  void *v18; // r12
  __int64 v19; // r14

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( a2 != a4 )
    return 0;
  v8 = 0;
  if ( a2 )
  {
    v9 = (_BYTE *)(a3 + 8);
    v10 = a1 - a3;
    do
    {
      if ( !RtlEqualSid(*(PSID *)&v9[v10 - 8], *((PSID *)v9 - 1)) )
        break;
      if ( ((*v9 ^ v9[v10]) & 0x14) != 0 )
        break;
      ++v8;
      v9 += 16;
    }
    while ( v8 < v6 );
    v7 = a1;
  }
  if ( v8 != v6 )
  {
    for ( i = v8; i < v6; ++i )
    {
      v14 = v8;
      if ( v8 < v4 )
      {
        v15 = *(void **)(v7 + 16LL * i);
        v16 = v5 + 16LL * v8;
        do
        {
          if ( RtlEqualSid(v15, *(PSID *)v16) && ((*(_BYTE *)(a1 + 16LL * i + 8) ^ *(_BYTE *)(v16 + 8)) & 0x14) == 0 )
            break;
          ++v14;
          v16 += 16LL;
        }
        while ( v14 < v4 );
        v6 = a2;
        v5 = a3;
      }
      if ( v14 == v4 )
        return 0;
      v7 = a1;
    }
    for ( j = v8; j < v4; ++j )
    {
      v17 = v8;
      if ( v8 < v6 )
      {
        v18 = *(void **)(v5 + 16LL * j);
        v19 = v7 + 16LL * v8;
        do
        {
          if ( RtlEqualSid(v18, *(PSID *)v19) && ((*(_BYTE *)(v5 + 16LL * j + 8) ^ *(_BYTE *)(v19 + 8)) & 0x14) == 0 )
            break;
          ++v17;
          v19 += 16LL;
        }
        while ( v17 < v6 );
        v4 = a4;
        if ( v17 == v6 )
          return 0;
      }
      v7 = a1;
    }
  }
  return 1;
}
