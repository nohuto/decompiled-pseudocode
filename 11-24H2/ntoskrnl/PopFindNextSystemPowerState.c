/*
 * XREFs of PopFindNextSystemPowerState @ 0x140A9E5E8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140F0B12C = dword_140F0B130;
  if ( dword_140F0B130 == 1 )
  {
    if ( dword_140F0B10C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140F0B10C &= ~0x10000000u;
      dword_140F0B12C = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140F0B12C = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
