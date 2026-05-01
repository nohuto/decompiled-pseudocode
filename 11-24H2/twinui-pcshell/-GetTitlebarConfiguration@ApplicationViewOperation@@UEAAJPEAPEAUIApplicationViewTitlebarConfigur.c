/*
 * XREFs of ?GetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801900F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ApplicationViewOperation::GetTitlebarConfiguration(
        ApplicationViewOperation *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  struct IApplicationViewTitlebarConfiguration **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IApplicationViewTitlebarConfiguration **)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) )
    return 2147943568LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 23);
  *a2 = *v2;
  return 0LL;
}
