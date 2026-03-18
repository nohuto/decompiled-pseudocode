/*
 * XREFs of ClearWindowState @ 0x1401C49E0
 * Callers:
 *     NtUserClearWindowState @ 0x140240FE0 (NtUserClearWindowState.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1401C4AA0 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall ClearWindowState(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == *((_QWORD *)PtiCurrent((__int64)a1, a2) + 58)
    && (unsigned int)ValidateState(v2) )
  {
    SetOrClrWF(0, a1, v2, 1);
  }
  return 1LL;
}
