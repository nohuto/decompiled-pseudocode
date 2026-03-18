/*
 * XREFs of ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D36A8
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140211468 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?CoalesceWindowAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D2780 (-CoalesceWindowAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 */

void __fastcall AdvancedWindowPos::PostAsyncWindowAction(
        AdvancedWindowPos *this,
        PETHREAD **a2,
        const struct AdvancedWindowPos::WindowAction *a3)
{
  AdvancedWindowPos *v4; // rsi
  __int64 v5; // rdx
  bool v6; // bp
  bool v7; // di
  LARGE_INTEGER v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // bp
  bool v13; // al
  unsigned int ThreadId; // esi
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  volatile signed __int32 **v22; // rbx
  bool v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int128 v27; // xmm0
  char *v28; // r13
  __int64 v29; // rdx
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  struct tagTHREADINFO **v34; // [rsp+60h] [rbp-48h]
  char v36; // [rsp+C0h] [rbp+18h]
  char v37; // [rsp+C8h] [rbp+20h]

  v4 = this;
  if ( AdvancedWindowPos::CoalesceWindowAction(this, (struct tagWND *)a2, a3) )
  {
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = *(LARGE_INTEGER *)v4;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        4,
        115,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v8.QuadPart);
    }
  }
  else
  {
    v12 = 1;
    v13 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v36 = v13;
    v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned int)PsGetThreadId(**((PETHREAD **)v4 + 2));
      v34 = (struct tagTHREADINFO **)(a2 + 18);
      v15 = (unsigned int)PsGetThreadId(*a2[18]);
      v16 = *(_QWORD *)this;
      v19 = W32GetUserSessionState(v18, v17);
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v36,
        v37,
        *(_QWORD *)(v19 + 69416),
        4u,
        4u,
        0x74u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v16,
        v15,
        ThreadId);
      v4 = this;
    }
    else
    {
      v34 = (struct tagTHREADINFO **)(a2 + 18);
    }
    v20 = Win32AllocPoolZInit(184LL, 1886871893LL);
    v22 = (volatile signed __int32 **)v20;
    if ( v20 )
    {
      *(_OWORD *)v20 = *(_OWORD *)a2;
      *(_OWORD *)(v20 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v20 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v20 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v20 + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(v20 + 80) = *((_OWORD *)a2 + 5);
      *(_OWORD *)(v20 + 96) = *((_OWORD *)a2 + 6);
      v27 = *((_OWORD *)a2 + 7);
      v28 = (char *)(a2 + 16);
      *(_OWORD *)(v20 + 112) = v27;
      *(_OWORD *)(v20 + 128) = *(_OWORD *)v28;
      *(_OWORD *)(v20 + 144) = *((_OWORD *)v28 + 1);
      *(_OWORD *)(v20 + 160) = *((_OWORD *)v28 + 2);
      *(_QWORD *)(v20 + 176) = *((_QWORD *)v28 + 6);
      if ( (unsigned int)PostEventMessageEx(
                           *v34,
                           *((struct tagQ **)*v34 + 59),
                           0x1Cu,
                           (LARGE_INTEGER *)v4,
                           0,
                           0LL,
                           v20,
                           0LL) )
      {
        _InterlockedAdd(v22[21], 1u);
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v12 = 0;
        }
        v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
          LOBYTE(v32) = v30;
          LOBYTE(v33) = v12;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v33,
            v32,
            *(_QWORD *)(v31 + 69416),
            2,
            4,
            118,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
        Win32FreePool(v22);
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v12 = 0;
      }
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          *(_QWORD *)(v24 + 69416),
          2,
          4,
          117,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
  }
}
