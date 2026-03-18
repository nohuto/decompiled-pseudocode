/*
 * XREFs of RIMCreateHidDesc @ 0x1C007EF3C
 * Callers:
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005754 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C00365D0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006F118 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006FBD8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C007FC8C (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1C007FD34 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C007FE10 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     RIMHidGetVendorAndProductID @ 0x1C007FE3C (RIMHidGetVendorAndProductID.c)
 *     RIMHidGetUsageAndPage @ 0x1C007FF40 (RIMHidGetUsageAndPage.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0080044 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     IsProcessHidRawInputSupported @ 0x1C0080084 (IsProcessHidRawInputSupported.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     RIMAllocateHidConfigDesc @ 0x1C017ECB8 (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateHidDesc @ 0x1C017F534 (RIMAllocateHidDesc.c)
 *     RIMFreeHidDesc @ 0x1C0181074 (RIMFreeHidDesc.c)
 *     RIMHidGetCaps @ 0x1C0181530 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1C0181BB0 (RIMHidGetPreparsedData.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1C0184CEC (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     rimHidP_GetCollectionDescription @ 0x1C01850E8 (rimHidP_GetCollectionDescription.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C01913D4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0191A18 (RIMSearchHidTLCInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C019395C (RIMIDECreateHIDDesc.c)
 */

