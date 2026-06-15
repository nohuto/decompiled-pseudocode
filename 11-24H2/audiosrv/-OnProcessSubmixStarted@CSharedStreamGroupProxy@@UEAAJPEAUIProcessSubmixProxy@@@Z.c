/*
 * XREFs of ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180068310
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x1800A047C (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::OnProcessSubmixStarted(
        CSharedStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  ++*((_DWORD *)this + 90);
  CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
  return 0LL;
}
