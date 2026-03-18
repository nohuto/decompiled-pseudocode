/*
 * XREFs of FadeDesktop @ 0x14023B2C4
 * Callers:
 *     PowerOffMonitor @ 0x1400E4300 (PowerOffMonitor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall FadeDesktop(__int64 a1, __int64 a2))(_QWORD, __int64, __int64, _QWORD)
{
  unsigned int v3; // edi
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, _QWORD); // rax

  v3 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                  + 48)
                                                                      + 2320LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))result(v3, a2, 167LL, 0LL);
  return result;
}
