/*
 * XREFs of ?__clone@?$__func@V_lambda_5672878332238225f65002b03f0817fd_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x18040ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

void __fastcall wistd::__function::__func<_lambda_5672878332238225f65002b03f0817fd_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *> *)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx

  v2 = a2 + 1;
  *a2 = &wistd::__function::__func<_lambda_5672878332238225f65002b03f0817fd_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *> *)>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  v2[1] = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::InternalAddRef(v2 + 1);
}
