/*
 * XREFs of ViErrorIsBreakDisabled @ 0x140B957A4
 * Callers:
 *     ViErrorFinishReport @ 0x140B9567C (ViErrorFinishReport.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ViErrorIsBreakDisabled(int a1)
{
  _BOOL8 result; // rax
  unsigned int i; // edx

  result = 1LL;
  for ( i = 0; i < 0x3F; ++i )
  {
    if ( *((_DWORD *)&ViErrorDescriptions + 4 * i) == a1 )
      return (*((_BYTE *)&ViErrorDescriptions + 16 * i + 4) & 1) != 0;
  }
  return result;
}
