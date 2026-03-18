/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C01CD5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreConfirmWindowResizeCommit @ 0x1C0266BF8 (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  HWND *v10; // rbx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  v4 = 0;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v10 = (HWND *)v5;
  if ( v5 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      v11 = PtiCurrentShared(v7, v6, v8, v9);
      *(_QWORD *)&v20 = *((_QWORD *)v11 + 52);
      *((_QWORD *)v11 + 52) = &v20;
      *((_QWORD *)&v20 + 1) = v10;
      HMLockObject(v10);
      CurrentProcess = PsGetCurrentProcess(v13, v12, v14);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v4 = GreConfirmWindowResizeCommit(*v10);
      ThreadUnlock1(v17, v16, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
