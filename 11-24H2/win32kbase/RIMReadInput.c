/*
 * XREFs of RIMReadInput @ 0x14005C200
 * Callers:
 *     NtRIMReadInput @ 0x140128F40 (NtRIMReadInput.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x140145BE0 (-Read@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     ?ReadInput@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x14005C8F8 (-ReadInput@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x14005CA04 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimConvertUserToKernelEventHandle @ 0x14005CCEC (rimConvertUserToKernelEventHandle.c)
 *     rimIssueReads @ 0x14005CDBC (rimIssueReads.c)
 *     rimCompleteReads @ 0x14005CF54 (rimCompleteReads.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x14005DB88 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMReadInput(
        char *Handle,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const struct RawInputManagerObject *v12; // rsi
  bool v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  NTSTATUS v18; // ebp
  bool v19; // bp
  bool v20; // r14
  char CurrentThread; // bl
  char v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v26; // bl
  bool v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v32; // bl
  bool v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  bool v37; // r14
  bool v38; // r15
  int v39; // edx
  int v40; // r8d
  __int64 v41; // r9
  bool v42; // bl
  bool v43; // di
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  int HandleInformation; // [rsp+28h] [rbp-80h]
  __int16 v48; // [rsp+30h] [rbp-78h]
  char v49; // [rsp+40h] [rbp-68h]
  char v50; // [rsp+48h] [rbp-60h]
  char v51; // [rsp+50h] [rbp-58h]
  char v52; // [rsp+58h] [rbp-50h]
  PVOID Object; // [rsp+60h] [rbp-48h] BYREF
  HANDLE Handlea; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v55; // [rsp+C8h] [rbp+20h]

  v55 = a4;
  v12 = 0LL;
  v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Handle);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      81,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v18 = -1073741816;
    goto LABEL_27;
  }
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(Handle, 3u, ExRawInputManagerObjectType, 1, &Object, 0LL);
  if ( v18 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      v12 = (const struct RawInputManagerObject *)Object;
    }
    else
    {
      v18 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  if ( v18 >= 0 )
  {
    InputTraceLogging::RIM::ReadInput(v12);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v12 + 104, 0LL);
    *((_QWORD *)v12 + 14) = KeGetCurrentThread();
    if ( *((_BYTE *)v12 + 81) || *((_BYTE *)v12 + 82) )
    {
      v18 = -1073741637;
      v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v45) = v43;
        LOBYTE(v46) = v42;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v46,
          v45,
          *(_QWORD *)(v44 + 19392),
          3,
          1,
          86,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
      goto LABEL_26;
    }
    rimHandleAnyPnpRemovePendingDevices(v12);
    Handlea = 0LL;
    v18 = rimConvertUserToKernelEventHandle(a4, &Handlea);
    if ( v18 < 0 )
    {
      v32 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v35,
          *(_QWORD *)(v34 + 19392),
          3,
          1,
          85,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
          a4);
      }
      goto LABEL_26;
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v12 + 760, 0LL);
    *((_QWORD *)v12 + 96) = KeGetCurrentThread();
    if ( *((_QWORD *)v12 + 104) )
      rimIssueReads(v12);
    if ( !*((_BYTE *)v12 + 776) )
    {
      *((_QWORD *)v12 + 105) = Handlea;
      *((_QWORD *)v12 + 108) = a6;
      *((_QWORD *)v12 + 107) = a7;
      *((_QWORD *)v12 + 109) = a8;
      *((_DWORD *)v12 + 212) = a5;
      *((_BYTE *)v12 + 776) = 1;
      *((_QWORD *)v12 + 110) = a2;
      *((_DWORD *)v12 + 222) = a3;
      v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        CurrentThread = (unsigned __int8)KeGetCurrentThread();
        v22 = (char)Handlea;
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v24) = v20;
        LOBYTE(v25) = v19;
        WPP_RECORDER_AND_TRACE_SF_qqqq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 19392),
          4,
          HandleInformation,
          82,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
          (char)v12,
          v55,
          v22,
          CurrentThread);
      }
      rimIssueReads(v12);
      v18 = rimCompleteReads(v12);
      goto LABEL_25;
    }
    if ( *((_QWORD *)v12 + 104) )
    {
      v37 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v37 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_63;
      v52 = (unsigned __int8)KeGetCurrentThread();
      v51 = (char)Handlea;
      v41 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v50 = v55;
      v49 = (char)v12;
      v48 = 84;
    }
    else
    {
      v18 = -1073740682;
      v37 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v37 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_63;
      v52 = (unsigned __int8)KeGetCurrentThread();
      v51 = (char)Handlea;
      v41 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v50 = v55;
      v49 = (char)v12;
      v48 = 83;
    }
    LOBYTE(v40) = v38;
    LOBYTE(v39) = v37;
    WPP_RECORDER_AND_TRACE_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v39,
      v40,
      v41,
      3,
      HandleInformation,
      v48,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v49,
      v50,
      v51,
      v52);
LABEL_63:
    ZwClose(Handlea);
LABEL_25:
    *((_QWORD *)v12 + 96) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v12 + 760, 0LL);
    KeLeaveCriticalRegion();
LABEL_26:
    *((_QWORD *)v12 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v12 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v12);
  }
LABEL_27:
  v26 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v29) = v27;
    LOBYTE(v30) = v26;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v29,
      *(_QWORD *)(v28 + 19392),
      4,
      1,
      87,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v18);
  }
  return (unsigned int)v18;
}
