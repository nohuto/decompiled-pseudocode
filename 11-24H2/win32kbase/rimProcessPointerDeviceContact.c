/*
 * XREFs of rimProcessPointerDeviceContact @ 0x140181B78
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimPopulateContactFrameData @ 0x1400AD6BC (rimPopulateContactFrameData.c)
 *     RIMAbIsDeviceArbitrationEnabled @ 0x1400C3910 (RIMAbIsDeviceArbitrationEnabled.c)
 *     RIMCmIsContactSuppressed @ 0x1400D975C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1401057F8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x14010A94C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011657C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMCmShouldDeliverSuppressedContact @ 0x140120244 (RIMCmShouldDeliverSuppressedContact.c)
 *     RIMAddToActiveDevices @ 0x14017C830 (RIMAddToActiveDevices.c)
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x140181830 (rimFindOrCreateActiveContact.c)
 *     RIMCmDeactivateContact @ 0x1401822F4 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14018250C (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmResetContactFrameState @ 0x140182558 (RIMCmResetContactFrameState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmMarkSuppressedContactForDelivery @ 0x1401F1C68 (RIMCmMarkSuppressedContactForDelivery.c)
 *     RIMCmShouldDeliverSuppressedContactEndState @ 0x1401F1CF0 (RIMCmShouldDeliverSuppressedContactEndState.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        struct RawInputManagerObject *a1,
        __int64 a2,
        CHAR *a3,
        ULONG a4,
        USHORT a5,
        int a6,
        _DWORD *a7,
        int *a8)
{
  __int64 v8; // rax
  bool v9; // bl
  __int64 v10; // r13
  struct _HIDP_PREPARSED_DATA *v13; // r14
  bool v15; // si
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  CHAR *v19; // rsi
  USHORT v20; // bx
  CHAR *v21; // r8
  __int64 active; // r14
  bool v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  char v28; // si
  int v29; // eax
  __int64 v30; // rcx
  char v31; // r15
  char v32; // di
  bool v33; // si
  int v34; // ebx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  bool v38; // di
  bool v39; // si
  int v40; // ebx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  char v44; // bl
  bool v45; // di
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  int v49; // ebx
  PalmTelemetry *v50; // rcx
  __int64 QuadPart; // rcx
  int IsContactSuppressed; // r9d
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // ebx
  char v56; // r12
  __int64 v57; // rax
  int v58; // ecx
  __int64 result; // rax
  char v60; // bl
  bool v61; // di
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  int v65; // [rsp+28h] [rbp-71h]
  char v66; // [rsp+70h] [rbp-29h]
  int v67; // [rsp+74h] [rbp-25h] BYREF
  int v68; // [rsp+78h] [rbp-21h] BYREF
  int v69; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v70; // [rsp+80h] [rbp-19h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-11h]
  __int64 v72[8]; // [rsp+90h] [rbp-9h] BYREF
  int v73; // [rsp+E8h] [rbp+4Fh] BYREF
  CHAR *v74; // [rsp+F0h] [rbp+57h]

  v74 = a3;
  v8 = *(_QWORD *)(a2 + 440);
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 456);
  v73 = 0;
  v70 = 0;
  v13 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v69 = 0;
  v68 = 0;
  v67 = 0;
  v72[0] = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
    v9 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(0LL);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      20,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  v19 = v74;
  v20 = a5;
  v21 = v74;
  *a7 = 0;
  *a8 = 0;
  active = rimFindOrCreateActiveContact(v10, v13, v21, a4, v20, &v73);
  if ( !active )
  {
    v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 19392),
        4,
        1,
        21,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v28 = 1;
    goto LABEL_87;
  }
  if ( v73 )
  {
    if ( *(_DWORD *)(v10 + 1016) == 1 )
      RIMAddToActiveDevices(a1, v10);
  }
  else if ( (*(_DWORD *)(active + 2364) & 2) != 0 )
  {
    v38 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = *(_DWORD *)active;
      v41 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v42) = v39;
      LOBYTE(v43) = v38;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 19392),
        4,
        1,
        22,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v40);
    }
    v28 = 1;
LABEL_29:
    if ( !v73 )
    {
      RIMCmResetContactFrameState(active);
      goto LABEL_87;
    }
    goto LABEL_30;
  }
  v29 = rimPopulateContactFrameData((__int64)a1, a2, v19, a4, v20, a6, active, a7, &v70, &v69, &v68, &v67, v72);
  v31 = 0;
  v66 = v29;
  v28 = v29;
  if ( v29 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v30 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v30 & 1) == 0)
      || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v32 = 0;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = *(_DWORD *)active;
      v35 = W32GetUserSessionState(v30);
      LOBYTE(v36) = v33;
      LOBYTE(v37) = v32;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 19392),
        4,
        1,
        23,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v34);
    }
    v28 = v66;
    goto LABEL_29;
  }
  if ( *a7 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v44 = 0;
    }
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v46 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 19392),
        4,
        1,
        24,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    goto LABEL_82;
  }
  v49 = v73;
  if ( v73 )
  {
    *(_DWORD *)(active + 64) = *(_DWORD *)(active + 2496);
    *(_QWORD *)(active + 72) = *(_QWORD *)(active + 2512);
    *(_QWORD *)(active + 80) = *(_QWORD *)(active + 2472);
  }
  v50 = (PalmTelemetry *)*((_QWORD *)a1 + 131);
  if ( v50 )
    PalmTelemetry::Update(v50, (struct tagHID_POINTER_DEVICE_INFO *)v10, (struct tagHPD_CONTACT *)active, v49);
  rimApplyPointerDevicePolicies(v10, active, v49, v70, v69, v68, v67, v72[0]);
  if ( (*(_DWORD *)(active + 32) & 0x20) != 0 )
  {
    if ( (*((_DWORD *)a1 + 21) & 4) == 0 )
    {
      v70 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 402LL);
    }
    QuadPart = PerformanceCounter.QuadPart;
    *((LARGE_INTEGER *)a1 + 100) = PerformanceCounter;
  }
  else
  {
    QuadPart = PerformanceCounter.QuadPart;
  }
  *(_QWORD *)(active + 88) = *(_QWORD *)(active + 2472);
  if ( !*(_QWORD *)(active + 56) && (*(_DWORD *)(active + 2684) & 4) == 0 && (*(_DWORD *)(active + 2444) & 4) != 0 )
    *(_QWORD *)(active + 56) = QuadPart;
  if ( !RIMAbIsDeviceArbitrationEnabled(QuadPart) && (*(_DWORD *)(active + 8) & 1) != 0 )
  {
    v70 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 426LL);
  }
  IsContactSuppressed = RIMCmIsContactSuppressed(active);
  if ( IsContactSuppressed
    && (RIMCmShouldDeliverSuppressedContact(v10, active)
     || (unsigned int)RIMCmShouldDeliverSuppressedContactEndState(v54, v53)) )
  {
    v55 = 1;
    goto LABEL_70;
  }
  v55 = 0;
  if ( !IsContactSuppressed
    || (unsigned int)RIMCmIsContactDeliveringPointerData(active)
    || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(active) )
  {
LABEL_70:
    *(_DWORD *)(active + 2364) |= 1u;
    if ( v55 )
      RIMCmMarkSuppressedContactForDelivery(active);
    goto LABEL_82;
  }
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    v31 = 1;
  }
  v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v57 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_dDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v56,
      *(_QWORD *)(v57 + 19392),
      4u,
      v65,
      0x19u,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    v28 = v66;
  }
LABEL_82:
  *a8 = v73;
  if ( *a7 )
  {
LABEL_30:
    RIMCmDeactivateContact(v10, active);
    goto LABEL_87;
  }
  *(LARGE_INTEGER *)(active + 48) = PerformanceCounter;
  *(_DWORD *)(active + 2352) = *(_DWORD *)(active + 2444);
  v58 = *(_DWORD *)(v10 + 24);
  if ( (unsigned int)(v58 - 1) > 3 )
  {
    if ( (unsigned int)(v58 - 5) <= 1 )
      *(_DWORD *)(active + 2360) = *(_DWORD *)(active + 2528);
  }
  else
  {
    *(_DWORD *)(active + 2356) = *(_DWORD *)(active + 2528);
  }
LABEL_87:
  result = (__int64)&WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 1) == 0)
    || (v60 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v60 = 0;
  }
  v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v60 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v62 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v63) = v61;
    LOBYTE(v64) = v60;
    return WPP_RECORDER_AND_TRACE_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v64,
             v63,
             *(_QWORD *)(v62 + 19392),
             4,
             1,
             26,
             (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
             v28);
  }
  return result;
}
