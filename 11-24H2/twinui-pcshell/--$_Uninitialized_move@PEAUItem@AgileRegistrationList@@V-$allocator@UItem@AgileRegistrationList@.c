/*
 * XREFs of ??$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@QEAU12@0PEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1801D36E0
 * Callers:
 *     ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x180046C5C (--$_Emplace_reallocate@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$al.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::_Uninitialized_move<AgileRegistrationList::Item *>(_QWORD *a1, _QWORD *a2, char *a3)
{
  char *result; // rax
  _QWORD *v4; // r8
  char *v5; // r9
  __int64 v6; // rcx

  result = a3;
  if ( a1 != a2 )
  {
    v4 = a1 + 1;
    v5 = (char *)(result - (char *)a1);
    do
    {
      *(_DWORD *)result = *((_DWORD *)v4 - 2);
      result += 16;
      v6 = *v4;
      *v4 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = v6;
      v4 += 2;
    }
    while ( v4 - 1 != a2 );
  }
  return result;
}
