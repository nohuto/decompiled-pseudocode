/*
 * XREFs of sub_180038E74 @ 0x180038E74
 * Callers:
 *     sub_1800D79A1 @ 0x1800D79A1 (sub_1800D79A1.c)
 *     sub_1800D7BCA @ 0x1800D7BCA (sub_1800D7BCA.c)
 *     sub_1800E1F79 @ 0x1800E1F79 (sub_1800E1F79.c)
 *     sub_1800E1F8B @ 0x1800E1F8B (sub_1800E1F8B.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180038E74(_QWORD *a1)
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
