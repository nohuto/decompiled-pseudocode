/*
 * XREFs of EditionPromotePointer @ 0x140140828
 * Callers:
 *     ApiSetEditionPromotePointer @ 0x1400C2CB4 (ApiSetEditionPromotePointer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPromotePointer(__int64 a1, __int64 a2, unsigned int a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v4; // edi
  unsigned __int16 v5; // si
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  v4 = a2;
  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                            + 6312LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result(v5, v4, a3);
  return result;
}
