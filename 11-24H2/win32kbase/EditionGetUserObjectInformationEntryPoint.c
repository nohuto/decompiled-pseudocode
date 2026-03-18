/*
 * XREFs of EditionGetUserObjectInformationEntryPoint @ 0x1400FF9C4
 * Callers:
 *     ApiSetEditionGetUserObjectInformationEntryPoint @ 0x1401072E4 (ApiSetEditionGetUserObjectInformationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionGetUserObjectInformationEntryPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5))(__int64, _QWORD, __int64, _QWORD, __int64)
{
  unsigned int v7; // esi
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, _QWORD, __int64); // rax

  v7 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                               a1,
                                                                                               a2)
                                                                                           + 48)
                                                                               + 952LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64))result(a1, v7, a3, a4, a5);
  return result;
}
