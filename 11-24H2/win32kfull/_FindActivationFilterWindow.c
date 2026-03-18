/*
 * XREFs of _FindActivationFilterWindow @ 0x1401AA41C
 * Callers:
 *     _SetActivationFilter @ 0x1401AA35C (_SetActivationFilter.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B4154 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FindActivationFilterWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *i; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = (_QWORD *)(v1 + 312);
    for ( i = *(_QWORD **)(v1 + 312); i != v3; i = (_QWORD *)*i )
    {
      if ( i[2] == a1 )
        return i;
    }
  }
  return (_QWORD *)v2;
}
