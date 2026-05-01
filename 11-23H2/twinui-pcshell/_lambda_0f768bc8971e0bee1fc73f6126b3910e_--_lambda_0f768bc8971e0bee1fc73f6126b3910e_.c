/*
 * XREFs of _lambda_0f768bc8971e0bee1fc73f6126b3910e_::_lambda_0f768bc8971e0bee1fc73f6126b3910e_ @ 0x18044BB2C
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18044C80C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18044BCF0 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18044BCF0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0f768bc8971e0bee1fc73f6126b3910e_::_lambda_0f768bc8971e0bee1fc73f6126b3910e_(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  __int64 v9; // rcx

  v9 = *a2;
  *(_QWORD *)a1 = *a2;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *(_QWORD *)(a1 + 8) = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 8));
  *(_QWORD *)(a1 + 16) = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_BYTE *)(a1 + 24) = *a5;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 32,
    a6);
  *(_QWORD *)(a1 + 32) = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  return a1;
}
