/*
 * XREFs of ?GetPVLTarget@CLauncherLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x18007B0D0
 * Callers:
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x1800D1A9C (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLauncherLaunch::GetPVLTarget(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  unsigned int *v4; // r8

  v2 = -1;
  v3 = 0;
  v4 = `CLauncherLaunch::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable;
  while ( (unsigned __int64)v3 < 0xD )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return `CLauncherLaunch::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
    ++v3;
    v4 += 2;
  }
  return v2;
}
