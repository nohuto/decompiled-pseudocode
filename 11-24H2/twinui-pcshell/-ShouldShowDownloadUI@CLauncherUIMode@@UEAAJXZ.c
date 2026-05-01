/*
 * XREFs of ?ShouldShowDownloadUI@CLauncherUIMode@@UEAAJXZ @ 0x1803A44E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CLauncherUIMode::ShouldShowDownloadUI(CLauncherUIMode *this)
{
  return (*((_DWORD *)this + 18) & 4) == 0;
}
