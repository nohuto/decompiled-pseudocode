/*
 * XREFs of ??1?$ComPtr@VMPCRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x18009B81C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCRawInputProvider_IRawInputProvider_IRawInputClient___&__::_1_::dtor$1 @ 0x1801CC89E (_Microsoft--WRL--Details--MakeAndInitialize_MPCRawInputProvider_IRawInputProvider_IRawInputClien.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180051810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCRawInputProvider>::~ComPtr<MPCRawInputProvider>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
             result,
             a2);
  }
  return result;
}
