/*
 * XREFs of ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800CC0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x18004BB84 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800CF858 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::BeginTermination(CAudioSrv *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rbx
  std::_Ref_count_base *v6; // rcx
  RPC_STATUS v7; // eax
  RPC_STATUS v8; // ebx
  RPC_STATUS v9; // eax
  RPC_STATUS v10; // ebx
  RPC_STATUS v11; // eax
  RPC_STATUS v12; // ebx
  RPC_STATUS v13; // eax
  RPC_STATUS v14; // ebx
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 27) )
  {
    ((void (__fastcall *)(struct IMMDeviceEnumerator *, unsigned __int64))g_DeviceEnumerator->lpVtbl->UnregisterEndpointNotificationCallback)(
      g_DeviceEnumerator,
      ((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
    *((_DWORD *)this + 27) = 0;
  }
  CSerialWorkQueue::Shutdown((CAudioSrv *)((char *)this + 336));
  CSerialWorkQueue::Shutdown((CAudioSrv *)((char *)this + 208));
  if ( ThreadPool )
  {
    v3 = *((_QWORD *)this + 25);
    if ( v3 )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(
        ThreadPool,
        v3,
        0LL);
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 64LL))(
        ThreadPool,
        *((_QWORD *)this + 25));
      *((_QWORD *)this + 25) = 0LL;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  while ( *((_QWORD *)this + 21) )
  {
    v4 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64)this + 152);
    v5 = (void (__fastcall ***)(_QWORD, __int64))v4;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
        *(const wchar_t **)(v4 + 8));
    }
    if ( v5 )
      (**v5)(v5, 1LL);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
  g_streamMonitorManager = 0LL;
  v6 = qword_1801DCBD0;
  qword_1801DCBD0 = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( *((_DWORD *)this + 16) )
  {
    v7 = RpcServerUnregisterIfEx(&unk_180189830, 0LL, 1);
    v8 = v7;
    if ( v7
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
        v7);
    }
    *((_DWORD *)this + 16) = v8 != 0;
  }
  if ( *((_DWORD *)this + 14) )
  {
    v9 = RpcServerUnregisterIfEx(&unk_180182A80, 0LL, 1);
    v10 = v9;
    if ( v9
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
        v9);
    }
    *((_DWORD *)this + 14) = v10 != 0;
  }
  if ( *((_DWORD *)this + 15) )
  {
    v11 = RpcServerUnregisterIfEx(&unk_180189570, 0LL, 1);
    v12 = v11;
    if ( v11
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
        v11);
    }
    *((_DWORD *)this + 15) = v12 != 0;
  }
  if ( *((_DWORD *)this + 17) )
  {
    v13 = RpcServerUnregisterIfEx(&unk_180189B20, 0LL, 1);
    v14 = v13;
    if ( v13
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
        v13);
    }
    LOBYTE(v2) = v14 != 0;
    *((_DWORD *)this + 17) = v2;
  }
  return 0LL;
}
