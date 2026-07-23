/*
 * XREFs of CmpProcessForSimpleStringSub @ 0x140C1AAA0
 * Callers:
 *     CmpGetSectionLineIndex @ 0x140C1A254 (CmpGetSectionLineIndex.c)
 * Callees:
 *     _strnicmp @ 0x1404FBA20 (_strnicmp.c)
 */

_BYTE *__fastcall CmpProcessForSimpleStringSub(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rbx
  const char *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = a2;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( *a2 == 37 && v3 > 2 && a2[v3 - 1] == 37 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      v5 = *(_QWORD **)(v4 + 16);
      if ( v5 )
      {
        do
        {
          v6 = (const char *)v5[1];
          if ( v6 && !strnicmp(v6, v2 + 1, v3 - 2) && !*(_BYTE *)(v5[1] + v3 - 2) )
            break;
          v5 = (_QWORD *)*v5;
        }
        while ( v5 );
        if ( v5 )
        {
          v7 = v5[2];
          if ( v7 )
          {
            v8 = *(_QWORD *)(v7 + 8);
            if ( v8 )
              return (_BYTE *)v8;
          }
        }
      }
    }
  }
  return v2;
}
