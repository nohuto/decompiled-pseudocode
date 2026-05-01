/*
 * XREFs of ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180099E10
 * Callers:
 *     ?_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiveApplication@@@Z @ 0x18009967C (-_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiv.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180038040 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18009A168 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009A190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_18009A190.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::GetFrameByWindow(
        CApplicationFrameService *this,
        HWND a2,
        struct IApplicationFrameProxy **a3)
{
  __int64 v6; // rcx
  unsigned __int64 i; // r9
  unsigned int v8; // ebx
  __int64 *v9; // r8
  unsigned __int64 j; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v14; // r8
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v15);
  v6 = 0LL;
  v15 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    v8 = -2147023728;
    if ( i >= *((_QWORD *)this + 13) )
      break;
    v9 = (__int64 *)(*((_QWORD *)this + 12) + 8 * i);
    if ( *(HWND *)(*v9 + 80) == a2 )
    {
LABEL_12:
      Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v9);
      v15 = *v14;
      v11 = v15 + 8;
      *a3 = (struct IApplicationFrameProxy *)(v15 + 8);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, v12);
      v8 = 0;
      v6 = v15;
      goto LABEL_6;
    }
  }
  for ( j = 0LL; j < *((_QWORD *)this + 9); ++j )
  {
    v9 = (__int64 *)(*((_QWORD *)this + 8) + 8 * j);
    if ( *(HWND *)(*v9 + 80) == a2 )
      goto LABEL_12;
    v8 = -2147023728;
  }
LABEL_6:
  if ( v6 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release();
  }
  return v8;
}
