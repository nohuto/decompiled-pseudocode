/*
 * XREFs of XilCommand_GetCommandRingBufferLogicalAddress @ 0x14000CA34
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCommand_GetCommandRingBufferLogicalAddress(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
    return *(_QWORD *)(a1 + 176);
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
}
