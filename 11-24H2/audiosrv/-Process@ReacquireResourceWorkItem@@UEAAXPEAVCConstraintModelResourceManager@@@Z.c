/*
 * XREFs of ?Process@ReacquireResourceWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z @ 0x1800EE610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ReacquireResourceWorkItem::Process(
        ReacquireResourceWorkItem *this,
        struct CConstraintModelResourceManager *a2)
{
  CConstraintModelResourceManager::DoReacquireSaDeviceResource(a2, *((_DWORD *)this + 2), (unsigned __int64 **)this + 2);
}
