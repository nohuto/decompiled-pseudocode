/*
 * XREFs of xxxSendNotifyMessage @ 0x14023B9E4
 * Callers:
 *     xxxSetSysColors @ 0x1400A0834 (xxxSetSysColors.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1401BEA84 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall xxxSendNotifyMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3))(__int64, _QWORD, __int64, _QWORD, int)
{
  unsigned int v4; // edi
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, _QWORD, int); // rax

  v4 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                           a1,
                                                                                           a2)
                                                                                       + 48)
                                                                           + 3608LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, int))result(-1LL, v4, a3, 0LL, 1);
  return result;
}
