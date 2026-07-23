/*
 * XREFs of PpmIdleUpdateCoordinatedDependencies @ 0x140763904
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x140748780 (PpmInstallCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdateCoordinatedDependencies(unsigned int *a1)
{
  unsigned int v1; // edx
  bool v3; // zf
  unsigned int v4; // r8d
  int v5; // ebx
  __int64 v6; // r9
  unsigned int v7; // r11d
  __int64 v8; // rcx
  __int64 v9; // rcx

  v1 = 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    if ( (HvlEnlightenments & 0x10000000) != 0 )
      return v1;
    v3 = (HvlEnlightenments & 0x400) == 0;
  }
  else
  {
    v3 = HvlHypervisorConnected == 0;
  }
  if ( !v3 )
  {
    v4 = 0;
    v5 = HvlEnlightenments & 0x200;
    while ( v4 < *a1 )
    {
      v6 = 80LL * v4;
      if ( !LOBYTE(a1[v6 + 88]) )
        return (unsigned int)-1073741637;
      v7 = 0;
      while ( v7 < a1[v6 + 87] )
      {
        v8 = *(_QWORD *)&a1[v6 + 90] + 16LL * v7;
        if ( *(_DWORD *)v8 == -1 || !*(_DWORD *)(v8 + 4) )
          return (unsigned int)-1073741637;
        *(_DWORD *)(v8 + 4) = 1;
        v9 = *(_QWORD *)(v8 + 8);
        ++v7;
        *(_BYTE *)v9 = v5 != 0;
        *(_WORD *)(v9 + 1) = 257;
        *(_BYTE *)(v9 + 3) = 1;
      }
      ++v4;
    }
  }
  return v1;
}
