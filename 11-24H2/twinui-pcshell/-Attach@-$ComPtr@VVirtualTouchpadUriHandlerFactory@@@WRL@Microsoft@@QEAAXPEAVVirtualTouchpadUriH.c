/*
 * XREFs of ?Attach@?$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x180458940
 * Callers:
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180458498 (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x180458530 (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180177D10 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualTouchpadUriHandlerFactory>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
               v4,
               a2);
  *a1 = a2;
  return result;
}
