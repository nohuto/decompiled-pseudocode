/*
 * XREFs of ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1402C1B90
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A9828 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14014873C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401C696C (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall CallShell::xxxWindowSizeStartingHandler(CallShell *this, struct tagWND *a2)
{
  int v2; // ebx
  __int64 v4; // rax
  char v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int16 v8; // ax
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // ecx
  bool v13; // di
  bool v14; // si
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // [rsp+50h] [rbp-88h] BYREF
  int v19; // [rsp+58h] [rbp-80h]
  _BYTE v20[16]; // [rsp+60h] [rbp-78h] BYREF
  int v21; // [rsp+70h] [rbp-68h]
  int v22; // [rsp+74h] [rbp-64h]
  int v23; // [rsp+78h] [rbp-60h]
  int v24; // [rsp+7Ch] [rbp-5Ch]

  v2 = (int)a2;
  memset_0(&v18, 0, 0x68uLL);
  v18 = *(_QWORD *)this;
  v4 = *((_QWORD *)this + 2);
  v19 = 2;
  v21 = v2;
  v5 = *(_BYTE *)(*(_QWORD *)(v4 + 472) + 284LL);
  v6 = v5 & 1;
  LOWORD(v6) = 4 * (v5 & 1);
  v7 = (unsigned __int16)v6;
  LOWORD(v7) = v6 | 1;
  if ( (v5 & 0x10) == 0 )
    LOWORD(v7) = 4 * (v5 & 1);
  v8 = v7 | 2;
  if ( (v5 & 4) == 0 )
    v8 = v7;
  v22 = v8;
  v9 = PtiCurrent(v6, v7);
  TransformRectBetweenCoordinateSpaces(
    v20,
    *((_QWORD *)this + 5) + 88LL,
    *(_QWORD *)(*((_QWORD *)v9 + 62) + 328LL),
    this);
  if ( anonymous_namespace_::xxxCallIAMWindowManagementHandler((struct tagDRAWITEMSTRUCT *)&v18, 0) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 712LL);
    if ( v11 )
    {
      v12 = v23;
      *(_DWORD *)(v11 + 380) = v24;
      *(_DWORD *)(v11 + 376) = v12;
      v13 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_dq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69416));
      }
    }
  }
}
