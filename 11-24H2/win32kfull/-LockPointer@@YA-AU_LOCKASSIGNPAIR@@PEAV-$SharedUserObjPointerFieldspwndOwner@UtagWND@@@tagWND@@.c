/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401BD73C
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a2 - 80);
  if ( a3 )
    *(_QWORD *)(v3 + 64) = *(_QWORD *)(a3 + 48);
  else
    *(_QWORD *)(v3 + 64) = 0LL;
  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
