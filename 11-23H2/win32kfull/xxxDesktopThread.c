/*
 * XREFs of xxxDesktopThread @ 0x1C002ABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0015018 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     xxxDesktopThreadWaiter @ 0x1C002B130 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C002B3A0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C009DE54 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00A0C70 (xxxCleanupMotherDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // r12d
  int v3; // esi
  const WCHAR *v4; // rdx
  const wchar_t *v5; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v7; // r15
  tagQ *v8; // r14
  __int64 v9; // rcx
  struct _KEVENT *v10; // rcx
  void *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // rcx
  unsigned int v21; // r12d
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rax
  LegacyInputDispatcher *v29; // rcx
  LegacyInputDispatcher *v30; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  PRKEVENT v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  struct _KEVENT *v49; // rcx
  bool v50; // zf
  void *v51; // rcx
  PRKEVENT v52; // rcx
  __int64 v53; // rax
  signed __int32 v54[8]; // [rsp+8h] [rbp-89h] BYREF
  char v55; // [rsp+38h] [rbp-59h]
  int v56; // [rsp+3Ch] [rbp-55h]
  int v57; // [rsp+40h] [rbp-51h]
  LegacyInputDispatcher *v58; // [rsp+48h] [rbp-49h] BYREF
  int ProcessInformation; // [rsp+50h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  PRKEVENT v61; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v62[9]; // [rsp+70h] [rbp-21h]

  v57 = 0;
  v55 = 0;
  v58 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset_0(&v61, 0, 0x50uLL);
  v3 = *(_DWORD *)a1 & 2;
  SetThreadBasePriority(KeGetCurrentThread(), v3 != 0 ? 12 : 16);
  if ( !v3 )
  {
    if ( qword_1C035E188 )
    {
      v56 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 836LL);
    }
    qword_1C035E188 = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  }
  v4 = L"IO_DT";
  if ( v3 )
    v4 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v4);
  if ( v3 )
  {
    v5 = L"Win32k Desktop Thread (NOIO_DT)";
  }
  else
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      *(_DWORD *)(CurrentThreadWin32Thread + 44) |= 2u;
    v5 = L"Win32k Desktop Thread (IO_DT)";
  }
  SetThreadName(-2LL, v5);
  if ( (int)InitSystemThread(&DestinationString) >= 0 && (v3 || qword_1C035E188) )
  {
    ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread());
    *((_QWORD *)a1 + 2) = ThreadWin32Thread;
    v7 = ThreadWin32Thread;
    v8 = (tagQ *)*((_QWORD *)ThreadWin32Thread + 54);
    *((_QWORD *)a1 + 3) = v8;
    ++*((_DWORD *)v8 + 100);
    *((_QWORD *)ThreadWin32Thread + 58) = gpkdiStatic;
    *((_QWORD *)ThreadWin32Thread + 77) = 0LL;
    if ( (int)LegacyInputDispatcher::Create(&v58) < 0 )
    {
      *(_DWORD *)a1 |= 8u;
      _InterlockedOr(v54, 0);
      KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
      if ( !v3 )
      {
        v36 = qword_1C035E188;
LABEL_83:
        Win32FreePool(v36);
        qword_1C035E188 = 0LL;
      }
    }
    else
    {
      if ( !v3 )
      {
        v32 = 1;
        v61 = Feedback::gpevtPointerCursorOperation;
        v62[0] = OnPointerCursorOperation;
        if ( !gDWMCapable )
        {
          v37 = SGDGetUserSessionState(v9);
          v32 = 2;
          v38 = *(_QWORD *)(v37 + 16824);
          v62[2] = OnPTPMouseOperation;
          v62[1] = v38;
        }
        v2 = v32 + 1;
        v33 = 2LL * v32;
        v57 = v32 + 1;
        v62[v33 - 1] = qword_1C035E188;
        v62[v33] = lambda_e277e00ef720cdd7e05078d97cf7089b_::_lambda_invoker_cdecl_;
        v34 = *(unsigned int *)SGDGetUserSessionState(v33);
        if ( (_DWORD)v34 == gServiceSessionId )
        {
          v35 = SGDGetUserSessionState(v34);
          CBaseInput::InitializeSensor(*(CBaseInput **)(v35 + 3272));
          v55 = 1;
        }
        else if ( !gDWMCapable )
        {
          v55 = 1;
          v39 = SGDGetUserSessionState(v34);
          v40 = CBaseInput::InitializeSensor(*(CBaseInput **)(v39 + 3272));
          if ( v40 >= 0 )
          {
            if ( gProtocolType )
            {
              EnterCrit(1LL, 0LL);
              v43 = SGDGetUserSessionState(v42);
              CBaseInput::HandleTSRequest(*(_QWORD *)(v43 + 3272), 0LL);
              UserSessionSwitchLeaveCrit(v45, v44, v46, v47);
            }
            v48 = SGDGetUserSessionState(v41);
            CBaseInput::Read(*(CBaseInput **)(v48 + 3272));
          }
        }
      }
      EnterCrit(1LL, 0LL);
      v10 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
      *(_DWORD *)a1 |= 4u;
      KeSetEvent(v10, 1, 0);
      v11 = (void *)*((_QWORD *)a1 + 7);
      ObReferenceObjectByPointer(v11, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
      UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
      KeWaitForSingleObject(v11, WrUserRequest, 0, 0, 0LL);
      EnterCrit(1LL, 0LL);
      ObfDereferenceObject(v11);
      if ( (*(_DWORD *)a1 & 8) != 0 )
      {
        _InterlockedOr(v54, 0);
        if ( *((_QWORD *)a1 + 1) )
          xxxCleanupMotherDesktopWindow(a1);
        v49 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
        if ( v49 )
          KeSetEvent(v49, 1, 0);
        v50 = (*((_DWORD *)v8 + 100))-- == 1;
        if ( v50 && !tagQ::IsAnyThreadAttached(v8) && (*((_DWORD *)v8 + 99) & 0x4000000) != 0 )
        {
          v56 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1015LL);
        }
        v51 = (void *)*((_QWORD *)a1 + 7);
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
        *(_DWORD *)a1 = 0;
        if ( v51 )
        {
          ObfDereferenceObject(v51);
          *((_QWORD *)a1 + 7) = 0LL;
        }
        if ( v55 )
          CleanupSensorExplicitly(0LL);
        v30 = v58;
        if ( v58 )
          LegacyInputDispatcher::`scalar deleting destructor'(v58, v16);
        if ( !v3 )
        {
          v52 = qword_1C035E188;
          if ( !qword_1C035E188 )
          {
            v56 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1034LL);
            v52 = qword_1C035E188;
          }
          Win32FreePool(v52);
          qword_1C035E188 = 0LL;
        }
      }
      else
      {
        tagTERMINAL::SetDTEThread(a1);
        ProcessInformation = 1;
        ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
        v19 = v2 + 1;
        v20 = 2LL * v2;
        v62[2 * v2 - 1] = *((_QWORD *)v7 + 182);
        if ( v2 + 1 > 5 )
        {
          v56 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1058LL);
        }
        if ( v3 || gDWMCapable )
        {
          v21 = v2 + 1;
        }
        else
        {
          SGDGetUserSessionState(v20);
          v21 = v2 + 10;
        }
        LegacyInputDispatcher::Initialize(v58, 1, 0, v21, v19, (struct LegacyDispatcherObject *)&v61);
        if ( v21 != v19 && !gDWMCapable )
        {
          v53 = SGDGetUserSessionState(v22);
          CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v53 + 3272), v58);
        }
        v23 = v57;
        *((_DWORD *)v58 + 15) = v57;
        if ( v3 )
          qword_1C035E180 = (__int64)v58;
        else
          qword_1C035E190 = (__int64)v58;
        do
        {
          do
            LOBYTE(v22) = 1;
          while ( (unsigned int)xxxDesktopThreadWaiter(v22, 0LL) != v23 );
        }
        while ( (unsigned int)xxxHandleDesktopMessages(v7, a1) );
        if ( a1 == (struct tagTERMINAL *)gTermIO[0] )
          gdwHydraHint |= 0x100000u;
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 8) = 0;
        *(_DWORD *)a1 = 0;
        v27 = *((_QWORD *)v7 + 57);
        if ( v27 )
        {
          HMAssignmentUnlock(v27 + 192);
          v28 = *(_QWORD **)(*((_QWORD *)v7 + 57) + 8LL);
          if ( v28[3] )
          {
            *(_QWORD *)(*v28 + 8LL) = 0LL;
            HMAssignmentUnlock(v28 + 3);
          }
        }
        *((_QWORD *)v7 + 58) = gpkdiStatic;
        if ( !*((_DWORD *)v8 + 100) )
        {
          v57 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1158LL);
        }
        --*((_DWORD *)v8 + 100);
        if ( *((tagQ **)v7 + 54) != v8 )
          zzzDestroyQueue(v8, v7);
        if ( v55 )
          CleanupSensorExplicitly(0LL);
        v29 = v58;
        if ( v58 )
          LegacyInputDispatcher::`scalar deleting destructor'(v58, v24);
        v58 = 0LL;
        UserSessionSwitchLeaveCrit(v29, v24, v25, v26);
        if ( !v3 )
        {
          Win32FreePool(qword_1C035E188);
          qword_1C035E188 = 0LL;
        }
        ProcessInformation = 0;
        ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
        EnterCrit(1LL, 0LL);
        tagTERMINAL::ClearDTEThread(a1);
      }
      UserSessionSwitchLeaveCrit(v30, v16, v17, v18);
    }
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v54, 0);
    KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    if ( !v3 )
    {
      v36 = qword_1C035E188;
      if ( qword_1C035E188 )
        goto LABEL_83;
    }
  }
}
