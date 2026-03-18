/*
 * XREFs of IopMcShouldYield @ 0x1404BDC4C
 * Callers:
 *     IopMcAddMdlPagesToTable @ 0x1404BDAC4 (IopMcAddMdlPagesToTable.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14059F624 (IopMcRemoveMdlPagesFromTable.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 */

bool __fastcall IopMcShouldYield(int a1, unsigned __int8 a2)
{
  if ( a1 && (a1 & 0xF) == 0 )
  {
    if ( (dword_140F8BB24 & 0x40000000) != 0 )
      return 1;
    if ( a2 < 2u )
      return KeShouldYieldProcessor() != 0;
  }
  return 0;
}
