/*
 * XREFs of ??$InvokeAll@PEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@Z @ 0x1803781FC
 * Callers:
 *     ?OnNotifyRelaunch@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18037C100 (-OnNotifyRelaunch@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?OnNotifyRelaunch@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1803AB100 (-OnNotifyRelaunch@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008BB18 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_721e5e573830a3eafdff38e0e874721f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1803784F0 (--$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U-$ITypedEventHandler@PEAVCortana.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,Windows::Foundation::Rect>(
        __int64 a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  unsigned int v5; // edi
  volatile signed __int32 *v7; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v8[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v5 = 0;
  v7 = 0LL;
  wil::AcquireSRWLockExclusive(v8, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, (volatile signed __int32 **)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v8);
  if ( v7 )
  {
    v8[0] = (RTL_SRWLOCK *)&v9;
    v8[1] = a3;
    v5 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_721e5e573830a3eafdff38e0e874721f_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>>(
           v8,
           v7,
           a1);
  }
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  return v5;
}
