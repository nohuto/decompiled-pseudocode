/*
 * XREFs of ValidatePointerOffset @ 0x140120CA4
 * Callers:
 *     ApiSetValidatePointerOffset @ 0x140194044 (ApiSetValidatePointerOffset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ValidatePointerOffset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(__int64, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                        a1,
                                                                                        a2)
                                                                                    + 48)
                                                                        + 6376LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))result(a1, a2, a3, a4);
  return result;
}
