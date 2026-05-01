/*
 * XREFs of ??4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z @ 0x180622234
 * Callers:
 *     ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x180633C80 (-OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806366E4 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall TargetAppExtensionDetails::operator=(__int64 a1, __int64 a2)
{
  std::wstring::operator=(a1, a2);
  std::wstring::operator=(a1 + 32, a2 + 32);
  std::wstring::operator=(a1 + 64, a2 + 64);
  *(_BYTE *)(a1 + 96) = *(_BYTE *)(a2 + 96);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 100);
  std::wstring::operator=(a1 + 104, a2 + 104);
  *(_BYTE *)(a1 + 136) = *(_BYTE *)(a2 + 136);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 140);
  std::wstring::operator=(a1 + 144, a2 + 144);
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 180);
  std::wstring::operator=(a1 + 184, a2 + 184);
  *(_BYTE *)(a1 + 216) = *(_BYTE *)(a2 + 216);
  *(_DWORD *)(a1 + 220) = *(_DWORD *)(a2 + 220);
  std::wstring::operator=(a1 + 224, a2 + 224);
  *(_BYTE *)(a1 + 256) = *(_BYTE *)(a2 + 256);
  *(_DWORD *)(a1 + 260) = *(_DWORD *)(a2 + 260);
  std::wstring::operator=(a1 + 264, a2 + 264);
  *(_BYTE *)(a1 + 296) = *(_BYTE *)(a2 + 296);
  *(_DWORD *)(a1 + 300) = *(_DWORD *)(a2 + 300);
  return a1;
}
