/*
 * XREFs of EditionOpenInputDesktopEntryPoint @ 0x140111810
 * Callers:
 *     ApiSetEditionOpenInputDesktopEntryPoint @ 0x14011BB68 (ApiSetEditionOpenInputDesktopEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionOpenInputDesktopEntryPoint(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  v4 = a2;
  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                            + 672LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result(v5, v4, a3);
  return result;
}
