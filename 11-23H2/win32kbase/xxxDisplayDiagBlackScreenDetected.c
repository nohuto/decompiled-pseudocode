/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1C0136AC0
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00ACC98 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C0012540 (xxxUserSetDisplayConfig.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@34444AEBU_tlgWrapperBinary@@4@Z @ 0x1C0135854 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C0135AAC (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1C0166E34 (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C0166F00 (DrvDxgkPollDisplayChildren.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(int a1, char a2, char a3, UUID *a4, int *a5)
{
  char v6; // r12
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int *v19; // r14
  UUID *p_Uuid; // rax
  UUID v21; // xmm6
  PEPROCESS ThreadProcess; // rax
  int ProcessImageFileName; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct tagTHREADINFO *v27; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct tagTHREADINFO *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // esi
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  struct tagTHREADINFO *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  UUID *v56; // rax
  UUID v57; // xmm6
  PEPROCESS v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  struct tagTHREADINFO *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 *v66; // rbx
  __int64 v67; // rax
  char *v68; // rbx
  __int64 v69; // rcx
  int v70; // r8d
  __int64 v71; // r9
  bool v73; // [rsp+78h] [rbp-88h] BYREF
  __int16 v74; // [rsp+7Ah] [rbp-86h] BYREF
  __int16 v75; // [rsp+7Ch] [rbp-84h] BYREF
  int v76; // [rsp+80h] [rbp-80h] BYREF
  int v77; // [rsp+84h] [rbp-7Ch] BYREF
  int v78; // [rsp+88h] [rbp-78h] BYREF
  int v79; // [rsp+8Ch] [rbp-74h] BYREF
  int v80; // [rsp+90h] [rbp-70h] BYREF
  int v81; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v82; // [rsp+98h] [rbp-68h] BYREF
  __int128 v83; // [rsp+A0h] [rbp-60h] BYREF
  void *v84[2]; // [rsp+B0h] [rbp-50h]
  char *v85; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v86; // [rsp+C8h] [rbp-38h]
  UUID v87; // [rsp+D0h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v89[10]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = a3;
  memset(v89, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v89[1]);
  v13 = 1;
  v89[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v89[3]) = 15;
  LOBYTE(v89[6]) = -1;
  LODWORD(v89[4]) = a1;
LABEL_2:
  v14 = 0;
  while ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    UserSessionSwitchLeaveCrit((__int64)v10, v9, v11, v12);
    KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
    v27 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v24, v25, v26);
    gptiCurrent = v27;
    if ( v27 )
    {
      *((_DWORD *)v27 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v10 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v29 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v30 = *v29;
                v29[2] = 0LL;
                if ( !*(_DWORD *)(v30 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                HMUnlockObject(*v29);
              }
              goto LABEL_2;
            }
          }
        }
      }
    }
  }
  v83 = 0LL;
  LOWORD(v83) = gProtocolType;
  *(_OWORD *)v84 = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    goto LABEL_72;
  v19 = a5;
  if ( a2 )
  {
    UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
    Uuid = 0LL;
    if ( !a4 && ExUuidCreate(&Uuid) < 0 )
      Uuid = 0LL;
    if ( a5 )
      v14 = *a5;
    p_Uuid = &Uuid;
    if ( a4 )
      p_Uuid = a4;
    v21 = *p_Uuid;
    if ( gptiForeground )
    {
      ThreadProcess = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
      ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
    }
    else
    {
      ProcessImageFileName = 0;
    }
    v87 = v21;
    DrvDxgkCheckDisplayState(a1, 1, ProcessImageFileName, (unsigned int)v89, (__int64)&v87, v14);
    xmmword_1C0297658 = *(_OWORD *)&v89[1];
    v34 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v31, v32, v33);
    v14 = 0;
    gptiCurrent = v34;
    if ( v34 )
    {
      *((_DWORD *)v34 + 387) = 1;
      v36 = PsGetCurrentProcessWin32Process(v35);
      if ( v36 )
      {
        if ( *(_QWORD *)v36
          && (*(_DWORD *)(v36 + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          v37 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( gpSharedUserCritDeferredUnlockListHead )
          {
            do
            {
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v37[2];
              v38 = *v37;
              v37[2] = 0LL;
              if ( !*(_DWORD *)(v38 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v37);
              v37 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            }
            while ( gpSharedUserCritDeferredUnlockListHead );
            v6 = a3;
          }
          v14 = 0;
        }
      }
    }
  }
  if ( !gProtocolType && v6 )
  {
    DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v83);
    UserSessionSwitchLeaveCrit(v40, v39, v41, v42);
    v82 = 0x1A00000000LL;
    v43 = DrvDxgkPollDisplayChildren(&v82);
    v47 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v44, v45, v46);
    gptiCurrent = v47;
    if ( v47 )
    {
      *((_DWORD *)v47 + 387) = 1;
      v49 = PsGetCurrentProcessWin32Process(v48);
      if ( v49 )
      {
        if ( *(_QWORD *)v49
          && (*(_DWORD *)(v49 + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          v50 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( gpSharedUserCritDeferredUnlockListHead )
          {
            do
            {
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v50[2];
              v51 = *v50;
              v50[2] = 0LL;
              if ( !*(_DWORD *)(v51 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v50);
              v50 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            }
            while ( gpSharedUserCritDeferredUnlockListHead );
            v19 = a5;
            v6 = a3;
          }
          v14 = 0;
        }
      }
    }
    *(_OWORD *)&v89[1] = xmmword_1C0297658;
    if ( v43 >= 0 )
    {
      HIDWORD(v83) = xxxUserSetDisplayConfig(0, 0LL, 0x187u, 0x80u, 0LL, 0, 0LL, &v73, 0LL, (__int64)v89, 0LL);
      if ( v83 >= 0 )
      {
        UserSessionSwitchLeaveCrit(v53, v52, v54, v55);
        v87 = 0LL;
        if ( v19 )
          v14 = *v19;
        v56 = &v87;
        if ( a4 )
          v56 = a4;
        v57 = *v56;
        if ( gptiForeground )
        {
          v58 = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
          v59 = PsGetProcessImageFileName(v58);
        }
        else
        {
          v59 = 0;
        }
        v87 = v57;
        DrvDxgkCheckDisplayState(a1, 0, v59, (unsigned int)v89, (__int64)&v87, v14);
        v63 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v60, v61, v62);
        gptiCurrent = v63;
        if ( v63 )
        {
          *((_DWORD *)v63 + 387) = 1;
          v65 = PsGetCurrentProcessWin32Process(v64);
          if ( v65 )
          {
            if ( *(_QWORD *)v65 )
            {
              if ( (*(_DWORD *)(v65 + 12) & 0x8000) != 0
                && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
              {
                v66 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( gpSharedUserCritDeferredUnlockListHead )
                {
                  do
                  {
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v66[2];
                    v67 = *v66;
                    v66[2] = 0LL;
                    if ( !*(_DWORD *)(v67 + 8) )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                    HMUnlockObject(*v66);
                    v66 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  }
                  while ( gpSharedUserCritDeferredUnlockListHead );
                  v6 = a3;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
LABEL_72:
    v13 = DWORD1(v83);
    v43 = DWORD2(v83);
  }
  v68 = (char *)v84[1];
  if ( !gProtocolType
    && v6
    && (unsigned int)dword_1C0283098 > 5
    && tlgKeywordOn((__int64)&dword_1C0283098, 0x400000000008LL) )
  {
    v78 = HIDWORD(v83);
    v80 = (int)v84[0];
    v74 = v83;
    v75 = 4;
    v77 = v70;
    v76 = a1;
    v85 = v68;
    v86 = v71;
    v79 = v43;
    v81 = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v69,
      byte_1C0255C8A,
      (const GUID *)&v89[1],
      v71,
      (__int64)&v75,
      (__int64)&v81,
      (__int64)&v74,
      (__int64)&v80,
      (__int64)&v79,
      (__int64)&v78,
      (__int64)&v77,
      (__int64 *)&v85,
      (__int64)&v76);
  }
  if ( v68 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v68);
}
