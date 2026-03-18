/*
 * XREFs of GetDpiSetting @ 0x140153714
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015A320 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetDpiSetting(__int64 a1, __int64 a2))(_QWORD, __int64)
{
  unsigned int v3; // edi
  __int64 (__fastcall *result)(_QWORD, __int64); // rax

  v3 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3112LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64))result(v3, a2);
  return result;
}
