/*
 * XREFs of CmpFindKcbInHashEntryByName @ 0x140940C90
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E4250 (CmpPartialPromoteSubkeys.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14090A1FC (CmpSubtreeEnumeratorAdvance.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByName(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 i; // r14
  __int64 v6; // rcx
  WCHAR *v7; // r12
  __int16 v8; // di
  __int16 *v9; // r15
  unsigned __int16 v10; // bp
  WCHAR v11; // cx
  __int16 v12; // r13
  __int16 j; // bp
  WCHAR v15; // cx
  __int16 v16; // r13
  __int64 v17; // [rsp+70h] [rbp+18h]
  __int64 v18; // [rsp+78h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v6 = *(_QWORD *)(i + 64);
      v7 = *(WCHAR **)(a4 + 8);
      v8 = *(_WORD *)a4 >> 1;
      v9 = (__int16 *)(v6 + 26);
      v10 = *(_WORD *)(v6 + 24);
      if ( (*(_DWORD *)v6 & 1) != 0 )
      {
        while ( v8 && v10 )
        {
          v11 = *v7++;
          v12 = *(unsigned __int8 *)v9;
          v9 = (__int16 *)((char *)v9 + 1);
          if ( v11 != v12 )
          {
            if ( v11 >= 0x61u )
            {
              if ( v11 > 0x7Au )
                v11 = RtlUpcaseUnicodeChar(v11);
              else
                v11 -= 32;
            }
            if ( v11 != v12 )
              goto LABEL_16;
          }
          --v8;
          --v10;
        }
        if ( v8 == v10 )
          return i - 16;
      }
      else
      {
        for ( j = v10 >> 1; v8 && j; --j )
        {
          v15 = *v7++;
          v16 = *v9++;
          if ( v15 != v16 )
          {
            if ( v15 >= 0x61u )
            {
              if ( v15 > 0x7Au )
                v15 = RtlUpcaseUnicodeChar(v15);
              else
                v15 -= 32;
            }
            if ( v15 != v16 )
              goto LABEL_16;
          }
          --v8;
        }
        if ( v8 == j )
          return i - 16;
      }
LABEL_16:
      a3 = v17;
      a4 = v18;
    }
  }
  return 0LL;
}
