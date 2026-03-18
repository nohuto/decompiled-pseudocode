/*
 * XREFs of PopFindNextSystemPowerState @ 0x140A997A4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140F0AE8C = dword_140F0AE90;
  if ( dword_140F0AE90 == 1 )
  {
    if ( dword_140F0AE6C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140F0AE6C &= ~0x10000000u;
      dword_140F0AE8C = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140F0AE8C = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
