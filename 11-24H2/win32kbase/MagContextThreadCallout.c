/*
 * XREFs of MagContextThreadCallout @ 0x14023B5C0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall MagContextThreadCallout(__int64 a1, __int64 a2))(__int64, __int64, _QWORD, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                   + 48)
                                                                       + 1512LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))result(a1, a2, 0LL, 1LL);
  return result;
}
