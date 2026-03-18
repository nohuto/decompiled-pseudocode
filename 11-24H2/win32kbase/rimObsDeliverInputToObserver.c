/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1401EFE74
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x14005BBE8 (rimObsDeliverToExclusiveObservers.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1400BCD88 (rimObsDeliverToNonExclusiveObservers.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x14019B6FC (rimObsCheckForExistingDeviceHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DeliverInputToObserver@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURawInputManagerInputObserverObject@@@Z @ 0x14019EB64 (-DeliverInputToObserver@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURawInputManagerInputObserverOb.c)
 *     rimObsCopyMessage @ 0x1401EFCE0 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1401F08B0 (rimObsPushInputMessage.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(struct RIMDEV *a1, struct RawInputManagerInputObserverObject *a2)
{
  char v4; // r12
  char v5; // bl
  char v6; // di
  __int64 UserSessionState; // rax
  char v8; // bl
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // edi
  __int64 v14; // rax
  struct RawInputManagerInputObserverObject *v15; // r14
  char v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  bool v21; // r13
  char v22; // bl
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  struct RawInputManagerInputObserverObject **v26; // rdx
  char v27; // bl
  bool v28; // r14
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  bool v32; // cf
  char v33; // bl
  bool v34; // r14
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  int v38; // edx
  __int64 v39; // r12
  int v40; // edx
  char *v41; // rax
  char v42; // bl
  bool v43; // di
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  void **v47; // r15
  char v48; // di
  char v49; // r14
  int v50; // ebx
  __int64 v51; // rax
  unsigned int v52; // r9d
  int v53; // edx
  char v54; // bl
  bool v55; // r14
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  char v59; // bl
  bool v60; // r14
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  void *v64; // rcx
  char v65; // bl
  bool v66; // di
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  char v70; // bl
  bool v71; // r14
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  char v75; // bl
  bool v76; // si
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  __int64 v81; // [rsp+40h] [rbp-49h]
  __int64 v82; // [rsp+48h] [rbp-41h]
  __int64 v83; // [rsp+50h] [rbp-39h] BYREF
  HANDLE v84; // [rsp+58h] [rbp-31h]
  __int64 v85; // [rsp+60h] [rbp-29h]
  __int64 v86; // [rsp+68h] [rbp-21h]
  __int64 v87; // [rsp+70h] [rbp-19h]
  char *v88; // [rsp+78h] [rbp-11h]
  __int64 v89; // [rsp+80h] [rbp-9h] BYREF
  int v90; // [rsp+88h] [rbp-1h]
  int v91; // [rsp+8Ch] [rbp+3h]
  __int128 v92; // [rsp+90h] [rbp+7h]
  __int128 v93; // [rsp+A0h] [rbp+17h]
  HANDLE Handle; // [rsp+F8h] [rbp+6Fh] BYREF

  v4 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 69400),
      4u,
      1u,
      0x14u,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1,
      a2);
  }
  InputTraceLogging::RIM::DeliverInputToObserver(a1, a2);
  RIMLockExclusive((__int64)a2 + 176);
  Handle = rimObsCheckForExistingDeviceHandle((__int64)a2, *((PVOID *)a1 + 4));
  if ( Handle == (HANDLE)-1LL )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 69400),
        4,
        1,
        21,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    v13 = ObOpenObjectByPointer(*((PVOID *)a1 + 4), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
    if ( v13 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
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
          3,
          1,
          24,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
    }
    else
    {
      v14 = Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x65684F52u);
      v15 = (struct RawInputManagerInputObserverObject *)v14;
      if ( !v14 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v16 = 0;
        }
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v16;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(v18 + 69400),
            2,
            1,
            22,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
        }
        v13 = -1073741670;
        ObCloseHandle(Handle, *((_BYTE *)a2 + 72));
        goto LABEL_112;
      }
      *(_QWORD *)(v14 + 16) = Handle;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = (char)Handle;
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v24) = v21;
        LOBYTE(v25) = v4;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 69400),
          4,
          1,
          23,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v22);
      }
      v26 = (struct RawInputManagerInputObserverObject **)*((_QWORD *)a2 + 17);
      if ( *v26 != (struct RawInputManagerInputObserverObject *)((char *)a2 + 128) )
        __fastfail(3u);
      *(_QWORD *)v15 = (char *)a2 + 128;
      *((_QWORD *)v15 + 1) = v26;
      *v26 = v15;
      *((_QWORD *)a2 + 17) = v15;
    }
    if ( v13 < 0 )
      goto LABEL_112;
  }
  v32 = *((_DWORD *)a2 + 26) < 0x30u;
  HIDWORD(v83) = 0;
  HIDWORD(v85) = 0;
  HIDWORD(v87) = 0;
  if ( v32 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 515);
  v13 = *((_DWORD *)a1 + 60);
  if ( v13 >= 0 )
  {
    if ( *((_QWORD *)a1 + 31) > 0xFFFFFFCFuLL )
    {
      v13 = -1073741675;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v33 = 0;
      }
      v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v36) = v34;
        LOBYTE(v37) = v33;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v37,
          v36,
          *(_QWORD *)(v35 + 69400),
          3,
          1,
          25,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      goto LABEL_112;
    }
    v38 = *((_DWORD *)a1 + 12);
    v39 = *((_QWORD *)a1 + 31) + 48LL;
    v86 = *((_QWORD *)a1 + 31);
    v84 = Handle;
    LODWORD(v83) = 0;
    LODWORD(v85) = v13;
    LODWORD(v87) = v38;
    v88 = 0LL;
    if ( v38 )
    {
      v40 = v38 - 1;
      if ( v40 )
      {
        if ( v40 == 1 )
          v88 = *(char **)(*((_QWORD *)a1 + 55) + 24LL);
        else
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 563);
LABEL_63:
        if ( *((_DWORD *)a2 + 22) == 1 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v42 = 0;
          }
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
              *(_QWORD *)(v44 + 69400),
              4,
              1,
              27,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          v47 = (void **)*((_QWORD *)a2 + 12);
          v13 = rimObsCopyMessage((int *)&v83, *((_DWORD *)a2 + 18), v47, *((_DWORD *)a2 + 26));
          if ( v13 == -1073741789 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v48 = 0;
            }
            v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v50 = *((_DWORD *)a2 + 26);
              v51 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LODWORD(v82) = v39;
              LODWORD(v81) = v50;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v48,
                v49,
                *(_QWORD *)(v51 + 69400),
                3u,
                1u,
                0x1Cu,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                v81,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87,
                v88);
            }
            v52 = *((_DWORD *)a2 + 26);
            v53 = *((_DWORD *)a2 + 18);
            v89 = 1LL;
            v90 = 0;
            v91 = v39;
            v92 = 0LL;
            v93 = 0LL;
            rimObsCopyMessage((int *)&v89, v53, v47, v52);
            v13 = rimObsPushInputMessage(a2, &v83);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v54 = 0;
            }
            v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v56 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v57) = v55;
              LOBYTE(v58) = v54;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v58,
                v57,
                *(_QWORD *)(v56 + 69400),
                4,
                1,
                29,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
          }
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v59 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v59 = 0;
          }
          v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v59 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v61 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v62) = v60;
            LOBYTE(v63) = v59;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v63,
              v62,
              *(_QWORD *)(v61 + 69400),
              4,
              1,
              30,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          v64 = (void *)*((_QWORD *)a2 + 10);
          *((_DWORD *)a2 + 22) = 0;
          ZwSetEvent(v64, 0LL);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v65 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v65 = 0;
          }
          v66 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v67 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v68) = v66;
            LOBYTE(v69) = v65;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v69,
              v68,
              *(_QWORD *)(v67 + 69400),
              4,
              1,
              31,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          v13 = rimObsPushInputMessage(a2, &v83);
          if ( v13 == -1073741756 )
            v13 = 0;
        }
        goto LABEL_112;
      }
      v41 = (char *)a1 + 480;
    }
    else
    {
      v41 = (char *)a1 + 452;
    }
    v88 = v41;
    goto LABEL_63;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v70 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v70 = 0;
  }
  v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v72 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v73) = v71;
    LOBYTE(v74) = v70;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v74,
      v73,
      *(_QWORD *)(v72 + 69400),
      3,
      1,
      26,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v13);
  }
LABEL_112:
  RIMUnlockExclusive((__int64)a2 + 176);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v75 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v75 = 0;
  }
  v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v77 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v78) = v76;
    LOBYTE(v79) = v75;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v79,
      v78,
      *(_QWORD *)(v77 + 69400),
      4,
      1,
      32,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v13);
  }
  return (unsigned int)v13;
}
