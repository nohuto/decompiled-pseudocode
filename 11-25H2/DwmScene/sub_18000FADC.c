/*
 * XREFs of sub_18000FADC @ 0x18000FADC
 * Callers:
 *     sub_18000ED60 @ 0x18000ED60 (sub_18000ED60.c)
 * Callees:
 *     sub_18000FEEC @ 0x18000FEEC (sub_18000FEEC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall sub_18000FADC(__int64 a1, __int64 a2, __int64 a3))(_QWORD, __int64, __int64)
{
  __int64 (__fastcall *result)(_QWORD, __int64, __int64); // rax

  result = (__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1801C33F8;
  if ( qword_1801C33F8 )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64))result(0LL, a2, a3);
  result = (__int64 (__fastcall *)(_QWORD, __int64, __int64))sub_18000FEEC();
  qword_1801C33F8 = (__int64)result;
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64))result(0LL, a2, a3);
  return result;
}
