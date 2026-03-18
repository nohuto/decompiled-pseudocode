/*
 * XREFs of EditionSetAccessibilityTimer @ 0x140148774
 * Callers:
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4 (ApiSetEditionSetAccessibilityTimer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionSetAccessibilityTimer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4))(__int64, _QWORD, __int64, _QWORD)
{
  unsigned int v6; // esi
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, _QWORD); // rax

  v6 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                  + 48)
                                                                      + 4936LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))result(a1, v6, a3, a4);
  return result;
}
