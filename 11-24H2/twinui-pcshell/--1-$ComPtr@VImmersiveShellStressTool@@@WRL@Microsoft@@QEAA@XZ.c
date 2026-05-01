/*
 * XREFs of ??1?$ComPtr@VImmersiveShellStressTool@@@WRL@Microsoft@@QEAA@XZ @ 0x180182A9C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSwitchController_IUnknown__::_1_::dtor$1 @ 0x1806D5E3D (_Microsoft--WRL--Details--MakeAndInitialize_CSwitchController_IUnknown__--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180182C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveShellStressTool>::~ComPtr<ImmersiveShellStressTool>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::Release(result);
  }
  return result;
}
