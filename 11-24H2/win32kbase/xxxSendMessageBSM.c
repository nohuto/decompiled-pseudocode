/*
 * XREFs of xxxSendMessageBSM @ 0x14013F4F0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall xxxSendMessageBSM(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(_QWORD, _QWORD, __int64, _QWORD, __int64, int)
{
  unsigned int v6; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, __int64, _QWORD, __int64, int); // rax

  v6 = a2;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                                   a1,
                                                                                                   a2)
                                                                                               + 48)
                                                                                   + 2192LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))result(0LL, v6, a3, 0LL, a5, 1);
  return result;
}
