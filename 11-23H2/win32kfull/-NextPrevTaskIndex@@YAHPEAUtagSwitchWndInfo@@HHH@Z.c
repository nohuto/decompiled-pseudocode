/*
 * XREFs of ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01C8B48
 * Callers:
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01C87B0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01C8D6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01C8F9C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NextPrevTaskIndex(struct tagSwitchWndInfo *a1, int a2, int a3, int a4)
{
  int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // r10d

  if ( a4 )
  {
    v4 = *((_DWORD *)a1 + 10);
    v5 = a3 + a2;
    v6 = v5 - v4;
    if ( (int)v5 < v4 )
      return v5;
  }
  else
  {
    v6 = a2 - a3;
    if ( a2 - a3 < 0 )
      v6 += *((_DWORD *)a1 + 10);
  }
  return v6;
}
