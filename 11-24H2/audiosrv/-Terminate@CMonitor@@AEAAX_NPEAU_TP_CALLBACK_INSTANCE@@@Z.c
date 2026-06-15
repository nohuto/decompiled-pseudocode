/*
 * XREFs of ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18006950C
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180069220 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801181F0 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011952C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18011BAA4 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18011BAF4 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011C790 (-DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011DDD0 (-TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18000A918 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180060D98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x18011C534 (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::Terminate(CMonitor *this, char a2, struct _TP_CALLBACK_INSTANCE *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  LPCRITICAL_SECTION v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 18) != 6 && (!a2 || *((_DWORD *)this + 18) != 5) )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
    if ( *((_DWORD *)this + 18) == 6 || *((_DWORD *)this + 18) == 5 && a2 && *((_QWORD *)this + 25) )
    {
LABEL_15:
      ATL::CCritSecLock::~CCritSecLock(v8);
      return;
    }
    *((_DWORD *)this + 18) = 5;
    if ( a2 && *((_QWORD *)this + 25) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
      }
      (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
      SubmitThreadpoolWork(*((PTP_WORK *)this + 25));
      goto LABEL_15;
    }
    ATL::CCritSecLock::~CCritSecLock(v8);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
    }
    v6 = *((_QWORD *)this + 15);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, *((_QWORD *)this + 18));
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 15);
      ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((char *)this + 144);
    }
    CoTaskMemFree(*((LPVOID *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 13);
    CoTaskMemFree(*((LPVOID *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
    v7 = *((_QWORD *)this + 21);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, *((_QWORD *)this + 22));
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 21);
      ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((char *)this + 176);
    }
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 20);
    CoTaskMemFree(*((LPVOID *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 18) = 6;
    if ( *((_QWORD *)this + 24) )
    {
      if ( a3 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
        }
        SetEventWhenCallbackReturns(a3, *((HANDLE *)this + 24));
      }
      else
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
        }
        SetEvent(*((HANDLE *)this + 24));
      }
    }
  }
}
