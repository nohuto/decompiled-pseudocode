/*
 * XREFs of RIMAllocateHidDesc @ 0x1401DAB28
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400A89C8 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400A8E7C (RIMConfigurePointerDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F0FD0 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     InkProcessorIsInkDevice @ 0x14013AF58 (InkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x140151E50 (RIMIsInteractiveCtrl.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1401525F0 (EtwTracePointerDeviceArrivalStop.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x140152F50 (EtwTracePointerDeviceArrivalStart.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x140159124 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     rimIsHidInputDevice @ 0x14017C7DC (rimIsHidInputDevice.c)
 *     RIMGetTouhpadClickForceSensitivityCaps @ 0x14019A684 (RIMGetTouhpadClickForceSensitivityCaps.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeHidDesc @ 0x1401DD0C4 (RIMFreeHidDesc.c)
 *     RIMGetButtonsSupported @ 0x1401DD200 (RIMGetButtonsSupported.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  bool v7; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // r14
  char v15; // r12
  int v16; // ebx
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  char v21; // di
  char v22; // r14
  const wchar_t *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  bool v26; // al
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // r15
  char v31; // r12
  int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // xmm0_8
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  CTouchProcessor *v39; // rcx
  char v40; // al
  int v41; // ebx
  int v42; // edi
  __int64 v43; // rax
  CTouchProcessor *v44; // rcx
  char v45; // al
  int v46; // ebx
  int v47; // edi
  __int64 v48; // rax
  bool v49; // r14
  int v50; // eax
  int v51; // eax
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int (__fastcall *v58)(__int64, __int64, _QWORD); // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // eax
  char v62; // r15
  bool v63; // bl
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  bool v68; // bl
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  __int64 v72; // [rsp+48h] [rbp-61h]
  __int64 v73; // [rsp+50h] [rbp-59h]
  bool v74; // [rsp+58h] [rbp-51h]
  unsigned __int16 v75; // [rsp+58h] [rbp-51h]
  char v76; // [rsp+58h] [rbp-51h]
  char v77; // [rsp+58h] [rbp-51h]
  bool v78; // [rsp+5Ch] [rbp-4Dh]
  __int64 v79; // [rsp+68h] [rbp-41h] BYREF
  int v80; // [rsp+70h] [rbp-39h]
  _OWORD v81[7]; // [rsp+78h] [rbp-31h] BYREF
  char PreparsedDataa; // [rsp+108h] [rbp+5Fh]
  char PreparsedDatab; // [rsp+108h] [rbp+5Fh]
  unsigned __int16 PreparsedDatac; // [rsp+108h] [rbp+5Fh]

  v7 = 0;
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
      v7 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        54,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
    return 0LL;
  }
  if ( !a4[2] && (*(_DWORD *)(a2 + 168) & 0x10000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *a4;
      v17 = a4[1];
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v15,
        *(_QWORD *)(v18 + 19392),
        3u,
        1u,
        0x37u,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v17,
        v16);
    }
    return 0LL;
  }
  v19 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x44687352u);
  v20 = v19;
  if ( !v19 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = *(const wchar_t **)(a2 + 200);
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v22,
        *(_QWORD *)(v24 + 19392),
        3u,
        1u,
        0x38u,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v23);
    }
    return 0LL;
  }
  *(_OWORD *)(v19 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v19 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v19 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v19 + 88) = *((_OWORD *)a4 + 3);
  if ( (unsigned int)rimIsHidInputDevice(a2, v19) )
  {
    v79 = Win32AllocPoolZInitImpl(64LL, 10LL * *(unsigned __int16 *)(v20 + 44), 0x70707352u);
    *(_QWORD *)(v20 + 24) = v79;
    v26 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v25 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v25 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v26 = 1;
    }
    v78 = v26;
    v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      v27 = W32GetUserSessionState(v25);
      LOBYTE(v28) = v74;
      LOBYTE(v29) = v78;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 19392),
        4,
        1,
        57,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v79);
    }
    if ( !*(_QWORD *)(v20 + 24) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = *(unsigned __int16 *)(v20 + 44);
        v33 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v72) = v32;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v31,
          *(_QWORD *)(v33 + 19392),
          3u,
          1u,
          0x3Au,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v72);
      }
      RIMFreeHidDesc((PVOID)v20);
      return 0LL;
    }
  }
  *(_QWORD *)(v20 + 16) = a3;
  *(_QWORD *)(v20 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v20 + 112) = *(_DWORD *)(a5 + 8);
  v75 = a4[1];
  if ( v75 == 13
    && ((v34 = *a4, (unsigned __int16)(v34 - 1) <= 1u) || (LOWORD(v34) = v34 - 4, (unsigned __int16)v34 <= 1u)) )
  {
    EtwTracePointerDeviceArrivalStart(v34);
    v35 = *(_QWORD *)(v20 + 104);
    v80 = *(_DWORD *)(v20 + 112);
    v79 = v35;
    v36 = RIMCreatePointerDeviceInfo(a1, a2, (_DWORD)a3, (_DWORD)a4, a6, a7, (__int64)&v79);
    v37 = *a4;
    v38 = 0LL;
    if ( v36 >= 0 )
    {
      LOWORD(v37) = v37 - 4;
      if ( (unsigned __int16)v37 <= 1u )
      {
        RIMConfigurePointerDevice(a1, a2, v20);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(a2 + 456) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1282);
          RIMApiSetSetUserPTPEnabledPreference(a2, v20, a1);
          v50 = RIMGetDeviceFeedbackGlobalIntensityCaps(a3, 0LL);
          *(_DWORD *)(a2 + 184) = (v50 << 10) ^ (*(_DWORD *)(a2 + 184) ^ (v50 << 10)) & 0xFFFFFBFF;
          v51 = RIMGetTouhpadClickForceSensitivityCaps(a3, 0LL);
          *(_DWORD *)(a2 + 184) = (v51 << 11) ^ (*(_DWORD *)(a2 + 184) ^ (v51 << 11)) & 0xFFFFF7FF;
          LODWORD(v79) = 0;
          RIMGetButtonsSupported(a3);
          v37 = *(_DWORD *)(a2 + 184) & 0xFFFF8FFF | ((v79 & 1) << 12);
          *(_DWORD *)(a2 + 184) = v37;
        }
      }
    }
    else if ( (_WORD)v37 != 5 || v36 == -1073741808 )
    {
LABEL_49:
      v39 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v40 = v38;
      }
      PreparsedDataa = v40;
      v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v41 = a4[1];
        v42 = *a4;
        LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v43 = W32GetUserSessionState(v39);
        LODWORD(v72) = v42;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          PreparsedDataa,
          v76,
          *(_QWORD *)(v43 + 19392),
          3u,
          1u,
          0x3Cu,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v72,
          v41);
        v38 = 0LL;
      }
      v44 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v45 = v38;
      }
      PreparsedDatab = v45;
      v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v46 = *a4;
        v47 = a4[1];
        LOBYTE(v44) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v48 = W32GetUserSessionState(v44);
        LODWORD(v73) = v46;
        LODWORD(v72) = v47;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          PreparsedDatab,
          v77,
          *(_QWORD *)(v48 + 19392),
          4u,
          1u,
          0x3Du,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v72,
          v73);
        v38 = 0LL;
      }
      *(_QWORD *)(v20 + 16) = v38;
      *(_QWORD *)(a2 + 440) = v38;
      RIMFreeHidDesc((PVOID)v20);
      v49 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v69 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v70) = v68;
        LOBYTE(v71) = v49;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v71,
          v70,
          *(_QWORD *)(v69 + 19392),
          4,
          1,
          62,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          0);
      }
      return 0LL;
    }
    EtwTracePointerDeviceArrivalStop(v37);
    LOBYTE(v38) = 0;
  }
  else
  {
    v52 = *((_OWORD *)a4 + 1);
    v81[0] = *(_OWORD *)a4;
    v53 = *((_OWORD *)a4 + 2);
    v81[1] = v52;
    v54 = *((_OWORD *)a4 + 3);
    v81[2] = v53;
    v81[3] = v54;
    LOBYTE(v55) = RIMIsInteractiveCtrl(v81);
    if ( v55 )
    {
      *(_DWORD *)(a2 + 184) |= 0x100u;
    }
    else
    {
      PreparsedDatac = *a4;
      v58 = *(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v57, v56) + 48)
                                                           + 4688LL);
      if ( v58
        && v58(v60, v59, 0LL) >= 0
        && (v61 = (unsigned int)InkProcessorIsInkDevice(v75, PreparsedDatac, a5 + 6), LOBYTE(v38) = 0, v61) )
      {
        *(_DWORD *)(a2 + 184) |= 0x200u;
      }
      else if ( ((unsigned int)RimDeviceTypeToRimInputType(a2, *(_DWORD *)(a2 + 48)) & *(_DWORD *)(a1 + 84)) == 0
             || *(_DWORD *)(a1 + 88) != (_DWORD)v38 && (*(_DWORD *)(a2 + 168) & 0x10000) == 0 )
      {
        goto LABEL_49;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v62 = v38;
  }
  v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v64 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v65) = v63;
    LOBYTE(v66) = v62;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v66,
      v65,
      *(_QWORD *)(v64 + 19392),
      4,
      1,
      59,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      v20);
  }
  return v20;
}
