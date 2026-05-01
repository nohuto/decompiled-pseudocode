/*
 * XREFs of _CopilotHotkeyManager::SchemaNameAreRegisteredProtocol_::_1_::dtor$33 @ 0x1802730DC
 * Callers:
 *     <none>
 * Callees:
 *     ??1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ @ 0x1801DA1D8 (--1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::SchemaNameAreRegisteredProtocol_::_1_::dtor_33(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~8u;
    winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo((winrt::Windows::Foundation::IUnknown *)(a2 + 48));
  }
}
