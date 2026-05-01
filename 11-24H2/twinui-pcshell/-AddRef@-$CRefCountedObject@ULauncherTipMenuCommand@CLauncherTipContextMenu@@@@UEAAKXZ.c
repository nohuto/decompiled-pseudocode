/*
 * XREFs of ?AddRef@?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@UEAAKXZ @ 0x180221990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
}
