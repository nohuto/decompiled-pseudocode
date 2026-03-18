/*
 * XREFs of IsDwmActive @ 0x1400845E4
 * Callers:
 *     DxgkEngIsDwmComposing @ 0x1400845A0 (DxgkEngIsDwmComposing.c)
 *     pProcessDfbSurfaces2 @ 0x140085260 (pProcessDfbSurfaces2.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C852C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IsDwmActive(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 72LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
