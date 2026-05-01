/*
 * XREFs of ?RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804130F8
 * Callers:
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804119D8 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800D1014 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::RemovePendingView(PeoplePaneViewManager *this, struct IApplicationView *a2)
{
  char *v2; // rbp
  char *i; // rdi
  struct IApplicationView *v6; // rbx
  char *v7; // rbx
  struct IApplicationView *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)*((_QWORD *)this + 22);
  for ( i = (char *)*((_QWORD *)this + 21); i != v2; i += 8 )
  {
    v9 = *(struct IApplicationView **)i;
    v6 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
    if ( v6 == a2 )
      break;
  }
  v7 = (char *)*((_QWORD *)this + 22);
  if ( i == v7 )
    return 2147942487LL;
  while ( 1 )
  {
    i += 8;
    if ( i == v7 )
      break;
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)i - 1, i);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*((_QWORD *)this + 22) - 8LL));
  *((_QWORD *)this + 22) -= 8LL;
  return 0LL;
}
