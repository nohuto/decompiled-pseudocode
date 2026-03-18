/*
 * XREFs of rimObsPopInputMessage @ 0x140136DB8
 * Callers:
 *     rimObsObserveNextInput @ 0x140136B18 (rimObsObserveNextInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCalculateObserverMessageSize @ 0x1401EF8FC (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1401EFCE0 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  char **v13; // rdi
  int v14; // r14d
  unsigned int v15; // ebx
  char v16; // di
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char *v22; // rdi
  int v23; // eax
  char v24; // di
  char v25; // si
  __int64 v26; // rax
  char v27; // r14
  bool v28; // r15
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rcx
  char **v33; // rax
  char v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // eax
  __int64 v40; // [rsp+40h] [rbp-40h]
  __int64 v41; // [rsp+50h] [rbp-30h] BYREF
  int v42; // [rsp+58h] [rbp-28h]
  int v43; // [rsp+5Ch] [rbp-24h]
  __int128 v44; // [rsp+60h] [rbp-20h]
  __int128 v45; // [rsp+70h] [rbp-10h]

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      1,
      15,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1);
  }
  v13 = (char **)(a1 + 144);
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 296LL);
  v14 = *(_DWORD *)(a1 + 164);
  if ( v14 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v34 = 0;
    }
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v37) = v35;
      LOBYTE(v38) = v34;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v38,
        v37,
        *(_QWORD *)(v36 + 69400),
        3,
        1,
        18,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        v14);
    }
    v39 = *(_DWORD *)(a1 + 164);
    v41 = 1LL;
    v42 = 2;
    v43 = v39;
    v44 = 0LL;
    v45 = 0LL;
    v15 = rimObsCopyMessage(&v41, a2, a3, a4);
    *(_DWORD *)(a1 + 164) = 0;
  }
  else if ( *(_DWORD *)(a1 + 160) )
  {
    if ( *v13 == (char *)v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 307LL);
    v22 = *v13;
    v23 = rimObsCopyMessage(v22 + 16, a2, a3, a4);
    v15 = v23;
    if ( v23 == -1073741789 )
    {
      v41 = 1LL;
      v42 = 0;
      v44 = 0LL;
      v45 = 0LL;
      v43 = rimObsCalculateObserverMessageSize(v22 + 16);
      v15 = rimObsCopyMessage(&v41, a2, a3, a4);
      v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v40) = a4;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v25,
          *(_QWORD *)(v26 + 69400),
          4u,
          1u,
          0x10u,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v40,
          v43);
      }
    }
    else if ( v23 >= 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v30,
          *(_QWORD *)(v29 + 69400),
          4,
          1,
          17,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      v32 = *(_QWORD *)v22;
      if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 || (v33 = (char **)*((_QWORD *)v22 + 1), *v33 != v22) )
        __fastfail(3u);
      *v33 = (char *)v32;
      *(_QWORD *)(v32 + 8) = v33;
      GreDeleteFastMutex(v22);
      --*(_DWORD *)(a1 + 160);
    }
  }
  else
  {
    v15 = -2147483622;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v16 = 0;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v16;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(v18 + 69400),
      4,
      1,
      19,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v15);
  }
  return v15;
}
