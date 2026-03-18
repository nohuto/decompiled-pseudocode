/*
 * XREFs of RIMInitialize @ 0x14004FCC0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsKeyboardIVEnabled @ 0x14004FB3C (IsKeyboardIVEnabled.c)
 *     IsPTPIVEnabled @ 0x14004FBE8 (IsPTPIVEnabled.c)
 *     RIMInitOneCoreEditionData @ 0x14004FC28 (RIMInitOneCoreEditionData.c)
 *     IsMouseIVEnabled @ 0x140050CD0 (IsMouseIVEnabled.c)
 *     IsPenIVEnabled @ 0x140217E98 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x140217EF0 (IsTouchIVEnabled.c)
 */

__int64 __fastcall RIMInitialize(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  *(_QWORD *)(UserSessionState + 40) = 0LL;
  *(_QWORD *)(UserSessionState + 48) = 0LL;
  v3 = W32GetUserSessionState(v2);
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  v5 = W32GetUserSessionState(v4);
  *(_QWORD *)(v5 + 88) = 0LL;
  *(_QWORD *)(v5 + 96) = 0LL;
  v7 = W32GetUserSessionState(v6);
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_QWORD *)(v7 + 112) = 0LL;
  *(_BYTE *)(W32GetUserSessionState(v8) + 184) = 1;
  *(_DWORD *)(W32GetUserSessionState(v9) + 36) = 18;
  v11 = W32GetUserSessionState(v10);
  *(_QWORD *)(v11 + 72) = 0LL;
  *(_QWORD *)(v11 + 80) = 0LL;
  RIMInitOneCoreEditionData(v12);
  *(_DWORD *)(W32GetUserSessionState(v13) + 240) = 0;
  *(_DWORD *)(W32GetUserSessionState(v14) + 244) = 3;
  *(_QWORD *)(W32GetUserSessionState(v15) + 256) = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v16) + 272) = 0;
  *(_DWORD *)(W32GetUserSessionState(v17) + 280) = 1;
  v18 = (unsigned __int8)IsMouseIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v19) + 276) = v18;
  *(_DWORD *)(W32GetUserSessionState(v20) + 288) = 2;
  v21 = (unsigned __int8)IsKeyboardIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v22) + 284) = v21;
  *(_DWORD *)(W32GetUserSessionState(v23) + 296) = 16;
  v24 = (unsigned __int8)IsTouchIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v25) + 292) = v24;
  *(_DWORD *)(W32GetUserSessionState(v26) + 304) = 4;
  v27 = (unsigned __int8)IsPenIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v28) + 300) = v27;
  *(_DWORD *)(W32GetUserSessionState(v29) + 312) = 8;
  v30 = (unsigned __int8)IsPTPIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v31) + 308) = v30;
  *(_BYTE *)(W32GetUserSessionState(v32) + 168) = 1;
  return 0LL;
}
