/*
 * XREFs of EditionUpdateSASModifiers @ 0x140113EDC
 * Callers:
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionUpdateSASModifiers(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4))(_QWORD, __int64, _QWORD, _QWORD)
{
  char v6; // si
  unsigned int v7; // ebp
  __int64 (__fastcall *result)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 v9; // rdx

  v6 = a2;
  v7 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                 + 48)
                                                                     + 5896LL);
  if ( result )
  {
    LOBYTE(v9) = v6;
    return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))result(v7, v9, a3, a4);
  }
  return result;
}
