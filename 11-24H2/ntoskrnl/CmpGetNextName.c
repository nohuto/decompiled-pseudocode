/*
 * XREFs of CmpGetNextName @ 0x1407E1568
 * Callers:
 *     CmpWalkUnicodeStringPath @ 0x1407E38E4 (CmpWalkUnicodeStringPath.c)
 *     CmpFindHiveSubKey @ 0x140C4DA44 (CmpFindHiveSubKey.c)
 *     CmpGetKnownHivePathNode @ 0x140C4DF08 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpGetNextName(__int16 *a1, __int64 a2, bool *a3)
{
  _WORD *v3; // rax
  __int16 v5; // r9
  __int16 v6; // dx
  bool result; // al
  unsigned __int16 v8; // cx

  v3 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( v3 && (v5 = *a1) != 0 && *v3 )
  {
    v6 = *a1;
    while ( *v3 == 92 )
    {
      a1[1] -= 2;
      v5 -= 2;
      ++v3;
      *a1 = v5;
      *((_QWORD *)a1 + 1) = v3;
      v6 = v5;
      if ( !v5 )
        goto LABEL_7;
    }
    *(_QWORD *)(a2 + 8) = v3;
    if ( v5 )
    {
      do
      {
        if ( *v3 == 92 )
          break;
        a1[1] -= 2;
        ++v3;
        v6 -= 2;
        *((_QWORD *)a1 + 1) = v3;
        *a1 = v6;
      }
      while ( v6 );
    }
    v8 = a1[4] - *(_WORD *)(a2 + 8);
    *(_WORD *)a2 = v8;
    *(_WORD *)(a2 + 2) = v8;
    *a3 = v6 == 0;
    return v8 <= 0x200u;
  }
  else
  {
LABEL_7:
    *a3 = 1;
    result = 1;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)a2 = 0;
  }
  return result;
}
