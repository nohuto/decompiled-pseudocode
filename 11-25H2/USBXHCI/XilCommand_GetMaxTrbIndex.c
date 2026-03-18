/*
 * XREFs of XilCommand_GetMaxTrbIndex @ 0x14003EC04
 * Callers:
 *     Command_PrepareHardware @ 0x140074580 (Command_PrepareHardware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCommand_GetMaxTrbIndex(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
    return *(unsigned int *)(a1 + 192);
  else
    return *(unsigned int *)(a1 + 200);
}
