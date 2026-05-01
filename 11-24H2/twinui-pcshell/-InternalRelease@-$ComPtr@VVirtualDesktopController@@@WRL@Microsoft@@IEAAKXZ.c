/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ @ 0x180494690
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopController@@@Z @ 0x180493550 (--$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualD.c)
 *     ?VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18049604C (-VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopController2@5678@UIVirtualDesktopController3@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E7100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVir_ea_1801E7100.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopController>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController3,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
