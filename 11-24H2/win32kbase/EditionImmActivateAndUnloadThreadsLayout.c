/*
 * XREFs of EditionImmActivateAndUnloadThreadsLayout @ 0x14023AE78
 * Callers:
 *     ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1400F4ACC (ApiSetEditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5))(__int64, _QWORD, _QWORD, __int64, int)
{
  unsigned int v6; // edi
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD, __int64, int); // rax

  v6 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                           a1,
                                                                                           a2)
                                                                                       + 48)
                                                                           + 5544LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, int))result(a1, v6, 0LL, a4, a5);
  return result;
}
