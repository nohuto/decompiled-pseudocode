/*
 * XREFs of NtUserRegisterSystemThread @ 0x1C01D90B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01BADCC (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall NtUserRegisterSystemThread(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 0LL);
  v6 = (_DWORD *)(gptiCurrent + 488LL);
  if ( (a1 & 1) != 0 )
    *v6 |= 0x40u;
  if ( (a1 & 2) != 0 )
  {
    *v6 |= 0x80u;
    v7 = *((_QWORD *)PtiCurrentShared(v3, v2, v4, v5) + 58);
    if ( *(_QWORD *)(v7 + 56) || (v2 = *((_QWORD *)PtiCurrentShared(v8, v7, v9, v10) + 58), *(_QWORD *)(v2 + 48)) )
    {
      zzzJournalAttach(gptiCurrent, 0);
      zzzJournalAttach(gptiCurrent, 1);
    }
  }
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return 1LL;
}