void *__fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  __int64 v7; // r8
  void *v8; // r9
  int v9; // edx
  int v10; // r8d
  int v11; // r14d
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // ecx
  PDEVICE_OBJECT v18; // rcx
  PDEVICE_OBJECT *v19; // rdx
  _UNKNOWN **v20; // r8
  PDEVICE_OBJECT v21; // rcx
  PDEVICE_OBJECT *v22; // rdx
  __int16 v23; // ax
  __int64 PreparsedData; // rax
  char *v25; // r12
  PDEVICE_OBJECT *v26; // rdx
  _UNKNOWN **v27; // r8
  int Caps; // eax
  int v29; // edx
  char v30; // dl
  int v31; // edx
  int v32; // r8d
  int v33; // r8d
  PDEVICE_OBJECT *v34; // rdx
  __int64 v35; // rax
  int v36; // r8d
  PDEVICE_OBJECT *v37; // rdx
  int v38; // eax
  int v39; // edx
  char v40; // dl
  int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdi
  int v48; // r9d
  PDEVICE_OBJECT *v49; // rdx
  _UNKNOWN **v50; // r8
  int v51; // edx
  int v52; // r8d
  char v53; // dl
  int v55; // [rsp+20h] [rbp-B9h]
  int v56; // [rsp+28h] [rbp-B1h]
  __int16 v57; // [rsp+30h] [rbp-A9h]
  char v58; // [rsp+40h] [rbp-99h]
  __int64 v59; // [rsp+48h] [rbp-91h]
  char v60; // [rsp+48h] [rbp-91h]
  int v61; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int16 v62; // [rsp+64h] [rbp-75h] BYREF
  _WORD v63[2]; // [rsp+68h] [rbp-71h] BYREF
  _WORD v64[2]; // [rsp+6Ch] [rbp-6Dh] BYREF
  PVOID v65; // [rsp+70h] [rbp-69h] BYREF
  PVOID Object; // [rsp+78h] [rbp-61h] BYREF
  void *v67; // [rsp+80h] [rbp-59h]
  HANDLE Handle; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v69[8]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v70; // [rsp+98h] [rbp-41h] BYREF
  int v71; // [rsp+A0h] [rbp-39h]
  _WORD v72[32]; // [rsp+B0h] [rbp-29h] BYREF

  Object = 0LL;
  v65 = 0LL;
  v67 = 0LL;
  memset(v72, 0, sizeof(v72));
  Handle = 0LL;
  v70 = 0LL;
  v71 = 0;
  if ( *(_BYTE *)(a2 + 48) != 2 )
  {
    v61 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  v8 = &WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids;
  LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      10,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    v62 = 0;
    v63[0] = 0;
    v64[0] = 0;
    LOWORD(v61) = 0;
    if ( (int)RIMHidGetUsageAndPage(a2, &v62, v63, v8) < 0 || (int)RIMHidGetVendorAndProductID(a2, v64, &v61) < 0 )
      return v67;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v9) = 0;
    }
    v11 = v62;
    v12 = v63[0];
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        (_DWORD)gRimLog,
        4,
        1,
        11,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v63[0],
        v62);
    }
    v61 = v12;
    DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v11, v12);
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, (unsigned __int16)v12, (unsigned __int16)v11) )
    {
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFCFFFF | 0x10000;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 1056) )
        return v67;
      v16 = IsProcessHidRawInputSupported();
      v17 = 0;
      if ( v16 >= 0 )
        v17 = 0x20000;
      *(_DWORD *)(a2 + 184) = v17 | *(_DWORD *)(a2 + 184) & 0xFFFDFFFF;
      if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(
                           *(_QWORD *)(a1 + 32),
                           (unsigned __int16)v12,
                           (unsigned __int16)v11) )
      {
        v18 = WPP_GLOBAL_Control;
        v19 = &WPP_GLOBAL_Control;
        LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v20 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v67;
        v60 = v11;
        v58 = v12;
        v57 = 12;
LABEL_34:
        WPP_RECORDER_AND_TRACE_SF_DD(
          v18->AttachedDevice,
          (_DWORD)v19,
          (_DWORD)v20,
          (_DWORD)gRimLog,
          4,
          1,
          v57,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          v58,
          v60);
        return v67;
      }
      if ( (_WORD)v12 != 13 || (_WORD)v11 != 15 )
      {
LABEL_40:
        if ( (*(_DWORD *)(a2 + 184) & 0x10000) != 0 || (_WORD)v12 != 1 )
        {
          if ( (_WORD)v12 == 13 )
          {
            if ( (_WORD)v11 == 14 )
            {
              if ( (*(_DWORD *)(a1 + 84) & 0x18) == 0 )
              {
                v21 = WPP_GLOBAL_Control;
                v22 = &WPP_GLOBAL_Control;
                LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                v15 = (__int64)&WPP_RECORDER_INITIALIZED;
                LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return v67;
                v23 = 18;
LABEL_66:
                WPP_RECORDER_AND_TRACE_SF_DD(
                  v21->AttachedDevice,
                  (_DWORD)v22,
                  v15,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  v23,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v12,
                  v11);
                return v67;
              }
              PreparsedData = RIMHidGetPreparsedData(a2, (int)&Handle, (int)&Object, (int)&v65, &v70);
              v25 = (char *)PreparsedData;
              if ( !PreparsedData )
              {
                v26 = &WPP_GLOBAL_Control;
                LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                v27 = &WPP_RECORDER_INITIALIZED;
                if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    (_DWORD)v26,
                    (_DWORD)v27,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    14,
                    (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                    a2);
                }
                goto LABEL_178;
              }
              Caps = RIMHidGetCaps(a1, v65, PreparsedData, v72);
              if ( Caps != 1114112 )
              {
                v30 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v59) = Caps;
                  WPP_RECORDER_AND_TRACE_SF_qd(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v30,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    (__int64)gRimLog,
                    3u,
                    1u,
                    0xFu,
                    (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                    v65,
                    v59);
                }
                goto LABEL_158;
              }
              LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_DD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v29,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (_DWORD)gRimLog,
                  4,
                  1,
                  16,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v72[2],
                  v72[4]);
              v67 = (void *)RIMAllocateHidConfigDesc(a1, a2, v65, v25, v72, &v70);
              if ( !v67 )
              {
                LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_DD(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v31,
                    v32,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    17,
                    (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                    v61,
                    v11);
                }
                goto LABEL_158;
              }
              goto LABEL_193;
            }
LABEL_115:
            if ( qword_1C0296328
              && (int)qword_1C0296328(v14, v13, v15, 1LL) >= 0
              && qword_1C0296330
              && (unsigned int)qword_1C0296330((unsigned __int16)v12, (unsigned __int16)v11, v64, 0LL)
              && (*(_DWORD *)(a1 + 84) & 4) == 0 )
            {
              v34 = &WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v34) = 0;
              }
              if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v34,
                  v33,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  20,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
              }
              return v67;
            }
            v35 = RIMHidGetPreparsedData(a2, (int)&Handle, (int)&Object, (int)&v65, &v70);
            v25 = (char *)v35;
            if ( !v35 )
            {
              v37 = &WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v37) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v37) = 0;
              }
              if ( (_BYTE)v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_q(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v37,
                  v36,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  21,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  a2);
              }
              goto LABEL_178;
            }
            v38 = RIMHidGetCaps(a1, v65, v35, v72);
            if ( v38 != 1114112 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                v40 = 0;
              }
              if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v59) = v38;
                WPP_RECORDER_AND_TRACE_SF_qd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v40,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)gRimLog,
                  3u,
                  1u,
                  0x16u,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v65,
                  v59);
              }
