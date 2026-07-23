/*
 * XREFs of PpDevCfgTraceDeviceStart @ 0x1408B8880
 * Callers:
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PiDevCfgLogDeviceStarted @ 0x140AA1894 (PiDevCfgLogDeviceStarted.c)
 */

char __fastcall PpDevCfgTraceDeviceStart(_DWORD *a1, char a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  bool v11; // zf

  v2 = a1[75];
  if ( a2 )
  {
    LOBYTE(v10) = v2 == 778;
    goto LABEL_10;
  }
  v3 = v2 - 771;
  if ( !v3
    || (v4 = v3 - 1) == 0
    || (v5 = v4 - 1) == 0
    || (v6 = v5 - 1) == 0
    || (v7 = v6 - 1) == 0
    || (v8 = v7 - 1) == 0
    || (v9 = v8 - 1) == 0 )
  {
    LOBYTE(v10) = (a1[99] & 0x6000) != 0;
LABEL_10:
    v11 = (_BYTE)v10 == 0;
    goto LABEL_11;
  }
  if ( v9 != 1 && (a1[99] & 0x2000) != 0 )
  {
    v10 = a1[101];
    if ( v10 == 56 )
      return v10;
    v11 = v10 == 21;
LABEL_11:
    if ( v11 )
      return v10;
  }
  a1[176] &= ~1u;
  LOBYTE(v10) = PiDevCfgLogDeviceStarted();
  return v10;
}
