/*
 * XREFs of EditionCreateDesktopEntryPoint @ 0x14014B0E8
 * Callers:
 *     ApiSetEditionCreateDesktopEntryPoint @ 0x1401521F8 (ApiSetEditionCreateDesktopEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionCreateDesktopEntryPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6))(__int64, __int64, __int64, _QWORD, int, int)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, _QWORD, int, int); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                                 a1,
                                                                                                 a2)
                                                                                             + 48)
                                                                                 + 656LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, int))result(a1, a2, a3, a4, a5, a6);
  return result;
}
