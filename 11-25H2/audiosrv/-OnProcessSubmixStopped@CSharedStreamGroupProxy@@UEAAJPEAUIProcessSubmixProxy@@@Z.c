/*
 * XREFs of ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18007B530
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x1800A4048 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::OnProcessSubmixStopped(
        CSharedStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  --*((_DWORD *)this + 90);
  CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
  return 0LL;
}
