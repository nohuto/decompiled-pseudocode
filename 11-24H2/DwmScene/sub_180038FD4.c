/*
 * XREFs of sub_180038FD4 @ 0x180038FD4
 * Callers:
 *     sub_1800D7B01 @ 0x1800D7B01 (sub_1800D7B01.c)
 *     sub_1800D7D2A @ 0x1800D7D2A (sub_1800D7D2A.c)
 *     sub_1800E20D9 @ 0x1800E20D9 (sub_1800E20D9.c)
 *     sub_1800E20EB @ 0x1800E20EB (sub_1800E20EB.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180038FD4(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
