/*
 * XREFs of RIMCreateHidDesc @ 0x1401DBCC8
 * Callers:
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     RIMSearchHidTLCInfo @ 0x1400C9484 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     IsProcessHidRawInputSupported @ 0x1400C9610 (IsProcessHidRawInputSupported.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1400C9648 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1400C970C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E67B0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     RIMHidGetUsageAndPage @ 0x140115F54 (RIMHidGetUsageAndPage.c)
 *     RIMHidGetVendorAndProductID @ 0x14011A970 (RIMHidGetVendorAndProductID.c)
 *     RIMAllocateHidConfigDesc @ 0x140127788 (RIMAllocateHidConfigDesc.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x14012D12C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401366D8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     InkProcessorIsInkDevice @ 0x14013AF58 (InkProcessorIsInkDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x140146DF8 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     RIMFreeHidDesc @ 0x1401DD0C4 (RIMFreeHidDesc.c)
 *     RIMHidGetCaps @ 0x1401DD328 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1401DD6CC (RIMHidGetPreparsedData.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E3074 (RIMAllocateAndLinkHidTLCInfo.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

PVOID __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // si
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // di
  int v12; // r14d
  int v13; // esi
  char v14; // r12
  __int64 v15; // rax
  char v16; // di
  char v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // bl
  bool v22; // di
  __int64 v23; // rax
  char v24; // r8
  __int64 v25; // r9
  char v26; // di
  bool v27; // si
  __int64 v28; // rax
  __int64 PreparsedData; // rax
  char *v30; // r12
  bool v31; // si
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // rcx
  int Caps; // r14d
  char v37; // di
  char v38; // si
  PVOID v39; // rbx
  __int64 v40; // r9
  char v41; // si
  char v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // bl
  char v46; // si
  __int64 v47; // rax
  int (*v48)(void); // rax
  char v49; // bl
  bool v50; // di
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // r13d
  char v57; // si
  PVOID v58; // rbx
  __int64 v59; // r9
  char v60; // r13
  __int64 v61; // rax
  __int64 v62; // rcx
  char v63; // bl
  char v64; // di
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 *v68; // rdi
  char v69; // r15
  char v70; // r12
  __int64 v71; // rax
  char v72; // bl
  bool v73; // di
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  char v77; // r15
  char v78; // r12
  __int64 v79; // rax
  unsigned __int8 v81; // [rsp+20h] [rbp-B9h]
  PVOID v82; // [rsp+20h] [rbp-B9h]
  __int64 v83; // [rsp+28h] [rbp-B1h]
  unsigned __int16 v84; // [rsp+30h] [rbp-A9h]
  __int16 v85; // [rsp+30h] [rbp-A9h]
  __int64 v86; // [rsp+40h] [rbp-99h]
  char v87; // [rsp+40h] [rbp-99h]
  __int64 v88; // [rsp+48h] [rbp-91h]
  _WORD v89[2]; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int16 v90; // [rsp+64h] [rbp-75h] BYREF
  __int16 v91; // [rsp+68h] [rbp-71h] BYREF
  PVOID v92; // [rsp+70h] [rbp-69h]
  int v93; // [rsp+78h] [rbp-61h] BYREF
  PVOID Object; // [rsp+80h] [rbp-59h]
  PVOID Buffer; // [rsp+88h] [rbp-51h]
  HANDLE Handle; // [rsp+90h] [rbp-49h]
  __int64 v97; // [rsp+98h] [rbp-41h] BYREF
  int v98; // [rsp+A0h] [rbp-39h]
  unsigned __int16 v99[32]; // [rsp+B0h] [rbp-29h] BYREF

  Object = 0LL;
  v92 = 0LL;
  Buffer = 0LL;
  memset(v99, 0, sizeof(v99));
  Handle = 0LL;
  v97 = 0LL;
  v98 = 0;
  if ( *(_DWORD *)(a2 + 48) != 2 )
  {
    v93 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      10,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) == 0 )
  {
    v89[0] = 0;
    v90 = 0;
    v91 = 0;
    LOWORD(v93) = 0;
    if ( (int)RIMHidGetUsageAndPage(a2, v89, &v90) < 0 || (int)RIMHidGetVendorAndProductID(a2, &v91, &v93) < 0 )
      return Buffer;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v11 = 0;
    }
    v12 = v89[0];
    v13 = v90;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v14,
        *(_QWORD *)(v15 + 19392),
        4u,
        1u,
        0xBu,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v13,
        v12);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v88) = v13;
      LODWORD(v86) = v12;
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v17,
        *(_QWORD *)(v18 + 19392),
        3u,
        1u,
        0xCu,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v86,
        v88);
    }
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v13, v12) )
    {
      *(_DWORD *)(a2 + 168) = *(_DWORD *)(a2 + 168) & 0xFFFCFFFF | 0x10000;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 1056) )
        return Buffer;
      *(_DWORD *)(a2 + 168) = (((int)IsProcessHidRawInputSupported(v20, v19) >= 0) << 17) | *(_DWORD *)(a2 + 168) & 0xFFFDFFFF;
      if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(*(_QWORD *)(a1 + 32), v13, v12) )
      {
        v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return Buffer;
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v88) = v12;
        v24 = v22;
        LODWORD(v86) = v13;
        v25 = *(_QWORD *)(v23 + 19392);
        v84 = 13;
        v81 = 4;
        goto LABEL_39;
      }
      if ( (_WORD)v13 != 13 || (_WORD)v12 != 15 )
      {
LABEL_44:
        v26 = 1;
        if ( (*(_DWORD *)(a2 + 168) & 0x10000) != 0 || (_WORD)v13 != 1 )
        {
          if ( (_WORD)v13 == 13 )
          {
            if ( (_WORD)v12 == 14 )
            {
              if ( (*(_DWORD *)(a1 + 84) & 0x18) == 0 )
              {
                v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
                v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( !v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return Buffer;
                v28 = W32GetUserSessionState(WPP_GLOBAL_Control);
                LODWORD(v88) = 14;
                LODWORD(v86) = 13;
                v84 = 19;
LABEL_71:
                v25 = *(_QWORD *)(v28 + 19392);
                v81 = 3;
LABEL_59:
                v24 = v27;
LABEL_39:
                WPP_RECORDER_AND_TRACE_SF_dD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v21,
                  v24,
                  v25,
                  v81,
                  1u,
                  v84,
                  (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                  v86,
                  v88);
                return Buffer;
              }
              PreparsedData = RIMHidGetPreparsedData((struct RIMDEV *)a2, &v97);
              v30 = (char *)PreparsedData;
              if ( !PreparsedData )
              {
                v26 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
                v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( !v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_181;
                v87 = a2;
                v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
                v85 = 15;
                goto LABEL_81;
              }
              Caps = RIMHidGetCaps(a1, v92, PreparsedData, v99);
              if ( Caps != 1114112 )
              {
                v37 = 0;
                if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
                {
                  v35 = *((unsigned int *)WPP_GLOBAL_Control + 11);
                  if ( (v35 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
                    v37 = 1;
                }
                v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v39 = v92;
                  LODWORD(v88) = Caps;
                  v40 = *(_QWORD *)(W32GetUserSessionState(v35) + 19392);
                  WPP_RECORDER_AND_TRACE_SF_qd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v37,
                    v38,
                    v40,
                    3u,
                    1u,
                    0x10u,
                    (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                    v39,
                    v88);
                }
                goto LABEL_163;
              }
              v41 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
              v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
                LODWORD(v88) = v99[4];
                LODWORD(v86) = v99[2];
                WPP_RECORDER_AND_TRACE_SF_dD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v41,
                  v42,
                  *(_QWORD *)(v43 + 19392),
                  4u,
                  1u,
                  0x11u,
                  (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                  v86,
                  v88);
              }
              Buffer = (PVOID)RIMAllocateHidConfigDesc(a1, a2, (__int64)v92, (__int64)v30, v99, (__int64)&v97);
              if ( !Buffer )
              {
                v45 = 0;
                if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
                {
                  v44 = *((unsigned int *)WPP_GLOBAL_Control + 11);
                  if ( (v44 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
                    v45 = 1;
                }
                v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v47 = W32GetUserSessionState(v44);
                  LODWORD(v88) = 14;
                  LODWORD(v86) = 13;
                  WPP_RECORDER_AND_TRACE_SF_dD(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v45,
                    v46,
                    *(_QWORD *)(v47 + 19392),
                    3u,
                    1u,
                    0x12u,
                    (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                    v86,
                    v88);
                }
                goto LABEL_163;
              }
              goto LABEL_195;
            }
            goto LABEL_120;
          }
        }
        else if ( v12 == 1 || v12 == 2 || v12 == 6 || (v20 = (unsigned int)(v12 - 7), v12 == 7) || v12 == 128 )
        {
          v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return Buffer;
          LODWORD(v88) = v12;
          v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
          LODWORD(v86) = 1;
          v84 = 14;
          v81 = 4;
          goto LABEL_59;
        }
        if ( (_WORD)v13 != 1 )
          goto LABEL_121;
        if ( (_WORD)v12 == 14 )
        {
          v20 = 16LL;
          if ( (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
          {
            v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return Buffer;
            v28 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LODWORD(v88) = 14;
            LODWORD(v86) = 1;
            v84 = 20;
            goto LABEL_71;
          }
        }
LABEL_120:
        v26 = 1;
LABEL_121:
        v48 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20, v19) + 48) + 4688LL);
        if ( v48
          && v48() >= 0
          && (unsigned int)InkProcessorIsInkDevice((unsigned __int16)v13, (unsigned __int16)v12, (__int64)&v91)
          && (*(_DWORD *)(a1 + 84) & 4) == 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v49 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v49 = 0;
          }
          v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v51 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v52) = v50;
            LOBYTE(v53) = v49;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v53,
              v52,
              *(_QWORD *)(v51 + 19392),
              3,
              1,
              21,
              (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
          }
          return Buffer;
        }
        v54 = RIMHidGetPreparsedData((struct RIMDEV *)a2, &v97);
        v30 = (char *)v54;
        if ( !v54 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v26 = 0;
          }
          v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_181;
          v87 = a2;
          v85 = 22;
          v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
LABEL_81:
          LOBYTE(v33) = v31;
          LOBYTE(v32) = v26;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v33,
            v34,
            3,
            1,
            v85,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
            v87);
LABEL_181:
          if ( Object )
            ObfDereferenceObject(Object);
          if ( Handle )
            ZwClose(Handle);
          if ( v92 )
            ObfDereferenceObject(v92);
          return Buffer;
        }
        v56 = RIMHidGetCaps(a1, v92, v54, v99);
        if ( v56 != 1114112 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (v55 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v55 & 1) == 0)
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v26 = 0;
          }
          v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v58 = v92;
            LODWORD(v88) = v56;
            v59 = *(_QWORD *)(W32GetUserSessionState(v55) + 19392);
            WPP_RECORDER_AND_TRACE_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v26,
              v57,
              v59,
              3u,
              1u,
              0x17u,
              (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
              v58,
              v88);
          }
LABEL_163:
          GreDeleteFastMutex(v30);
          goto LABEL_181;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v26 = 0;
        }
        v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v61 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LODWORD(v88) = v99[4];
          LODWORD(v86) = v99[2];
          WPP_RECORDER_AND_TRACE_SF_dD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v26,
            v60,
            *(_QWORD *)(v61 + 19392),
            4u,
            1u,
            0x18u,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
            v86,
            v88);
        }
        Buffer = (PVOID)RIMAllocateHidDesc(
                          a1,
                          a2,
                          (struct _HIDP_PREPARSED_DATA *)v30,
                          v99,
                          (__int64)&v97,
                          (__int64)v92,
                          (__int64)Object);
        if ( !Buffer )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v63 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v63 = 0;
          }
          v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v63 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v65 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LODWORD(v88) = v12;
            LODWORD(v86) = v13;
            WPP_RECORDER_AND_TRACE_SF_dD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v63,
              v64,
              *(_QWORD *)(v65 + 19392),
              3u,
              1u,
              0x19u,
              (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
              v86,
              v88);
          }
          goto LABEL_163;
        }
        v66 = W32GetUserSessionState(v62);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v93,
          (struct RIMLOCK *)(v66 + 104));
        v68 = RIMSearchHidTLCInfo((unsigned __int16)v13, v12);
        if ( v68 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (v67 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v67 & 1) == 0)
            || (v69 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v69 = 0;
          }
          v70 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v69 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v71 = W32GetUserSessionState(v67);
            WPP_RECORDER_AND_TRACE_SF_DDq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v69,
              v70,
              *(_QWORD *)(v71 + 19392),
              (__int64)v82,
              v83,
              0x1Au,
              (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
          }
        }
        else
        {
          v68 = (__int64 *)RIMAllocateAndLinkHidTLCInfo((unsigned __int16)v13, (unsigned __int16)v12);
          if ( !v68 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v72 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v72 = 0;
            }
            v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v72 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v74 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v75) = v73;
              LOBYTE(v76) = v72;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v76,
                v75,
                *(_QWORD *)(v74 + 19392),
                3,
                1,
                27,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                a1);
            }
            RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v93);
            RIMFreeHidDesc(Buffer);
            Buffer = 0LL;
            goto LABEL_181;
          }
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v77 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v77 = 0;
          }
          v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v77 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v79 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LODWORD(v88) = v13;
            WPP_RECORDER_AND_TRACE_SF_qDD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v77,
              v78,
              *(_QWORD *)(v79 + 19392),
              4u,
              1u,
              0x1Cu,
              (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
              v68,
              v88,
              v12);
          }
        }
        ++*((_DWORD *)v68 + 5);
        *(_QWORD *)(a2 + 448) = v68;
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v93);
LABEL_195:
        ObfDereferenceObject(v92);
        ObfDereferenceObject(Object);
        ZwClose(Handle);
        return Buffer;
      }
      *(_DWORD *)(a2 + 168) &= ~0x20000u;
    }
    *(_DWORD *)(a2 + 184) |= 0x40u;
    goto LABEL_44;
  }
  if ( *(_QWORD *)a3
    && HidP_GetCollectionDescription(
         *(PHIDP_REPORT_DESCRIPTOR *)a3,
         *(_DWORD *)(a3 + 8),
         PagedPool,
         (PHIDP_DEVICE_DESC)(a3 + 24)) < 0 )
  {
    return 0LL;
  }
  else
  {
    return (PVOID)RIMIDECreateHIDDesc(a1, a2, a3);
  }
}
