/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_fe166ee785c77a0b82d43104ca244eaa_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured@@@details@wil@@QEAA_NXZ @ 0x18000D810 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _lambda_fe166ee785c77a0b82d43104ca244eaa_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  int Ptr; // ebx
  __int64 Ptr_low; // r8
  __int64 v6; // rdx
  int Ptr_high; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+3Ch] [rbp+14h]

  if ( !IsDebuggerPresent()
    && (!CallWithHangTimeout::s_isRemoteProcessBeingDebuggedFunction
     || !(unsigned int)CallWithHangTimeout::s_isRemoteProcessBeingDebuggedFunction()) )
  {
    AcquireSRWLockShared(Context + 2);
    Ptr = (int)Context[3].Ptr;
    if ( Context != (RTL_SRWLOCK *)-16LL )
      ReleaseSRWLockShared(Context + 2);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured>::GetImpl'::`2'::impl)
      && !Ptr )
    {
      if ( CallWithHangTimeout::s_additionalProcessQueryFunction )
        Ptr = CallWithHangTimeout::s_additionalProcessQueryFunction();
      else
        Ptr = 0;
    }
    Ptr_low = LODWORD(Context[1].Ptr);
    Ptr_high = HIDWORD(Context[1].Ptr);
    if ( Ptr )
    {
      v8 = Ptr;
      v6 = 2LL;
    }
    else
    {
      v6 = 1LL;
    }
    ReportCoreHang(&Ptr_high, v6, Ptr_low, 32808LL);
  }
}
