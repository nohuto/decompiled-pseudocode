/*
 * XREFs of xxxShowScrollBar @ 0x1401C8C38
 * Callers:
 *     NtUserShowScrollBar @ 0x1401C8B40 (NtUserShowScrollBar.c)
 * Callees:
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     GetScrollbarTypeString @ 0x140292720 (GetScrollbarTypeString.c)
 *     _InitPwSB @ 0x1402E8494 (_InitPwSB.c)
 *     WPP_RECORDER_AND_TRACE_SF_qll @ 0x1402E8790 (WPP_RECORDER_AND_TRACE_SF_qll.c)
 *     WPP_RECORDER_AND_TRACE_SF_qslll @ 0x1402E8888 (WPP_RECORDER_AND_TRACE_SF_qslll.c)
 */

__int64 __fastcall xxxShowScrollBar(struct tagWND *a1, __int64 a2, int a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // r13d
  int v6; // ebp
  unsigned int v7; // r14d
  __int64 v9; // rcx
  char v10; // r12
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  __int64 *v17; // rdx
  unsigned int v18; // r14d
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  char v23; // r14
  char v24; // bp
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v29; // [rsp+B8h] [rbp+10h]

  v3 = 0;
  v4 = a3;
  v5 = 0;
  v6 = 0;
  v7 = a2;
  v9 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v10 = 0;
  }
  v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    GetScrollbarTypeString(v7, v12, v13, *(_QWORD *)(UserSessionState + 69416));
    LOBYTE(v14) = v10;
    LOBYTE(v15) = v29;
    v4 = a3;
    WPP_RECORDER_AND_TRACE_SF_qslll(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v14, v15, v16);
  }
  v17 = (__int64 *)((char *)a1 + 40);
  if ( v7 )
  {
    v18 = v7 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        v20 = W32GetUserSessionState(v9, v17);
        LOBYTE(v3) = v4 != 0;
        xxxShowWindowEx(a1, v3 | *(_DWORD *)(v20 + 67056) & 0x10000u, v3 & 0x10000 | *(_DWORD *)(v20 + 67056) & 0x10000);
        return 1LL;
      }
      if ( v19 == 1 )
        v6 = 3145728;
    }
    else
    {
      v6 = 0x200000;
    }
  }
  else
  {
    v6 = 0x100000;
  }
  v21 = *v17;
  v22 = *(_DWORD *)(v21 + 28);
  if ( v4 )
  {
    if ( (v6 & v22) != v6 )
    {
      v5 = 1;
      *(_DWORD *)(v21 + 28) = v6 | v22;
    }
    if ( !*((_QWORD *)a1 + 19) )
      InitPwSB(a1);
  }
  else
  {
    if ( (v22 & v6) == 0 )
      return 1LL;
    v5 = 1;
    *(_DWORD *)(v21 + 28) = v22 & ~v6;
  }
  if ( v5 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v23 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v24 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v24 = 0;
    }
    if ( v23 || v24 )
    {
      v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_qll(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(v25 + 69416));
    }
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  }
  return 1LL;
}
