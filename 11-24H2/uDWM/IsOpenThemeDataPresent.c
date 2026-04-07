/*
 * XREFs of IsOpenThemeDataPresent @ 0x18009CA90
 * Callers:
 *     ??0CWindowData@@QEAA@XZ @ 0x1800077FC (--0CWindowData@@QEAA@XZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800085D4 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18000994C (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18000A10C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001E984 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B8B0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18007A3B8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18009CFBF (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenThemeDataPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801263D0 == 1 )
    return 1;
  if ( dword_1801263D0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801263D0 = 2 - (v1 != 0);
  return result;
}
