/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     MouseMove @ 0x140213080 (MouseMove.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1)
{
  __int64 UserSessionState; // rdi
  __int64 v2; // rcx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  char v8; // bl
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(unsigned int *)(W32GetUserSessionState(v2) + 20636);
  if ( (v3 & 0x40) == 0 )
    goto LABEL_6;
  v4 = *(_BYTE *)(W32GetUserSessionState(v3) + 21905);
  if ( ((*(_BYTE *)(UserSessionState + 21901) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v5) + 21906) | v4)) & 3) == 0 )
  {
    v8 = *(_BYTE *)(W32GetUserSessionState(v6) + 21905);
    if ( ((*(_BYTE *)(UserSessionState + 21901) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v9) + 21906) | v8)) & 0xC) != 0 )
    {
      v7 = 4 * *(unsigned __int8 *)(UserSessionState + 20814);
      goto LABEL_7;
    }
LABEL_6:
    v10 = *(_DWORD *)(UserSessionState + 20680) % (unsigned int)*(unsigned __int8 *)(UserSessionState + 20813);
    v11 = *(_DWORD *)(UserSessionState + 20680) % (unsigned int)*(unsigned __int8 *)(UserSessionState + 20813);
    *(_DWORD *)(UserSessionState + 20680) = v11;
    v7 = *(unsigned __int8 *)(v10 + UserSessionState + 20814);
    *(_DWORD *)(UserSessionState + 20680) = v11 + 1;
    if ( !v7 )
      return;
    goto LABEL_7;
  }
  v7 = 1;
LABEL_7:
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v12, 1);
  MouseMove(*(_DWORD *)(UserSessionState + 20672) * v7, *(_DWORD *)(UserSessionState + 20676) * v7);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v12);
}
