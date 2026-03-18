/*
 * XREFs of EditionLLMouseWheelHook @ 0x14011AC88
 * Callers:
 *     ApiSetEditionLLMouseWheelHook @ 0x1401926B0 (ApiSetEditionLLMouseWheelHook.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionLLMouseWheelHook(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned int a4))(__int64, _QWORD, __int128 *, _QWORD)
{
  unsigned int v6; // esi
  __int64 (__fastcall *result)(__int64, _QWORD, __int128 *, _QWORD); // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v6 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                         a1,
                                                                                         a2)
                                                                                     + 48)
                                                                         + 4776LL);
  if ( result )
  {
    v9 = *a3;
    return (__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))result(a1, v6, &v9, a4);
  }
  return result;
}
