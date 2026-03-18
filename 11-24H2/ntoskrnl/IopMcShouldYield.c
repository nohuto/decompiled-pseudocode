/*
 * XREFs of IopMcShouldYield @ 0x1404BCC78
 * Callers:
 *     IopMcAddMdlPagesToTable @ 0x1404BCAF0 (IopMcAddMdlPagesToTable.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x1405A2D94 (IopMcRemoveMdlPagesFromTable.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 */

bool __fastcall IopMcShouldYield(int a1, unsigned __int8 a2)
{
  if ( a1 && (a1 & 0xF) == 0 )
  {
    if ( (dword_140F8C264 & 0x40000000) != 0 )
      return 1;
    if ( a2 < 2u )
      return KeShouldYieldProcessor() != 0;
  }
  return 0;
}
