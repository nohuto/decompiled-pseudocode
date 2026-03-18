/*
 * XREFs of DrvGetAdapterInfoFromGraphicsDevice @ 0x140107A4C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvGetWDDMAdapterInfo @ 0x1401079F0 (DrvGetWDDMAdapterInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetAdapterInfoFromGraphicsDevice(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  if ( ((a1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(a1 + 160) & 0x800000) == 0 )
    return 0LL;
  *a2 = *(_QWORD *)(a1 + 240);
  *a3 = *(_DWORD *)(a1 + 248);
  return 1LL;
}
