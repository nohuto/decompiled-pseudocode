/*
 * XREFs of ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x140093214
 * Callers:
 *     NtUserCreateEmptyCursorObject @ 0x1400931D0 (NtUserCreateEmptyCursorObject.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14012C850 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14009347C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _CreateEmptyCursorObject(__int64 a1, __int64 a2)
{
  char v2; // bl
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v9; // rbx

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  LOBYTE(v4) = 3;
  v5 = 0LL;
  v7 = HMAllocObject(v3, 0LL, v4, 152LL);
  if ( v7 )
  {
    if ( !v2 || (v9 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40), PsGetCurrentProcess() != v9) )
      v5 = *((_QWORD *)_GetCurrentLogicalCursorThread() + 58);
    *(_QWORD *)(v7 + 24) = v5;
    v5 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 80) = 2048;
    *(_QWORD *)(v7 + 48) = v7;
  }
  return v5;
}
