/*
 * XREFs of ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x140187A98
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x140187530 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14014873C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     WPP_RECORDER_AND_TRACE_SF_dds @ 0x1401EEFB0 (WPP_RECORDER_AND_TRACE_SF_dds.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

char __fastcall CallShell::xxxArrangementInfoHandler(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // r15d
  struct tagTHREADINFO *v6; // rbx
  char v7; // si
  __int64 v8; // rdx
  char v9; // r8
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  bool v13; // bp
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx

  v4 = a2;
  v6 = PtiCurrent(a1, a2);
  memset_0(a3, 0, 0x68uLL);
  v7 = 1;
  *a3 = **(_QWORD **)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 260);
  *((_DWORD *)a3 + 8) = 0;
  *((_DWORD *)a3 + 13) = 0;
  *((_DWORD *)a3 + 18) = 0;
  a3[10] = 0LL;
  a3[2] = v8;
  *((_DWORD *)a3 + 7) = *((_DWORD *)v6 + 344);
  v9 = *(_BYTE *)(*((_QWORD *)v6 + 59) + 284LL);
  v10 = 4 * (v9 & 1);
  v11 = v10;
  LOWORD(v11) = v10 | 1;
  if ( (v9 & 0x10) == 0 )
    LOWORD(v11) = 4 * (v9 & 1);
  v12 = v11 | 2;
  if ( (v9 & 4) == 0 )
    v12 = v11;
  *((_DWORD *)a3 + 6) = v12;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v7 = 0;
  }
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v7;
    WPP_RECORDER_AND_TRACE_SF_dds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69416));
  }
  return anonymous_namespace_::xxxCallIAMWindowManagementHandler((struct tagDRAWITEMSTRUCT *)a3, v4);
}
