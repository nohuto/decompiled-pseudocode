/*
 * XREFs of ?CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805531D0
 * Callers:
 *     ?CreateRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805533B0 (-CreateRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$MakeAgileCallback@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@PEAVCVirtualDesktopManager@@P84@EAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@3@@Z@wil@@YA?AV?$ComPtr@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@@WRL@Microsoft@@$$QEAPEAVCVirtualDesktopManager@@$$QEAP84@EAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Z@Z @ 0x18055081C (--$MakeAgileCallback@U-$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@ZPEAU786@@details@wil@@YA?AV?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@1@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@Z1@Z @ 0x1805512B0 (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@I.c)
 *     ??1?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAA@XZ @ 0x180552648 (--1-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAA@XZ.c)
 *     ??4?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805529F4 (--4-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAAEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::CreateRemoteDesktop(
        CVirtualDesktopManager *this,
        HSTRING a2,
        struct IVirtualDesktop **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, HSTRING, struct IVirtualDesktop **); // rbx
  int v13; // eax
  struct IVirtualDesktop *v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // r8
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v20[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  char v23; // [rsp+A0h] [rbp+30h] BYREF
  struct IVirtualDesktop *v24; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), v20);
  if ( a3 )
    *a3 = 0LL;
  if ( *((_DWORD *)this + 49) )
  {
    v6 = -2147019873;
    v7 = 2147947423LL;
    v8 = 279LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v7);
    goto LABEL_17;
  }
  v23 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 27) + 56LL))(*((_QWORD *)this + 27), &v23);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 285LL;
    goto LABEL_7;
  }
  LOBYTE(v10) = v23 != 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 128LL))(*((_QWORD *)this + 12), v10);
  v24 = 0LL;
  v11 = *((_QWORD *)this + 12);
  v12 = *(__int64 (__fastcall **)(__int64, HSTRING, struct IVirtualDesktop **))(*(_QWORD *)v11 + 120LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  v13 = v12(v11, a2, &v24);
  v6 = v13;
  if ( v13 >= 0 )
  {
    if ( a3 )
    {
      v14 = v24;
      v24 = 0LL;
      *a3 = v14;
    }
    if ( !*((_QWORD *)this + 34) && !v23 )
    {
      *(_QWORD *)&v19 = CVirtualDesktopManager::OnRemoteDesktopConnected;
      DWORD2(v19) = 0;
      v21[0] = v19;
      *(_QWORD *)&v19 = (char *)this - 8;
      wil::MakeAgileCallback<Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>,CVirtualDesktopManager *,long (CVirtualDesktopManager::*)(IInspectable *,Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *)>(
        &v25,
        (__int64 *)&v19,
        v21);
      v16 = wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::IRemoteSessionWindowManager,long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *>(
              v21,
              *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27),
              v15);
      wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::operator=(
        (__int64 *)this + 34,
        v16);
      wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::~unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>((__int64)v21);
      v17 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x121,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  }
LABEL_17:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v20);
  return v6;
}
