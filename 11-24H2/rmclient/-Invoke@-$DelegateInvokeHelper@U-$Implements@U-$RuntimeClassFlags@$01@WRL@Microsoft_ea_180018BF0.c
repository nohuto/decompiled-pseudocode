/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_02a86428158461f4dc557e8a6d2b58da_@@$0?0PEAUIInspectable@@PEAU5@@?$DelegateArgTraits@P8?$IEventHandler_impl@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIInspectable@@0@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@0@Z @ 0x180018BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180001AE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180018668 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<IInspectable *>::*)(IInspectable *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_02a86428158461f4dc557e8a6d2b58da_,-1,IInspectable *,IInspectable *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  signed int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v9 = 0LL;
  if ( v3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b,
           &v9);
    if ( v7 < 0 )
      goto LABEL_5;
    v5 = v9;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
LABEL_5:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v7);
  return (unsigned int)v7;
}
