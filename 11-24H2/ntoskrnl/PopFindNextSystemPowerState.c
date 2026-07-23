/*
 * XREFs of PopFindNextSystemPowerState @ 0x140A99B58
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140F0B9AC = dword_140F0B9B0;
  if ( dword_140F0B9B0 == 1 )
  {
    if ( dword_140F0B98C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140F0B98C &= ~0x10000000u;
      dword_140F0B9AC = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140F0B9AC = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
