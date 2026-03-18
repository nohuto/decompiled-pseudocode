/*
 * XREFs of WmipIsNumber @ 0x1409CF6FC
 * Callers:
 *     WmipPrepareWnodeSI @ 0x1409CEBB0 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1409D0B10 (WmipFindISinGEbyName.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipIsNumber(_WORD *a1)
{
  while ( 1 )
  {
    if ( !*a1 )
      return 1;
    if ( (unsigned __int16)(*a1 - 48) > 9u )
      break;
    ++a1;
  }
  return 0;
}
