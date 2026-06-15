/*
 * XREFs of ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z @ 0x18011B810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x1800568AC (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180069220 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AddMonitor@CMonitorManager@@AEAAJV?$ComPtr@VCaptureMonitor@CMonitorManager@@@WRL@Microsoft@@@Z @ 0x1801179D0 (-AddMonitor@CMonitorManager@@AEAAJV-$ComPtr@VCaptureMonitor@CMonitorManager@@@WRL@Microsoft@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CStreamConnectionImpl::SetStreamingState(
        CMonitorManager::CStreamConnectionImpl *this,
        char a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // ebx
  int restarted; // esi
  __int64 v7; // r14
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 8);
  AcquireSRWLockExclusive((PSRWLOCK)this + 1);
  v10 = v4;
  v5 = 0;
  if ( a2 != *((_BYTE *)this + 16) )
  {
    restarted = 0;
    v7 = *((_QWORD *)this + 3);
    if ( a2 )
    {
      v9 = *((_QWORD *)this + 4);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
      CMonitorManager::AddMonitor(v7, &v9);
      restarted = CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(*((CMonitorManager::CaptureMonitor **)this
                                                                               + 4));
      if ( restarted < 0 )
        CMonitorManager::RemoveMonitor(
          *((CMonitorManager **)this + 3),
          *((CMonitorManager::CaptureMonitor **)this + 4),
          0);
      else
        *((_BYTE *)this + 16) = 1;
    }
    else
    {
      CMonitorManager::RemoveMonitor(
        *((CMonitorManager **)this + 3),
        *((CMonitorManager::CaptureMonitor **)this + 4),
        1);
      *((_BYTE *)this + 16) = 0;
    }
    v5 = restarted;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
  return v5;
}
