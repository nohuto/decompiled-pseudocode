/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C00B58E0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall zzzCalcStartCursorHide(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0295430;
  if ( qword_1C0295430 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0295430(a1, a2);
  return result;
}
