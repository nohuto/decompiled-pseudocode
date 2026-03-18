/*
 * XREFs of EditionDelQEntry @ 0x140129E0C
 * Callers:
 *     ApiSetEditionDelQEntry @ 0x1400C118C (ApiSetEditionDelQEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionDelQEntry(__int64 a1, __int64 a2))(__int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                               + 6632LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64))result(a1, a2, 1LL);
  return result;
}
