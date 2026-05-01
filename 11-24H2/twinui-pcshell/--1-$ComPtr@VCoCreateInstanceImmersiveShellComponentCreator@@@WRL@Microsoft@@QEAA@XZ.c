/*
 * XREFs of ??1?$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CC5D0
 * Callers:
 *     _wil::MakeOrThrow_CoCreateInstanceImmersiveShellComponentCreator__::_1_::dtor$0 @ 0x1806DE5A2 (_wil--MakeOrThrow_CoCreateInstanceImmersiveShellComponentCreator__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801F32B0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CoCreateInstanceImmersiveShellComponentCreator>::~ComPtr<CoCreateInstanceImmersiveShellComponentCreator>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
             result,
             a2);
  }
  return result;
}
