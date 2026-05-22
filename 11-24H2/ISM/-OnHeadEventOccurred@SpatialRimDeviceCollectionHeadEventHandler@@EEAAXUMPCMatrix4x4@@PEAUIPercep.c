/*
 * XREFs of ?OnHeadEventOccurred@SpatialRimDeviceCollectionHeadEventHandler@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x180053590
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180051660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800536C0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  volatile int *v9; // rdx
  volatile int *v10; // rdx

  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *(_QWORD *)(a1 + 72) )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 12), v9);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)(a1 + 184), a3);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)(a1 + 192), a4);
    *(_OWORD *)(a1 + 120) = *a2;
    *(_OWORD *)(a1 + 136) = a2[1];
    *(_OWORD *)(a1 + 152) = a2[2];
    *(_OWORD *)(a1 + 168) = a2[3];
    if ( a1 != -80 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
    if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(SpatialRimDeviceCollectionHeadEventHandler *), __int64, __int64))(**(_QWORD **)(a1 + 72) + 152LL))(
           *(_QWORD *)(a1 + 72),
           _lambda_3288c3d6534f126e79500dd5b9660c9a_::_lambda_invoker_cdecl_,
           a1,
           3LL) < 0 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
        a1,
        v10);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
}
