/*
 * XREFs of ??$?RPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@_lambda_19c629caca3fc168e565f554a8149559_@@QEBA?A_P$$QEAPEAUIInspectable@@$$QEAPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x180012130
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_19c629caca3fc168e565f554a8149559_@@$0?0PEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@PEAUIAppMemoryUsageLimitChangingEventArgs@23@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@3@@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x1800120F0 (-Invoke@-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180001AE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_19c629caca3fc168e565f554a8149559_::operator()<IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v7; // edi
  __int64 v8; // rcx
  unsigned int v10; // ebx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = 0LL;
  v11 = 0LL;
  if ( !v3 )
    goto LABEL_7;
  v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
         v3,
         &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0,
         &v11);
  if ( v7 >= 0 )
  {
    v4 = v11;
LABEL_7:
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *a2, *a3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    return v10;
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
