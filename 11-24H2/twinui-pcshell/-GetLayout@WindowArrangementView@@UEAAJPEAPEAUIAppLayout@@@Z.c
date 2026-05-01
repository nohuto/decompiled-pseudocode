/*
 * XREFs of ?GetLayout@WindowArrangementView@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x1803C6850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall WindowArrangementView::GetLayout(WindowArrangementView *this, struct IAppLayout **a2)
{
  struct IAppLayout **v2; // rbx

  v2 = (struct IAppLayout **)((char *)this + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 9);
  *a2 = *v2;
  return 0LL;
}
