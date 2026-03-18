/*
 * XREFs of xxxDesktopThread @ 0x1402864A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxDesktopThreadWaiter @ 0x140066AC4 (xxxDesktopThreadWaiter.c)
 *     IsCurrentSessionServiceSession @ 0x1400A4078 (IsCurrentSessionServiceSession.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140107708 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x14020174C (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x140212458 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14021B070 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140274E24 (Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

int __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  int v2; // r12d
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 KernelEvent; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const WCHAR *v12; // rdx
  const wchar_t *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  struct tagTHREADINFO *v22; // r15
  tagQ *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 UserSessionState; // rax
  void *v46; // rbx
  __int64 v47; // rdx
  char v48; // bl
  bool v49; // zf
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // r13d
  bool v55; // si
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  struct _KEVENT *v59; // rcx
  void *v60; // rcx
  __int64 v61; // rdx
  LegacyInputDispatcher *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  LegacyInputDispatcher *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdx
  _QWORD *v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  LegacyInputDispatcher *v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rbx
  signed __int32 v83[8]; // [rsp+8h] [rbp-99h] BYREF
  char v84; // [rsp+48h] [rbp-59h]
  int v85; // [rsp+4Ch] [rbp-55h]
  _BYTE v86[8]; // [rsp+50h] [rbp-51h] BYREF
  LegacyInputDispatcher *v87; // [rsp+58h] [rbp-49h] BYREF
  int ProcessInformation; // [rsp+60h] [rbp-41h] BYREF
  int v89; // [rsp+64h] [rbp-3Dh]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-39h] BYREF
  __int64 v91; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v92[9]; // [rsp+80h] [rbp-21h]

  v84 = 0;
  v87 = 0LL;
  DestinationString = 0LL;
  memset_0(&v91, 0, 0x50uLL);
  v2 = *(_DWORD *)a1 & 2;
  v5 = *(_DWORD *)(W32GetUserSessionState(v4, v3) + 19152);
  v89 = v5;
  SetThreadBasePriority(KeGetCurrentThread(), v2 != 0 ? 12 : 16);
  v8 = 1;
  if ( !v2 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63232) )
    {
      v85 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 848);
    }
    KernelEvent = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 63232) = KernelEvent;
  }
  v12 = L"IO_DT";
  if ( v2 )
    v12 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v12);
  v13 = L"Win32k Desktop Thread (IO_DT)";
  if ( v2 )
    v13 = L"Win32k Desktop Thread (NOIO_DT)";
  SetThreadName(-2LL, v13);
  if ( (int)InitSystemThread(&DestinationString) >= 0 && (v2 || *(_QWORD *)(W32GetUserSessionState(v15, v14) + 63232)) )
  {
    if ( !(unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline()
      || (int)LegacyInputDispatcher::Create(&v87) >= 0 )
    {
      v21 = PtiCurrent(v17, v16);
      *((_QWORD *)a1 + 2) = v21;
      v22 = v21;
      v23 = (tagQ *)*((_QWORD *)v21 + 59);
      *((_QWORD *)a1 + 3) = v23;
      ++*((_DWORD *)v23 + 110);
      *((_QWORD *)v21 + 63) = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 62960);
      *((_QWORD *)v22 + 82) = 0LL;
      if ( (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline()
        || (int)LegacyInputDispatcher::Create(&v87) >= 0 )
      {
        if ( v2 )
        {
          v31 = 0;
        }
        else
        {
          v29 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 36368);
          v91 = *(_QWORD *)(v29 + 72);
          v92[0] = OnPointerCursorOperation;
          if ( !v5 )
          {
            v8 = 2;
            v29 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 16824);
            v92[2] = OnPTPMouseOperation;
            v92[1] = v29;
          }
          v30 = 2LL * v8;
          v31 = v8 + 1;
          v32 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 63232);
          v92[v30] = lambda_4dbab2e2125e5f69b03e741466c41000_::_lambda_invoker_cdecl_;
          v92[v30 - 1] = v32;
          if ( IsCurrentSessionServiceSession() )
          {
            UserSessionState = W32GetUserSessionState(v34, v33);
            CBaseInput::InitializeSensor(*(CBaseInput **)(UserSessionState + 3104));
            v84 = 1;
          }
          else if ( !v5 )
          {
            v84 = 1;
            v35 = W32GetUserSessionState(v34, v33);
            if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v35 + 3104)) >= 0 )
            {
              if ( IsRemoteConnection(v37, v36) )
              {
                EnterCrit(1LL, 0LL);
                v42 = W32GetUserSessionState(v41, v40);
                CBaseInput::HandleTSRequest(*(_QWORD *)(v42 + 3104), 0LL);
                UserSessionSwitchLeaveCrit(v43);
              }
              v44 = W32GetUserSessionState(v39, v38);
              CBaseInput::Read(*(CBaseInput **)(v44 + 3104));
            }
          }
        }
        EnterCrit(1LL, 0LL);
        if ( !(unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() )
          *(_DWORD *)a1 |= 4u;
        if ( (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() )
          tagTERMINAL::SetDTEThread(a1);
        KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
        v46 = (void *)*((_QWORD *)a1 + 7);
        ObReferenceObjectByPointer(v46, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
        LOBYTE(v47) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v86, v47);
        KeWaitForSingleObject(v46, WrUserRequest, 0, 0, 0LL);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v86);
        ObfDereferenceObject(v46);
        v48 = 0;
        v49 = (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() == 0;
        v51 = *(_DWORD *)a1;
        if ( v49 )
        {
          if ( (v51 & 8) == 0 )
          {
LABEL_35:
            if ( !(unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() )
              tagTERMINAL::SetDTEThread(a1);
            ProcessInformation = 1;
            ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
            v53 = 2LL * v31;
            v92[2 * v31 - 1] = *((_QWORD *)v22 + 201);
            if ( v31 + 1 > 5 )
            {
              v85 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1157);
            }
            if ( v2 || v5 )
            {
              v54 = v31 + 1;
            }
            else
            {
              W32GetUserSessionState(v53, v52);
              v54 = v31 + 10;
            }
            LegacyInputDispatcher::Initialize(v87, 1, 0, v54, v31 + 1, (struct LegacyDispatcherObject *)&v91);
            if ( v54 != v31 + 1 && !v89 )
            {
              v68 = W32GetUserSessionState(v67, v66);
              CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v68 + 3104), v87);
            }
            *((_DWORD *)v87 + 15) = v31;
            v69 = W32GetUserSessionState(v67, v66);
            if ( v2 )
            {
              *(_QWORD *)(v69 + 19224) = v87;
            }
            else
            {
              v70 = v87;
              *(_QWORD *)(v69 + 19216) = v87;
            }
            do
            {
              do
                LOBYTE(v70) = 1;
              while ( (unsigned int)xxxDesktopThreadWaiter((__int64)v70, 0LL) != v31 );
            }
            while ( (unsigned int)xxxHandleDesktopMessages(v22, a1) );
            if ( a1 == (struct tagTERMINAL *)(W32GetUserSessionState(v70, v71) + 68720) )
              HYDRA_HINT(0x100000LL, v72);
            *((_QWORD *)a1 + 2) = 0LL;
            *((_QWORD *)a1 + 3) = 0LL;
            *((_DWORD *)a1 + 8) = 0;
            if ( !(unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() )
              *(_DWORD *)a1 = 0;
            v74 = (_QWORD *)*((_QWORD *)v22 + 62);
            if ( v74 )
            {
              HMAssignmentUnlock(v74 + 24);
              v75 = *(_QWORD **)(*((_QWORD *)v22 + 62) + 8LL);
              v74 = v75 + 3;
              if ( v75[3] )
              {
                *(_QWORD *)(*v75 + 8LL) = 0LL;
                HMAssignmentUnlock(v74);
              }
            }
            *((_QWORD *)v22 + 63) = *(_QWORD *)(W32GetUserSessionState(v74, v73) + 62960);
            if ( !*((_DWORD *)v23 + 110) )
            {
              v85 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1261);
            }
            --*((_DWORD *)v23 + 110);
            if ( *((tagQ **)v22 + 59) != v23 )
              zzzDestroyQueue(v23, v22);
            if ( v84 )
              CleanupSensorExplicitly(0LL);
            v77 = v87;
            if ( v87 )
              LegacyInputDispatcher::`scalar deleting destructor'(v87);
            v87 = 0LL;
            if ( !v2 )
            {
              v78 = W32GetUserSessionState(v77, v76);
              Win32FreePool(*(void **)(v78 + 63232));
              *(_QWORD *)(v78 + 63232) = 0LL;
            }
            ProcessInformation = 0;
            ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
            tagTERMINAL::ClearDTEThread(a1);
LABEL_99:
            LODWORD(v18) = UserSessionSwitchLeaveCrit(v62);
            return v18;
          }
        }
        else if ( (v51 & 0x10) == 0 )
        {
          goto LABEL_35;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
        {
          v48 = 1;
        }
        v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v48 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v50);
          LOBYTE(v57) = v55;
          LOBYTE(v58) = v48;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v58,
            v57,
            *(_QWORD *)(v56 + 69416),
            4,
            20,
            23,
            (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
        }
        _InterlockedOr(v83, 0);
        if ( *((_QWORD *)a1 + 1) )
          xxxCleanupMotherDesktopWindow(a1);
        if ( (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() )
          DestroyPendingDesktops(v22, a1);
        v59 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
        if ( v59 )
          KeSetEvent(v59, 1, 0);
        v49 = (*((_DWORD *)v23 + 110))-- == 1;
        if ( v49 && !tagQ::IsAnyThreadAttached(v23) && (*((_DWORD *)v23 + 109) & 0x4000000) != 0 )
        {
          v85 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1103);
        }
        v60 = (void *)*((_QWORD *)a1 + 7);
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
        if ( v60 )
        {
          ObfDereferenceObject(v60);
          *((_QWORD *)a1 + 7) = 0LL;
        }
        if ( (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() )
          tagTERMINAL::ClearDTEThread(a1);
        if ( v84 )
          CleanupSensorExplicitly(0LL);
        v62 = v87;
        if ( v87 )
          LegacyInputDispatcher::`scalar deleting destructor'(v87);
        if ( !v2 )
        {
          if ( !*(_QWORD *)(W32GetUserSessionState(v62, v61) + 63232) )
          {
            v85 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1130);
          }
          v65 = W32GetUserSessionState(v64, v63);
          Win32FreePool(*(void **)(v65 + 63232));
          *(_QWORD *)(v65 + 63232) = 0LL;
        }
        goto LABEL_99;
      }
    }
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v83, 0);
    LODWORD(v18) = KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    if ( !v2 )
    {
LABEL_102:
      v81 = W32GetUserSessionState(v20, v19);
      Win32FreePool(*(void **)(v81 + 63232));
      LODWORD(v18) = 0;
      *(_QWORD *)(v81 + 63232) = 0LL;
    }
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v83, 0);
    LODWORD(v18) = KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    if ( !v2 )
    {
      v18 = W32GetUserSessionState(v80, v79);
      if ( *(_QWORD *)(v18 + 63232) )
        goto LABEL_102;
    }
  }
  return v18;
}
