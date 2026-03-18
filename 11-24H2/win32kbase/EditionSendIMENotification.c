/*
 * XREFs of EditionSendIMENotification @ 0x140159AA8
 * Callers:
 *     ApiSetEditionSendIMENotification @ 0x140193274 (ApiSetEditionSendIMENotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionSendIMENotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5))(__int64, __int64, _QWORD, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                                a1,
                                                                                                a2)
                                                                                            + 48)
                                                                                + 5640LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))result(a1, a2, a3, a4, a5);
  return result;
}
