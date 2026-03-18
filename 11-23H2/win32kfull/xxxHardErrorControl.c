/*
 * XREFs of xxxHardErrorControl @ 0x1C02234A4
 * Callers:
 *     NtUserHardErrorControl @ 0x1C01D4190 (NtUserHardErrorControl.c)
 * Callees:
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0015018 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C002A7B0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C002AB20 (xxxRestoreCsrssThreadDesktop.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C0039524 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C0043A44 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  char v6; // si
  _QWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // rbx
  _DWORD *v13; // rbx
  NTSTATUS v14; // ebx
  __int64 v15; // r9
  tagQ *v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  NTSTATUS v19; // eax
  PVOID v20; // r14
  __int64 ThreadWin32Thread; // rax
  PDEVICE_OBJECT v22; // rcx
  char v23; // r8
  unsigned __int16 v24; // dx
  __int128 v25; // [rsp+50h] [rbp-58h] BYREF
  __int64 v26; // [rsp+60h] [rbp-48h]
  int v27; // [rsp+B0h] [rbp+8h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  v25 = 0LL;
  v6 = 1;
  v26 = 0LL;
  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( grpdeskRitInput && !gHardErrorHandler )
      {
        gHardErrorHandler = gptiCurrent;
        goto LABEL_33;
      }
      return 1LL;
    case 1:
      if ( gHardErrorHandler == gptiCurrent )
      {
        gHardErrorHandler = 0LL;
        return 0LL;
      }
      return 1LL;
    case 2:
      goto LABEL_35;
    case 3:
LABEL_9:
      if ( !grpdeskRitInput )
        return 1LL;
      if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
      {
        if ( !gspdeskShouldBeForeground || (PVOID)gspdeskShouldBeForeground == gspdeskDisconnect )
          return 1LL;
        if ( !ObQueryNameInfo(gspdeskShouldBeForeground) )
        {
          v12 = 0LL;
LABEL_27:
          if ( v12
            && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v12 + 8))
             || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v12 + 8))
             || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v12 + 8))) )
          {
            UserSetLastError(5);
            return 2LL;
          }
LABEL_32:
          if ( a1 == 8 )
          {
LABEL_33:
            *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
            return 0LL;
          }
LABEL_35:
          *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 432LL);
          ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 400LL);
          goto LABEL_36;
        }
        v7 = (_QWORD *)gspdeskShouldBeForeground;
      }
      else
      {
        if ( !ObQueryNameInfo(grpdeskRitInput) )
          goto LABEL_32;
        v7 = (_QWORD *)grpdeskRitInput;
      }
      v12 = ObQueryNameInfo(*v7) + 8;
      goto LABEL_27;
    case 4:
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
      if ( !*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 400LL) )
      {
        v27 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 504);
      }
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 400LL);
      ++gdwDeferWinEvent;
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v27);
      v9 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( *(_QWORD *)(gptiCurrent + 432LL) != v9 )
      {
        AllocQueue(0LL, v9);
        tagQ::zzzAttachToQueue(*((tagQ **)&gHardErrorHandler + 1), gptiCurrent, 0LL);
      }
      *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v27, v9, v8);
      zzzEndDeferWinEventNotify();
      break;
    case 5:
LABEL_36:
      v13 = (_DWORD *)grpdeskRitInput;
      if ( grpdeskRitInput
        && ((PVOID)grpdeskRitInput != gspdeskDisconnect
         || gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect) )
      {
        gbDisconnectHardErrorAttach = 0;
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          gbDisconnectHardErrorAttach = 1;
          v13 = (_DWORD *)gspdeskShouldBeForeground;
        }
        PushW32ThreadLock((__int64)v13, &v25, UserDereferenceObject);
        if ( v13 )
          ObfReferenceObject(v13);
        v14 = xxxSetCsrssThreadDesktop(v13, a3);
        PopAndFreeW32ThreadLock((__int64)&v25);
        if ( v14 < 0 )
        {
          if ( a1 != 5 )
          {
            *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
            if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 400LL) )
            {
              v27 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 427);
            }
            --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 400LL);
            v16 = *(tagQ **)(gptiCurrent + 432LL);
            if ( !*((_DWORD *)v16 + 100) && !tagQ::IsAnyThreadAttached(v16) && (*(_DWORD *)(v17 + 396) & 0x4000000) != 0 )
            {
              v27 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 437);
            }
          }
          return 1LL;
        }
        v18 = 0;
        if ( a2 )
        {
          Object = 0LL;
          v19 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
          v20 = Object;
          if ( v19 >= 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
            if ( !ThreadWin32Thread || CanForceForeground(*(const struct tagPROCESSINFO **)(ThreadWin32Thread + 424)) )
              v18 = 1;
            ObfDereferenceObject(v20);
          }
        }
        if ( v18 )
        {
          *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v6 = 0;
          }
          v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v24 = 10;
        }
        else
        {
          *(_DWORD *)(gptiCurrent + 488LL) &= ~0x20u;
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v6 = 0;
          }
          v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v24 = 11;
        }
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)v22->AttachedDevice,
          v6,
          v23,
          v15,
          4u,
          2u,
          v24,
          (__int64)&WPP_034e3ab9e0c135a13566851594780e6c_Traceguids,
          gptiCurrent);
        return 0LL;
      }
      return 1LL;
    case 6:
      break;
    case 8:
      goto LABEL_9;
    default:
      return 0LL;
  }
  v10 = *(_QWORD *)(gptiCurrent + 456LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v10 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
