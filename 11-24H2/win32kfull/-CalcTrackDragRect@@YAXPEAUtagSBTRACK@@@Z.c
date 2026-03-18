/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E0EC8
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E1754 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1402E6E60 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qldddddd @ 0x1402E4B30 (WPP_RECORDER_AND_TRACE_SF_qldddddd.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1)
{
  int v1; // ebx
  char *v2; // rsi
  char *v3; // rdi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r9d
  __int64 v10; // rdx
  bool v11; // r12
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  bool v15; // [rsp+B0h] [rbp+8h]

  v1 = *(_DWORD *)a1 & 2;
  v2 = (char *)a1 + 36;
  v3 = (char *)a1 + 32;
  if ( !v1 )
    v2 = (char *)a1 + 32;
  if ( !v1 )
    v3 = (char *)a1 + 36;
  DpiForSystem = GetDpiForSystem((__int64)a1);
  DpiDependentMetric = GetDpiDependentMetric(4 - (unsigned int)(v1 != 0), DpiForSystem);
  v7 = *((_QWORD *)a1 + 12);
  v8 = *(_DWORD *)(v7 + 24);
  v9 = 8 * (*(_DWORD *)(v7 + 28) - v8);
  v10 = (unsigned int)(v8 - v9);
  *(_DWORD *)v3 = v10;
  *(_DWORD *)v2 = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - 2 * DpiDependentMetric;
  *((_DWORD *)v3 + 2) = v9 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  *((_DWORD *)v2 + 2) = 2 * DpiDependentMetric + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
  v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
    LOBYTE(v13) = v15;
    LOBYTE(v14) = v11;
    WPP_RECORDER_AND_TRACE_SF_qldddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69416));
  }
}
