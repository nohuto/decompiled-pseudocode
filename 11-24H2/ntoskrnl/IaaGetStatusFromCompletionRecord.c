/*
 * XREFs of IaaGetStatusFromCompletionRecord @ 0x140665764
 * Callers:
 *     AccelpSiovIaaOperationHandler @ 0x140664C80 (AccelpSiovIaaOperationHandler.c)
 *     AccelpSiovIaaQueryCompletionInformation @ 0x140664F20 (AccelpSiovIaaQueryCompletionInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IaaGetStatusFromCompletionRecord(_BYTE *a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // eax

  v1 = 0;
  if ( (*a1 & 0x3F) != 0 )
  {
    if ( (*a1 & 0x3F) != 1 )
    {
      if ( (*a1 & 0x3F) == 0xA )
      {
        v2 = -1073741789;
        if ( a1[1] != 25 )
          return (unsigned int)-1073741823;
        return v2;
      }
      else if ( (*a1 & 0x3F) == 0xB )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return 259;
  }
  return v1;
}
