/*
 * XREFs of ObpParseComponentName @ 0x140978290
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpParseComponentName(__int16 *a1, _OWORD *a2)
{
  __int16 v2; // r8
  _WORD *v3; // rax
  __int16 i; // r8
  _WORD *v5; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( *v3 == 92 )
    {
      *((_QWORD *)a1 + 1) = v3 + 1;
      a1[1] -= 2;
      *a1 = v2 - 2;
    }
  }
  *a2 = *(_OWORD *)a1;
  for ( i = *a1; i; *a1 = i )
  {
    v5 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( *v5 == 92 )
      break;
    i -= 2;
    *((_QWORD *)a1 + 1) = v5 + 1;
  }
  *(_WORD *)a2 -= i;
  a1[1] -= *(_WORD *)a2;
  return *(_WORD *)a2 != 0;
}
