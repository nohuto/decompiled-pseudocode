/*
 * XREFs of ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14009347C
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1400928F0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x140092F08 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x140093214 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     CheckCursorClipAccess @ 0x1400932B0 (CheckCursorClipAccess.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x14012C9E4 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1401A6AC4 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

struct tagTHREADINFO *__fastcall _GetCurrentLogicalCursorThread(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO **CurrentThreadNonPaged; // rcx
  struct tagTHREADINFO *result; // rax

  CurrentThreadNonPaged = (struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(a1, a2);
  result = 0LL;
  if ( CurrentThreadNonPaged )
    result = *CurrentThreadNonPaged;
  if ( (*((_DWORD *)result + 340) & 0x8000000) != 0 )
    return (struct tagTHREADINFO *)*((_QWORD *)result + 210);
  return result;
}
