/*
 * XREFs of _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$31 @ 0x18026425C
 * Callers:
 *     <none>
 * Callees:
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x18026118C (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor_31(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    TargetAppExtensionDetails::~TargetAppExtensionDetails(*(TargetAppExtensionDetails **)(a2 + 224));
  }
}
