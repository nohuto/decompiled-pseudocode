/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140184DFC
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x14016D770 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400D4620 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D900C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ValidateHbwnd @ 0x14011F5D0 (ValidateHbwnd.c)
 *     ApiSetGetInputTransformList @ 0x140193A18 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x140193B14 (ApiSetHasInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1401FF120 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct tagINPUT_TRANSFORM *a5)
{
  int v5; // esi
  __int64 v6; // rbp
  char v9; // bl
  unsigned __int64 ThreadPointerData; // r15
  char v11; // di
  __int64 UserSessionState; // rax
  HWND v13; // rsi
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  unsigned __int64 *v24; // rdi
  __int64 v25; // rcx
  int v26; // r9d
  unsigned int PointerDataQPCTimeList; // r14d
  bool v28; // si
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  char v33; // di
  __int64 v34; // rax
  bool v35; // si
  int v36; // edx
  int v37; // r8d
  __int64 v38; // r9
  int v39; // [rsp+28h] [rbp-70h]
  __int16 v40; // [rsp+30h] [rbp-68h]
  _QWORD Buffer[9]; // [rsp+50h] [rbp-48h] BYREF
  HWND v42; // [rsp+A8h] [rbp+10h] BYREF
  int v43; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a3;
  v6 = a4;
  Buffer[0] = 0LL;
  v42 = 0LL;
  v9 = 1;
  if ( a3 == 1 )
  {
    v43 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14587LL);
  }
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct _LIST_ENTRY *)((char *)a2 + 1208),
                        v5,
                        0LL,
                        0LL,
                        &v42);
  if ( !ThreadPointerData )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v11,
        *(_QWORD *)(UserSessionState + 69400),
        2u,
        4u,
        0x13Fu,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
        v5);
    }
LABEL_50:
    v22 = 87;
LABEL_29:
    UserSetLastError(v22);
    return 0LL;
  }
  v13 = v42;
  if ( !ValidateHbwnd((__int64)v42) && !ValidateHwndEx((__int64)v13, 1, 0) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69400),
        2,
        4,
        320,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    goto LABEL_50;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v13) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69400),
        2,
        4,
        321,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    v22 = 232;
    goto LABEL_29;
  }
  if ( (_DWORD)v6 == 1 )
  {
    v24 = Buffer;
  }
  else
  {
    v24 = (unsigned __int64 *)Win32AllocPoolZInitImpl(256LL, 8 * v6, 0x78697355u);
    if ( !v24 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v9 = 0;
      }
      v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_L(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v9,
          v33,
          *(_QWORD *)(v34 + 69400),
          2u,
          v39,
          0x142u,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
      goto LABEL_50;
    }
  }
  v43 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(this, ThreadPointerData, v6, v24, &v43);
  if ( !PointerDataQPCTimeList )
  {
    if ( !v43 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v25 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v25 & 8) == 0)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v9 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(v25);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v30,
          *(_QWORD *)(v29 + 69400),
          2,
          4,
          323,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
      v32 = 232;
      goto LABEL_68;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_67:
      v32 = 87;
LABEL_68:
      UserSetLastError(v32);
      goto LABEL_69;
    }
    v38 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v40 = 324;
LABEL_66:
    LOBYTE(v37) = v35;
    LOBYTE(v36) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v36,
      v37,
      v38,
      2,
      4,
      v40,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    goto LABEL_67;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v13, v6, (_DWORD)v24, v26, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    v38 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v40 = 325;
    goto LABEL_66;
  }
LABEL_69:
  if ( v24 != Buffer )
    GreDeleteFastMutex((char *)v24);
  return PointerDataQPCTimeList;
}
