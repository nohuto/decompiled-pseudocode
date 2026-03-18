/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1401F5AF0
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4 (ApiSetEditionSetAccessibilityTimer.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     MouseMove @ 0x140213080 (MouseMove.c)
 */

__int64 __fastcall xxxMKMouseMove(__int64 a1)
{
  __int16 v1; // bx
  __int64 UserSessionState; // rdi
  __int64 v3; // rcx
  int v4; // esi
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // bl
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  void (__fastcall *v13)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  char v15; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  if ( (*(_DWORD *)(W32GetUserSessionState(v3) + 67056) & 0x2000) == 0 || !*(_QWORD *)(UserSessionState + 20664) )
  {
    *(_DWORD *)(UserSessionState + 20672) = (char)v1;
    *(_DWORD *)(UserSessionState + 20676) = SHIBYTE(v1);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v15, 1);
    v4 = *(_DWORD *)(UserSessionState + 20672);
    v5 = *(_DWORD *)(UserSessionState + 20676);
    v7 = *(unsigned int *)(W32GetUserSessionState(v6) + 20636);
    if ( (v7 & 0x40) != 0 )
    {
      v8 = *(_BYTE *)(W32GetUserSessionState(v7) + 21905);
      if ( ((*(_BYTE *)(UserSessionState + 21901) | (unsigned __int8)(*(_BYTE *)(W32GetUserSessionState(v9) + 21906) | v8)) & 0xC) != 0 )
      {
        v10 = 4 * *(unsigned __int8 *)(UserSessionState + 20814);
        v4 *= v10;
        v5 *= v10;
      }
    }
    MouseMove(v4, v5);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v15);
    if ( !*(_DWORD *)(UserSessionState + 20536) || (*(_DWORD *)(W32GetUserSessionState(v11) + 67056) & 0x2000) != 0 )
    {
      v12 = W32GetUserSessionState(v11);
      v13 = xxxMKMoveAccelCursorTimer;
      *(_DWORD *)(v12 + 20680) = 0;
      if ( !*(_BYTE *)(UserSessionState + 20684) )
        v13 = xxxMKMoveConstCursorTimer;
      *(_QWORD *)(UserSessionState + 20664) = ApiSetEditionSetAccessibilityTimer(
                                                *(_QWORD *)(UserSessionState + 20664),
                                                50LL,
                                                (__int64)v13,
                                                0);
    }
  }
  return 0LL;
}
