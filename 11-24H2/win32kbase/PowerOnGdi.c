/*
 * XREFs of PowerOnGdi @ 0x140092FDC
 * Callers:
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140092440 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PowerOnGdi(__int64 a1, __int64 a2, unsigned int a3))(__int64, _QWORD, _QWORD)
{
  unsigned int v4; // edi
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD); // rax

  v4 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                             + 2240LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))result(a1, v4, a3);
  return result;
}
