/*
 * XREFs of ?Process@ReacquireResourceGroupWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z @ 0x1800EE5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ReacquireResourceGroupWorkItem::Process(
        ReacquireResourceGroupWorkItem *this,
        struct CConstraintModelResourceManager *a2)
{
  CConstraintModelResourceManager::DoReacquireResourceGroup(
    a2,
    (__int64)a2,
    (ReacquireResourceGroupWorkItem *)((char *)this + 16));
}
