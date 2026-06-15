/*
 * XREFs of ?GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z @ 0x180062A60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x1800568AC (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetStreamGroup(CBaseStreamGroupProxy *this, struct IStreamGroup **a2)
{
  struct IStreamGroup **v2; // rbx

  v2 = (struct IStreamGroup **)((char *)this + 80);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 10);
  *a2 = *v2;
  return 0LL;
}
