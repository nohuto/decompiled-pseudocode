/*
 * XREFs of EditionxxxReportMouseBreakToAccessibility @ 0x140121720
 * Callers:
 *     ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x14019389C (ApiSetEditionxxxReportMouseBreakToAccessibility.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionxxxReportMouseBreakToAccessibility(
        __int64 a1,
        __int128 *a2,
        unsigned int a3))(_QWORD, __int128 *, _QWORD)
{
  unsigned int v5; // esi
  __int64 (__fastcall *result)(_QWORD, __int128 *, _QWORD); // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                                + 6792LL);
  if ( result )
  {
    v7 = *a2;
    return (__int64 (__fastcall *)(_QWORD, __int128 *, _QWORD))result(v5, &v7, a3);
  }
  return result;
}
