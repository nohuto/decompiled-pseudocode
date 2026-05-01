/*
 * XREFs of ??4?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180195E78
 * Callers:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180195DA0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_180195DA0.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180021AE0 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180025228 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18003F524 (--0-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 **v4; // rdi
  volatile signed __int32 *v5; // rax
  volatile signed __int32 **v6; // r15
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // r14
  volatile signed __int32 *v9; // rax

  if ( *(_DWORD *)(a1 + 312) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  v4 = (volatile signed __int32 **)(a2 + 280);
  if ( *(_QWORD *)(a2 + 280) )
  {
    *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
    if ( (volatile signed __int32 **)(a1 + 280) != v4 )
    {
      wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 280));
      v5 = *v4;
      *(_QWORD *)(a1 + 280) = *v4;
      if ( v5 )
        _InterlockedIncrement(v5);
    }
  }
  else
  {
    v6 = (volatile signed __int32 **)(a1 + 280);
    v7 = (volatile signed __int32 *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      *v7 = 1;
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)(v7 + 2),
        a2 + 8);
      wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 280));
      *v6 = v8;
      *(_QWORD *)(a1 + 272) = (unsigned __int64)(v8 + 2) & -(__int64)(v8 != 0LL);
      if ( v4 != v6 )
      {
        wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a2 + 280));
        v9 = *v6;
        *v4 = *v6;
        if ( v9 )
          _InterlockedIncrement(v9);
      }
      *(_QWORD *)(a2 + 272) = *(_QWORD *)(a1 + 272);
      *(_QWORD *)(a2 + 320) = *(_QWORD *)(a1 + 272) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 320) = *(_QWORD *)(a1 + 272) + 40LL;
  return a1;
}
