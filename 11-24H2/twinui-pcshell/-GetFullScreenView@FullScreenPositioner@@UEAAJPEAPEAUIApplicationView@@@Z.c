/*
 * XREFs of ?GetFullScreenView@FullScreenPositioner@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1803247B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall FullScreenPositioner::GetFullScreenView(FullScreenPositioner *this, struct IApplicationView **a2)
{
  struct IApplicationView **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IApplicationView **)((char *)this + 120);
  if ( !*((_QWORD *)this + 15) )
    return 2147943568LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 15);
  *a2 = *v2;
  return 0LL;
}
