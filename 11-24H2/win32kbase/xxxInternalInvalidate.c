/*
 * XREFs of xxxInternalInvalidate @ 0x1400A0EE8
 * Callers:
 *     xxxSetSysColors @ 0x1400A0834 (xxxSetSysColors.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall xxxInternalInvalidate(__int64 a1, __int64 a2))(__int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                               + 3624LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64))result(a1, 1LL, 66693LL);
  return result;
}
