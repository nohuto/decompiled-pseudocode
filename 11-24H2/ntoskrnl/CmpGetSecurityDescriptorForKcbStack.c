/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x1409772F0
 * Callers:
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406F90AC (CmpTransUowIsEqual.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  __int64 i; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v10; // rax
  bool IsEqual; // al
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // al
  __int64 v18; // rcx
  __int64 v19; // rdx

  v2 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; (v2 & 0x8000u) == 0; --v2 )
  {
    if ( v2 >= 2u )
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v2 - 16);
    else
      v6 = *(_QWORD *)(a1 + 8LL * v2 + 8);
    if ( *(_WORD *)(v6 + 66) && *(_BYTE *)(v6 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v6 + 40) != -1 )
    {
      v7 = *(_QWORD *)(v6 + 240);
      if ( !v7
        || a2
        && (a2 == v7
         || ((v10 = *(_QWORD *)(a2 + 56)) == 0 || (v18 = *(_QWORD *)(v7 + 56)) == 0
           ? (IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v7 + 88)))
           : (IsEqual = v10 == v18),
             IsEqual)) )
      {
        i = v6;
        if ( *(_WORD *)(v6 + 66) )
        {
          if ( *(_BYTE *)(v6 + 65) )
            break;
        }
      }
    }
  }
  v8 = *(_QWORD *)(i + 88);
  if ( a2 )
  {
    v12 = i + 208;
    v13 = *(_QWORD *)(v12 + 8);
    if ( v12 != v13 )
      goto LABEL_29;
LABEL_21:
    v14 = 0LL;
    while ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 56);
      if ( v15 )
      {
        if ( v15 == a2
          || ((v16 = *(_QWORD *)(v15 + 56)) == 0 || (v19 = *(_QWORD *)(a2 + 56)) == 0
            ? (v17 = CmpTransUowIsEqual((const void *)(v15 + 88), (const void *)(a2 + 88)))
            : (v17 = v16 == v19),
              v17) )
        {
          if ( *(_DWORD *)(v14 + 68) == 9 )
            return *(_QWORD *)(v14 + 88) + 32LL;
        }
      }
      if ( !v13 )
        v13 = *(_QWORD *)(v12 + 8);
      if ( v12 == v13 )
        goto LABEL_21;
LABEL_29:
      v14 = v13 - 32;
      v13 = *(_QWORD *)(v13 + 8);
    }
  }
  return v8 + 32;
}
