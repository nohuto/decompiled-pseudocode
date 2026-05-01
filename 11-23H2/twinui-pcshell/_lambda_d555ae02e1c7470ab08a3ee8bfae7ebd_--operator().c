/*
 * XREFs of _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18004DA20
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run @ 0x18004DA10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$InvokeDelegates@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_a48ac9b22b1e533b001c2bec4634345b_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1803CA620 (--$InvokeDelegates@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@U-$ITypedEventHandler@PEAVSplashS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator()(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+38h] BYREF
  __int64 v12; // [rsp+78h] [rbp+40h] BYREF
  __int64 v13; // [rsp+80h] [rbp+48h] BYREF
  __int64 v14; // [rsp+88h] [rbp+50h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *a1;
  *(_BYTE *)(v2 + 129) = 0;
  v3 = *(__int64 **)(v2 + 96);
  v4 = *(__int64 **)(v2 + 104);
  while ( v3 != v4 )
  {
    v12 = *v3;
    v5 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v11 = 0LL;
    v6 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    if ( v6(v5, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v11) >= 0 )
    {
      LOBYTE(v7) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, v7);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    ++v3;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = *a1 + 72;
  v13 = *a1;
  v14 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v12, v8 + 8);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v11, v8);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v12);
  if ( v11 )
  {
    v10[0] = &v13;
    v10[1] = &v14;
    Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_a48ac9b22b1e533b001c2bec4634345b_,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>>(
      v10,
      v11,
      v8);
  }
  return Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v11);
}
