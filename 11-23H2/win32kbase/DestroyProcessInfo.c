/*
 * XREFs of DestroyProcessInfo @ 0x1C00C5EA0
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0050580 (xxxUserProcessCallout.c)
 * Callees:
 *     CitProcessCallout @ 0x1C00362EC (CitProcessCallout.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     UnlockObjectAssignment @ 0x1C0038710 (UnlockObjectAssignment.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C0065FE8 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     SynchronizeContext @ 0x1C0068170 (SynchronizeContext.c)
 *     RIMOnProcessDestroy @ 0x1C0073FD0 (RIMOnProcessDestroy.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0079E14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     CloseProtectedHandle @ 0x1C0096518 (CloseProtectedHandle.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00981A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00981E4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DelayedDestroyCacheDC @ 0x1C00A065C (DelayedDestroyCacheDC.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C00AB9E4 (IszzzCalcStartCursorHideSupported.c)
 *     IsShellProcess @ 0x1C00AD8FC (IsShellProcess.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1C00ADC54 (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 *     CleanupLogonProcess @ 0x1C00B1D00 (CleanupLogonProcess.c)
 *     zzzCalcStartCursorHide @ 0x1C00B58E0 (zzzCalcStartCursorHide.c)
 *     PostPlaySoundMessage @ 0x1C00B6720 (PostPlaySoundMessage.c)
 *     IsCleanupIAMAccessSupported @ 0x1C00C52D8 (IsCleanupIAMAccessSupported.c)
 *     CleanupIAMAccess @ 0x1C00C5468 (CleanupIAMAccess.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00D32B0 (GreCleanDCAndSetOwnerEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF238 (McTemplateK0_EtwWriteTransfer.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C013B01C (EtwTraceScreenSaverProcessEvent.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C017AB9C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _KEVENT *v5; // rcx
  int v6; // eax
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v15; // eax
  __int64 k; // r14
  __int64 m; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rcx
  int v21; // eax
  unsigned int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rcx
  char *v27; // rcx
  char *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 *v34; // [rsp+70h] [rbp+30h] BYREF
  __int64 v35; // [rsp+78h] [rbp+38h] BYREF
  __int64 v36; // [rsp+80h] [rbp+40h] BYREF

  CitProcessCallout(a1, 0);
  v5 = *(struct _KEVENT **)(a1 + 16);
  if ( v5 == (struct _KEVENT *)-1LL )
    goto LABEL_4;
  if ( v5 )
  {
    KeSetEvent(v5, 1, 0);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
LABEL_4:
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v34, v2, v3, v4);
  CWinEventNoopDeferral::CWinEventNoopDeferral((CWinEventNoopDeferral *)&v35);
  v6 = *(_DWORD *)(a1 + 12);
  if ( (v6 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 12) = v6 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
      zzzCalcStartCursorHide(0LL, 0LL);
  }
  --gdwDeferWinEvent;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v34);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v34, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(_QWORD *)(j + 256) == a1 )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v34);
  if ( (*(_DWORD *)(a1 + 12) & 0x8000) != 0 )
  {
    PsUpdateComponentPower(*(_QWORD *)a1, 6LL);
    v10 = *(_QWORD *)(a1 + 272);
    if ( v10 )
    {
      PsReleaseProcessWakeCounter(v10, 1LL);
      *(_QWORD *)(a1 + 272) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 856) && qword_1C0295800 && (int)qword_1C0295800() >= 0 && qword_1C0295808 )
      qword_1C0295808(a1);
    if ( *(_QWORD *)(a1 + 912) && qword_1C0295810 && (int)qword_1C0295810() >= 0 && qword_1C0295818 )
      qword_1C0295818(a1);
    if ( *(_QWORD *)(a1 + 920) != -1LL )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    if ( *(_QWORD *)(a1 + 928) != -1LL )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    if ( (*(_DWORD *)(a1 + 12) & 0x40001) == 0x40000 )
    {
      v11 = *(_QWORD *)(a1 + 664);
      if ( (!v11 || (*(_DWORD *)(v11 + 64) & 2) == 0) && qword_1C0295820 && (int)qword_1C0295820() >= 0 )
        PostPlaySoundMessage();
    }
    if ( (unsigned int)IsShellProcess(a1) && *(_QWORD *)(a1 + 344) == grpdeskIODefault )
    {
      if ( (int)IsCleanupIAMAccessSupported() >= 0 )
        CleanupIAMAccess();
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 664) + 64LL) & 2) == 0 )
      {
        ProcessExitStatus = PsGetProcessExitStatus(*(PEPROCESS *)a1);
        if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
        {
          v15 = PsGetProcessExitStatus(*(PEPROCESS *)a1);
          PostWinlogonMessage(0x401u, (struct _EX_RUNDOWN_REF *)v15);
        }
      }
    }
    for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
    {
      for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
      {
        v18 = *(_QWORD *)(m + 8);
        if ( *(_QWORD *)(v18 + 176) == a1 )
        {
          *(_QWORD *)(v18 + 176) = 0LL;
          if ( (struct tagDESKTOP *)m == grpdeskRitInput )
            SynchronizeContext();
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 12) & 0x40) != 0 && qword_1C0296550 )
      qword_1C0296550(a1);
    v19 = gppiList;
    v20 = &gppiList;
    while ( v19 )
    {
      if ( v19 == a1 )
      {
        *v20 = *(_QWORD *)(a1 + 376);
        break;
      }
      v20 = (__int64 *)(v19 + 376);
      v19 = *(_QWORD *)(v19 + 376);
    }
    v21 = *(_DWORD *)(a1 + 12);
    v22 = v21 & 0x4000;
    if ( (v21 & 0x4000) != 0 && (v21 & 0x200) != 0 )
      DelayedDestroyCacheDC(1);
    if ( qword_1C0295830 && (int)qword_1C0295830(v20) >= 0 )
    {
      v20 = 0LL;
      v34 = 0LL;
      if ( qword_1C0295838 )
      {
        qword_1C0295838(&v34);
        v20 = v34;
      }
      while ( v20 )
      {
        if ( *((_DWORD *)v20 + 5) == *(_DWORD *)(a1 + 56) )
          *((_DWORD *)v20 + 5) = 0;
        v20 = (__int64 *)*v20;
      }
    }
    if ( gppiScreenSaver == a1 )
    {
      gppiScreenSaver = 0LL;
      EtwTraceScreenSaverProcessEvent(2LL);
    }
    InputObjectMap::OnProcessTermination((__int64)v20, v12, v13);
    if ( gppiUserApiHook == a1 && qword_1C0295840 && (int)qword_1C0295840() >= 0 && qword_1C0295848 )
      qword_1C0295848();
    if ( gppiDManipHook == a1 && qword_1C0295850 && (int)qword_1C0295850() >= 0 && qword_1C0295858 )
      qword_1C0295858();
    UnlockObjectAssignment((void **)(a1 + 664));
    UnlockObjectAssignment((void **)(a1 + 344));
    v26 = *(void **)(a1 + 392);
    if ( v26 )
    {
      CloseProtectedHandle(v26);
      *(_QWORD *)(a1 + 392) = 0LL;
    }
    *(_DWORD *)(a1 + 12) |= 0x1000u;
    v27 = *(char **)(a1 + 704);
    if ( v27 )
    {
      do
      {
        v28 = *(char **)v27;
        Win32FreePool(v27);
        v27 = v28;
      }
      while ( v28 );
    }
    *(_QWORD *)(a1 + 704) = 0LL;
    if ( qword_1C0295860 && (int)qword_1C0295860(v27) >= 0 && qword_1C0295868 )
      qword_1C0295868(a1);
    if ( a1 == gppiInputProvider )
      gppiInputProvider = 0LL;
    if ( a1 == gppiLockSFW )
      gppiLockSFW = 0LL;
    if ( *(_DWORD *)(a1 + 56) == gpidLogonUI )
    {
      gpidLogonUI = 0LL;
      LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 0;
      if ( (*(_DWORD *)(a1 + 824) & 0x80000) != 0 && qword_1C0295890 && (int)qword_1C0295890(v27) >= 0 )
      {
        if ( qword_1C0295898 )
          qword_1C0295898(2LL);
        *(_DWORD *)(a1 + 824) &= ~0x80000u;
      }
    }
    if ( *(_DWORD *)(a1 + 56) == gpidLogon )
      CleanupLogonProcess(0, v23, v24, v25);
    v29 = *(unsigned int *)(a1 + 1116);
    if ( *(_QWORD *)(a1 + 1112) && (unsigned int)dword_1C02882F8 > 5 )
    {
      LODWORD(v34) = *(_DWORD *)(a1 + 56);
      v35 = *(unsigned int *)(a1 + 1112);
      v36 = v29;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (int)&dword_1C02882F8,
        (int)&unk_1C02568D5,
        v24,
        v25,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34);
    }
    GreCleanDCAndSetOwnerEx(qword_1C0291EF8);
    if ( qword_1C02961E0 )
      qword_1C02961E0(a1);
    RIMOnProcessDestroy(*(_QWORD *)a1, v30, v31, v32);
    LOBYTE(v33) = BYTE1(Microsoft_Windows_Win32kEnableBits);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
      McTemplateK0_EtwWriteTransfer(v33, &CompleteGuiProcessExecution, &W32kControlGuid);
    return v22;
  }
  else
  {
    if ( qword_1C0296550 )
      qword_1C0296550(a1);
    return 0LL;
  }
}
