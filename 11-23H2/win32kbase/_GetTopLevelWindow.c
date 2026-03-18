/*
 * XREFs of _GetTopLevelWindow @ 0x1C00C4B70
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A350 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall GetTopLevelWindow(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0295EB0;
  if ( qword_1C0295EB0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0295EB0(a1);
  return result;
}
