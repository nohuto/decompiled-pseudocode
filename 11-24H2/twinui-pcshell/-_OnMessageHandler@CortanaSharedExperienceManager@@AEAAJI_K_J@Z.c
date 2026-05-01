/*
 * XREFs of ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x18037F710
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008BB18 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$InvokeDelegates@V_lambda_87aac4e08c30183979af15eea60c4eb2_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_87aac4e08c30183979af15eea60c4eb2_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180378298 (--$InvokeDelegates@V_lambda_87aac4e08c30183979af15eea60c4eb2_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18037F648 (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1803801F0 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_OnMessageHandler(
        RTL_SRWLOCK *this,
        int a2,
        CortanaSharedExperienceManager *a3,
        int a4)
{
  volatile signed __int32 **v4; // rdi
  volatile signed __int32 *v6; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v7[2]; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+68h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( a2 == LODWORD(this[56].Ptr) )
    {
      CortanaSharedExperienceManager::_ResetActivationTimeoutPolicy((CortanaSharedExperienceManager *)this);
    }
    else if ( a2 == LODWORD(this[58].Ptr) )
    {
      CortanaSharedExperienceManager::_OnDeferredSuspensionTimer((CortanaSharedExperienceManager *)this);
    }
  }
  else if ( a3 == (CortanaSharedExperienceManager *)this )
  {
    v4 = (volatile signed __int32 **)&this[39];
    v9 = a4;
    v8 = this;
    v6 = 0LL;
    wil::AcquireSRWLockExclusive(v7, this + 40);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v6, v4);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v7);
    if ( v6 )
    {
      v7[0] = (RTL_SRWLOCK *)&v8;
      v7[1] = (RTL_SRWLOCK *)&v9;
      Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_87aac4e08c30183979af15eea60c4eb2_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>>(
        v7,
        (__int64)v6,
        (RTL_SRWLOCK *)v4);
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
    }
  }
  return 0LL;
}
