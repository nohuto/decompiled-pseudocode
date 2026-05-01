/*
 * XREFs of ?GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUguid@6@@Z @ 0x18066AD04
 * Callers:
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x18065A3FC (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUguid@6@@Z @ 0x18065ACD4 (-IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x18066D960 (-DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x18066F1E0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802CA838 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
RTL_SRWLOCK *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetSystemIdForDesktop(
        RTL_SRWLOCK *a1,
        RTL_SRWLOCK *a2,
        __m128i *a3)
{
  _QWORD *Ptr; // rdi
  _QWORD *i; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  RTL_SRWLOCK *v12[2]; // [rsp+28h] [rbp-50h] BYREF
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF

  v12[0] = a2;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(v12, a1);
  Ptr = a1[2].Ptr;
  for ( i = (_QWORD *)*Ptr; ; i = (_QWORD *)*i )
  {
    if ( i == Ptr )
    {
      winrt::hstring::hstring((winrt::hstring *)a2, &pvData);
      goto LABEL_13;
    }
    v11 = i[3];
    v8 = v11;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(&v11);
    v13 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 32LL))(v8, &v13) >= 0 )
    {
      v9 = v13 - a3->m128i_i64[0];
      if ( (_QWORD)v13 == a3->m128i_i64[0] )
        v9 = *((_QWORD *)&v13 + 1) - _mm_srli_si128(*a3, 8).m128i_u64[0];
      if ( !v9 )
        break;
    }
    if ( v8 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
  }
  winrt::hstring::hstring((winrt::hstring *)a2, (const struct winrt::hstring *)(i + 2));
  if ( v8 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
LABEL_13:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v12);
  return a2;
}