LABEL_158:
              Win32FreePool(v25);
LABEL_178:
              if ( Object )
                ObfDereferenceObject(Object);
              if ( Handle )
                ZwClose(Handle);
              if ( v65 )
                ObfDereferenceObject(v65);
              return v67;
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v39) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v39) = 0;
            }
            if ( (_BYTE)v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v41 = v72[2];
              LOBYTE(v41) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_DD(
                WPP_GLOBAL_Control->AttachedDevice,
                v39,
                v41,
                (_DWORD)gRimLog,
                4,
                1,
                23,
                (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                v72[2],
                v72[4]);
            }
            v67 = (void *)RIMAllocateHidDesc(
                            a1,
                            a2,
                            (_DWORD)v25,
                            (unsigned int)v72,
                            (__int64)&v70,
                            (__int64)v65,
                            (__int64)Object);
            if ( !v67 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v42) = 0;
              }
              if ( (_BYTE)v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_DD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v42,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  24,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v12,
                  v11);
              goto LABEL_158;
            }
            v46 = SGDGetUserSessionState(v43, v42, v44, v45);
            RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
              (RIMLOCKExclusiveIfNeeded *)v69,
              (struct _KTHREAD **)(v46 + 288));
            v47 = RIMSearchHidTLCInfo((unsigned __int16)v12, (unsigned __int16)v11);
            if ( v47 )
            {
              v49 = &WPP_GLOBAL_Control;
              LOBYTE(v49) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              v50 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_DDq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v49,
                  (_DWORD)v50,
                  v48,
                  v55,
                  v56,
                  25,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v12,
                  v11,
                  v47);
              }
            }
            else
            {
              v47 = RIMAllocateAndLinkHidTLCInfo((unsigned __int16)v12, (unsigned __int16)v11);
              if ( !v47 )
              {
                LOBYTE(v51) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                if ( (_BYTE)v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v51,
                    v52,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    26,
                    (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                    a1);
                }
                RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v69);
                RIMFreeHidDesc(v67);
                v67 = 0LL;
                goto LABEL_178;
              }
              v53 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v59) = v12;
                WPP_RECORDER_AND_TRACE_SF_qDD(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v53,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)gRimLog,
                  4u,
                  1u,
                  0x1Bu,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v47,
                  v59,
                  v11);
              }
            }
            ++*(_DWORD *)(v47 + 20);
            *(_QWORD *)(a2 + 464) = v47;
            RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v69);
LABEL_193:
            ObfDereferenceObject(v65);
            ObfDereferenceObject(Object);
            ZwClose(Handle);
            return v67;
          }
        }
        else if ( v11 == 1 || v11 == 2 || v11 == 6 || (v14 = (unsigned int)(v11 - 7), v11 == 7) || v11 == 128 )
        {
          v18 = WPP_GLOBAL_Control;
          v19 = &WPP_GLOBAL_Control;
          LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          v20 = &WPP_RECORDER_INITIALIZED;
          LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v67;
          v60 = v11;
          v58 = v12;
          v57 = 13;
          goto LABEL_34;
        }
        if ( (_WORD)v12 == 1 && (_WORD)v11 == 14 )
        {
          v15 = 16LL;
          if ( (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
          {
            v21 = WPP_GLOBAL_Control;
            v22 = &WPP_GLOBAL_Control;
            LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v67;
            v23 = 19;
            goto LABEL_66;
          }
        }
        goto LABEL_115;
      }
      *(_DWORD *)(a2 + 184) &= ~0x20000u;
    }
    *(_DWORD *)(a2 + 200) |= 0x40u;
    goto LABEL_40;
  }
  if ( *(_QWORD *)a3 && (int)rimHidP_GetCollectionDescription(*(_QWORD *)a3, *(unsigned int *)(a3 + 8), v7, a3 + 16) < 0 )
    return 0LL;
  else
    return (void *)RIMIDECreateHIDDesc(a1, a2, a3, v8);
}
