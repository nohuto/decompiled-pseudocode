/*
 * XREFs of KiAbPropagateBoosts @ 0x1402542E0
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 * Callees:
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 */

_QWORD *__fastcall KiAbPropagateBoosts(_QWORD **a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  volatile signed __int16 *v7; // rbp
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  for ( result = *a1; *a1; result = *a1 )
  {
    v7 = (volatile signed __int16 *)(result - 101);
    *a1 = (_QWORD *)*result;
    *result = 1LL;
    _InterlockedOr(v8, 0);
    if ( *((_BYTE *)result - 16) )
      KiAbProcessThreadLocks((_DWORD)v7, 4, a3, (_DWORD)a1, a2);
    _InterlockedDecrement16(v7 + 434);
  }
  return result;
}
