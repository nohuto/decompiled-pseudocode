/*
 * XREFs of DoPrediction @ 0x140126954
 * Callers:
 *     ApiSetDoPrediction @ 0x1400F306C (ApiSetDoPrediction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall DoPrediction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7))(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                                                                  + 4456LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64))result(
                                                                                                   a1,
                                                                                                   a2,
                                                                                                   a3,
                                                                                                   a4,
                                                                                                   a5,
                                                                                                   a6,
                                                                                                   a7);
  return result;
}
