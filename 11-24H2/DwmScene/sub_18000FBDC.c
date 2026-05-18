/*
 * XREFs of sub_18000FBDC @ 0x18000FBDC
 * Callers:
 *     sub_18000EE60 @ 0x18000EE60 (sub_18000EE60.c)
 * Callees:
 *     sub_18000FFEC @ 0x18000FFEC (sub_18000FFEC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall sub_18000FBDC(__int64 a1, __int64 a2, __int64 a3))(_QWORD, __int64, __int64)
{
  __int64 (__fastcall *result)(_QWORD, __int64, __int64); // rax

  result = (__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1801C4408;
  if ( qword_1801C4408 )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64))result(0LL, a2, a3);
  result = (__int64 (__fastcall *)(_QWORD, __int64, __int64))sub_18000FFEC();
  qword_1801C4408 = (__int64)result;
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64))result(0LL, a2, a3);
  return result;
}
