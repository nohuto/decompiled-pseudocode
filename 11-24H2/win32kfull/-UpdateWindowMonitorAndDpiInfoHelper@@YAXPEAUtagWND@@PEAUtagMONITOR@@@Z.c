/*
 * XREFs of ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x140045FEC
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     GreNotifyHwndDpiDirty @ 0x140101A6C (GreNotifyHwndDpiDirty.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

void __fastcall UpdateWindowMonitorAndDpiInfoHelper(struct tagWND *a1, struct tagMONITOR *a2)
{
  _DWORD *v2; // rax
  _DWORD *v5; // rcx
  __int64 v6; // r13
  char v7; // r12
  char v8; // bp
  char *v9; // r14
  __int64 v10; // rdi
  __int16 v11; // bx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  char *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  _DWORD *v18; // rax
  char v19; // bp
  char v20; // di
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax

  v2 = (_DWORD *)*((_QWORD *)a1 + 36);
  if ( v2 )
  {
    --*v2;
    v5 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( !*v5 )
      Win32FreePool(v5);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  if ( a2 )
  {
    v6 = *(_QWORD *)a2;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v7 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v8 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v8 = 0;
    }
    if ( v7 || v8 )
    {
      v10 = *(_QWORD *)a1;
      v9 = (char *)a2 + 40;
      v11 = *(_WORD *)(*((_QWORD *)a2 + 5) + 60LL);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v13) = v8;
      LOBYTE(v14) = v7;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        4,
        10,
        (__int64)&WPP_ba921055613530560edbf46882e6f89d_Traceguids,
        v10,
        v11);
    }
    else
    {
      v9 = (char *)a2 + 40;
    }
    v15 = v9;
    if ( PtiCurrent() )
    {
      if ( *((_QWORD *)PtiCurrent() + 62) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) != 0 )
        {
          v16 = *((_QWORD *)a1 + 5);
          v17 = *(_DWORD *)(v16 + 288);
          if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
          {
            v15 = (char *)a2 + 40;
            if ( *(_WORD *)(v16 + 284) != *(_WORD *)(*((_QWORD *)a2 + 5) + 60LL) )
              GreNotifyHwndDpiDirty(*(HWND *)a1);
          }
        }
      }
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) = v6;
    v18 = (_DWORD *)*((_QWORD *)a2 + 16);
    *((_QWORD *)a1 + 36) = v18;
    ++*v18;
    *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL) = *(_WORD *)(*(_QWORD *)v15 + 60LL);
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v19 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v20 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v20 = 0;
    }
    if ( v19 || v20 )
    {
      v21 = *(_QWORD *)a1;
      v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v23) = v20;
      LOBYTE(v24) = v19;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v24,
        v23,
        *(_QWORD *)(v22 + 69416),
        5,
        4,
        11,
        (__int64)&WPP_ba921055613530560edbf46882e6f89d_Traceguids,
        v21);
    }
    if ( PtiCurrent() )
    {
      if ( *((_QWORD *)PtiCurrent() + 62) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) != 0 )
        {
          v25 = *((_QWORD *)a1 + 5);
          v26 = *(_DWORD *)(v25 + 288);
          if ( (v26 & 0xF) == 0 && (v26 & 0x40000000) != 0 && *(_WORD *)(v25 + 284) )
            GreNotifyHwndDpiDirty(*(HWND *)a1);
        }
      }
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) = 0LL;
    v27 = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 36) = 0LL;
    *(_WORD *)(v27 + 284) = 0;
  }
}
