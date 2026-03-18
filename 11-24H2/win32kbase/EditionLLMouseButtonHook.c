/*
 * XREFs of EditionLLMouseButtonHook @ 0x14011C030
 * Callers:
 *     ApiSetEditionLLMouseButtonHook @ 0x140192618 (ApiSetEditionLLMouseButtonHook.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionLLMouseButtonHook(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        int a5))(__int64, __int64, _QWORD, __int128 *, int)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int128 *, int); // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                               a1,
                                                                                               a2)
                                                                                           + 48)
                                                                               + 4792LL);
  if ( result )
  {
    v10 = *a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int128 *, int))result(a1, a2, a3, &v10, a5);
  }
  return result;
}
