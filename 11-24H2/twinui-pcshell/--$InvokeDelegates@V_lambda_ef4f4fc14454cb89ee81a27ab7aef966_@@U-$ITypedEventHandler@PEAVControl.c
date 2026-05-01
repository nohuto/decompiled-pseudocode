/*
 * XREFs of ??$InvokeDelegates@V_lambda_ef4f4fc14454cb89ee81a27ab7aef966_@@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAVViewPositionChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_ef4f4fc14454cb89ee81a27ab7aef966_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAVViewPositionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18017DEB0
 * Callers:
 *     ??$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAVViewPositionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180372810 (--$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@S.c)
 * Callees:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18003B1EC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@S_ea_18003B1EC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x18017DF90 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_ef4f4fc14454cb89ee81a27ab7aef966_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ControlCenterExperienceManager *,Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs *>>(
        __int64 a1,
        volatile int *a2,
        RTL_SRWLOCK *a3)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // esi
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 3), a2);
    v13 = 0LL;
    v5 = v6;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v13);
  }
  v7 = *(__int64 **)(v5 + 16);
  if ( v7 != *(__int64 **)(v5 + 24) )
  {
    v8 = *(_QWORD **)(a1 + 8);
    v9 = *(_QWORD **)a1;
    do
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v7 + 24LL))(
              *v7,
              (*v9 + 32LL) & -(__int64)(*v9 != 0LL),
              *v8);
      v11 = v10;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 0LL, 0LL);
        if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v7);
      }
      ++v7;
    }
    while ( v7 != *(__int64 **)(v5 + 24) );
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v5);
  return 0LL;
}
