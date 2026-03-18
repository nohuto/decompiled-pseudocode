/*
 * XREFs of ?CoalesceWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402C91E4
 * Callers:
 *     ?PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402CA098 (-PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDDDD @ 0x1402D1868 (WPP_RECORDER_AND_TRACE_SF_qDDDD.c)
 */

char __fastcall CoalesceWindowAction(struct tagWND *a1, const struct _WINDOW_ACTION *a2, struct CMonitorTopology *a3)
{
  int v3; // r13d
  __int64 v5; // rax
  int *v6; // rbx
  int v7; // r12d
  int v8; // r15d
  int v9; // r14d
  char v10; // bp
  char v11; // si
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx

  v3 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0xFFFFFFE0) != 0 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) + 32LL);
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)(v5 + 96) != 31 )
    return 0;
  if ( *(_QWORD *)(v5 + 16) != *(_QWORD *)a1 )
    return 0;
  v6 = *(int **)(v5 + 40);
  v7 = *v6;
  if ( (*v6 & 0xFFFFFFE0) != 0 )
    return 0;
  if ( *(struct CMonitorTopology **)(v5 + 32) != a3 )
    return 0;
  v8 = v6[1];
  v9 = *((_DWORD *)a2 + 1);
  if ( ((v9 ^ v8) & 0x400) != 0
    || ((unsigned __int8)v3 & (unsigned __int8)v7 & 0x10) != 0 && (((unsigned __int8)v9 ^ (unsigned __int8)v8) & 8) != 0 )
  {
    return 0;
  }
  if ( ((unsigned __int8)v3 & (unsigned __int8)v7 & 8) != 0 && (((unsigned __int8)v9 ^ (unsigned __int8)v8) & 0x10) != 0 )
    return 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v10 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_qDDDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69416));
  }
  if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    *v6 |= 2u;
    *(_QWORD *)(v6 + 3) = *(_QWORD *)((char *)a2 + 12);
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    *v6 |= 4u;
    *(_QWORD *)(v6 + 5) = *(_QWORD *)((char *)a2 + 20);
  }
  if ( (*(_DWORD *)a2 & 0x10) != 0 )
  {
    *v6 |= 0x10u;
    if ( (*((_DWORD *)a2 + 1) & 0x10) != 0 )
      v6[1] |= 0x10u;
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    *v6 |= 1u;
    v6[2] = *((_DWORD *)a2 + 2);
  }
  if ( (*(_DWORD *)a2 & 8) != 0 )
  {
    *v6 |= 8u;
    *((_QWORD *)v6 + 4) = *((_QWORD *)a2 + 4);
    if ( (*((_DWORD *)a2 + 1) & 0x10) != 0 )
      v6[1] |= 0x10u;
  }
  return 1;
}
