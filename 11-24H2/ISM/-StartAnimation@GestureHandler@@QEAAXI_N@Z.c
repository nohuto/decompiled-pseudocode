/*
 * XREFs of ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180146F24
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180143610 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180058940 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x180095978 (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18009BFDC (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180146610 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::StartAnimation(GestureHandler *this, unsigned int a2, char a3)
{
  struct IAnimationDataProvider *AnimationDataProvider; // rsi
  __int64 *v7; // rax
  __int64 (__fastcall *v8)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // r14
  void (__fastcall ***v9)(_QWORD); // rcx
  void (__fastcall ***v10)(_QWORD); // [rsp+58h] [rbp+20h] BYREF

  if ( !GestureHandler::IsGestureInvalid(this) && !*((_QWORD *)this + 31) )
  {
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v7 = (__int64 *)(*(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD), _QWORD))(*(_QWORD *)AnimationDataProvider + 24LL))(
                      AnimationDataProvider,
                      &v10,
                      a2);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)this + 31, v7);
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v10);
    v8 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 40LL);
    v9 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 31);
    v10 = v9;
    if ( v9 )
      (**v9)(v9);
    *((_QWORD *)this + 32) = v8(AnimationDataProvider, &v10);
    *((_QWORD *)this + 33) = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider
                                                                                        + 32LL))(AnimationDataProvider);
    GestureHandler::FeedAnimationDataIfNeeded(this, 0);
    *((_BYTE *)this + 240) = a3;
  }
}
