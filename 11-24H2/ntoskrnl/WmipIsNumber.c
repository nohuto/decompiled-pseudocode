/*
 * XREFs of WmipIsNumber @ 0x1409B55C0
 * Callers:
 *     WmipFindISinGEbyName @ 0x1409AFB60 (WmipFindISinGEbyName.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
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
