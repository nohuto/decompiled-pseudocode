/*
 * XREFs of ExpWnfFindStateName @ 0x140835D60
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x140835DA0 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpWnfFindStateName(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  v2 = *(_QWORD **)(a1 + 56);
  while ( v2 )
  {
    if ( a2 < v2[3] )
    {
      v2 = (_QWORD *)*v2;
    }
    else
    {
      if ( a2 <= v2[3] )
        break;
      v2 = (_QWORD *)v2[1];
    }
  }
  v3 = v2 - 2;
  if ( !v2 )
    return 0LL;
  return v3;
}
