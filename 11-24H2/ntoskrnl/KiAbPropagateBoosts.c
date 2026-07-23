/*
 * XREFs of KiAbPropagateBoosts @ 0x140285850
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 * Callees:
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 */

_QWORD *__fastcall KiAbPropagateBoosts(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 v7; // rbp
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  for ( result = (_QWORD *)*a1; *a1; result = (_QWORD *)*a1 )
  {
    v7 = (__int64)(result - 101);
    *a1 = *result;
    *result = 1LL;
    _InterlockedOr(v8, 0);
    if ( *((_BYTE *)result - 16) )
      KiAbProcessThreadLocks(v7, 4, a3, a1, a2);
    _InterlockedDecrement16((volatile signed __int16 *)(v7 + 868));
  }
  return result;
}
