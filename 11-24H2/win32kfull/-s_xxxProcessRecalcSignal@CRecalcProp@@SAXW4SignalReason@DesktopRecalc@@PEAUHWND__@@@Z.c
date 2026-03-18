/*
 * XREFs of ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x1401CBE08
 * Callers:
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x14006809C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     DesktopWindowFromDesktop @ 0x1401CC84C (DesktopWindowFromDesktop.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 */

void __fastcall CRecalcProp::s_xxxProcessRecalcSignal(__int64 a1, HWND a2)
{
  char v2; // r12
  int v4; // edi
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // r15
  __int64 v7; // rdx
  char v8; // bl
  char v9; // r13
  bool v10; // al
  __int64 v11; // rax
  int v12; // edx
  struct tagBWL *v13; // rax
  struct tagBWL *v14; // r15
  bool v15; // zf
  HWND *v16; // rdi
  BOOL v17; // esi
  HWND v18; // rax
  const char *v19; // r15
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  char v27; // bl
  char v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  char v33; // [rsp+58h] [rbp-28h]
  __int64 v34; // [rsp+5Ch] [rbp-24h]
  __int64 v35; // [rsp+68h] [rbp-18h]
  int v36; // [rsp+70h] [rbp-10h]
  struct tagTHREADINFO *v37; // [rsp+C0h] [rbp+40h]

  v2 = 0;
  v4 = a1;
  if ( (_DWORD)a1 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      v6 = PtiCurrent(a1, (__int64)a2);
      v37 = v6;
      v7 = *(_QWORD *)&WPP_GLOBAL_Control;
      v8 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (v5 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v5 & 0x40) == 0)
        || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v9 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v2 = 1;
      }
      if ( v9 || v2 )
      {
        if ( v4 == 1 )
        {
          v19 = "thread";
        }
        else
        {
          v19 = "thread deferred";
          if ( v4 != 2 )
            v19 = "UNKNOWN";
        }
        UserSessionState = W32GetUserSessionState(v5, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v21) = v2;
        LOBYTE(v22) = v9;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v21,
          *(_QWORD *)(UserSessionState + 69416),
          5,
          7,
          71,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          (__int64)v19);
        v6 = v37;
      }
      *((_QWORD *)v6 + 170) &= ~0x4000000000uLL;
      v10 = ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x20, v7);
      v11 = DesktopWindowFromDesktop(*((_QWORD *)v6 + 62), v10);
      v13 = BuildHwndList(*(struct tagWND **)(v11 + 112), (unsigned int)(32 * v12 + 2), (__int64)v6, 1);
      v14 = v13;
      if ( v13 )
      {
        v15 = v4 == 1;
        v16 = (HWND *)((char *)v13 + 32);
        v17 = !v15;
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 == (HWND)1 )
            break;
          v32 = 0LL;
          v34 = 0LL;
          v33 = 0;
          v35 = 0LL;
          v36 = v17;
          CRecalcProp::s_xxxProcessTopologyChange(v18, (struct CRecalcContext *)&v32);
          ++v16;
        }
        FreeHwndList(v14, 0LL);
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v8 = 0;
        }
        v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
          LOBYTE(v25) = v23;
          LOBYTE(v26) = v8;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v26,
            v25,
            *(_QWORD *)(v24 + 69416),
            2,
            7,
            72,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
        }
      }
    }
  }
  else
  {
    v27 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v28 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v27 = 0;
    }
    if ( v28 || v27 )
    {
      v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v30) = v27;
      LOBYTE(v31) = v28;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69416),
        5,
        7,
        70,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        (char)a2);
    }
    v32 = 0LL;
    v33 = 0;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 2;
    CRecalcProp::s_xxxProcessTopologyChange(a2, (struct CRecalcContext *)&v32);
  }
}
