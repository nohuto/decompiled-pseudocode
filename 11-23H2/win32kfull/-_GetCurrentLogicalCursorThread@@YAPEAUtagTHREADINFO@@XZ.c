/*
 * XREFs of ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C002E018
 * Callers:
 *     CheckCursorClipAccess @ 0x1C002DF50 (CheckCursorClipAccess.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00880F4 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C009C780 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A82B8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C01C02C8 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *_GetCurrentLogicalCursorThread(void)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrentShared();
  if ( (*((_DWORD *)result + 318) & 0x8000000) != 0 )
    return (struct tagTHREADINFO *)*((_QWORD *)result + 190);
  return result;
}
