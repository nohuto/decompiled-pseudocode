/*
 * XREFs of ?IsWakeSource@CInputGlobals@@AEBA_NW4_LINP_SOURCE@@@Z @ 0x1400E164C
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99A0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputGlobals::IsWakeSource(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // r8d
  int v6; // edx
  int v7; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 2;
    if ( v3 )
    {
      v4 = 8;
      v6 = v3 - 8;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 == 4 )
            v4 = 32;
          else
            v4 = 0;
        }
        else
        {
          v4 = 16;
        }
      }
    }
    else
    {
      v4 = 2;
    }
  }
  else
  {
    v4 = 4;
  }
  return (v4 & *(_DWORD *)(a1 + 144)) != 0;
}
