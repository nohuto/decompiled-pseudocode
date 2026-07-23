/*
 * XREFs of KiCheckForDuplicateBugCheckCallback @ 0x140460810
 * Callers:
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     KeRegisterBugCheckCallback @ 0x1404B7E90 (KeRegisterBugCheckCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckForDuplicateBugCheckCallback(_QWORD *a1, _QWORD *a2)
{
  _QWORD *i; // rax
  _QWORD *j; // rax

  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    if ( i == a2 )
      return 1;
  }
  for ( j = (_QWORD *)a1[1]; j != a1; j = (_QWORD *)j[1] )
  {
    if ( j == a2 )
      return 1;
  }
  return 0;
}
