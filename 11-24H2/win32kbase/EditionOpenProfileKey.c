/*
 * XREFs of EditionOpenProfileKey @ 0x14023B020
 * Callers:
 *     ApiSetEditionOpenProfileKey @ 0x1400A041C (ApiSetEditionOpenProfileKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionOpenProfileKey(__int64 a1, __int64 a2, __int64 a3))(_QWORD, _QWORD, __int64)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 (__fastcall *result)(_QWORD, _QWORD, __int64); // rax

  v4 = a2;
  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                             + 3192LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result(v5, v4, a3);
  return result;
}
