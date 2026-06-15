/*
 * XREFs of ?OnProcessSubmixLazyRequestStatusChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800F2F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBaseStreamGroupProxy::OnProcessSubmixLazyRequestStatusChanged(
        CBaseStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  char v3; // al

  v3 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 168LL))(a2);
  CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(this, v3 != 0 ? 1 : -1);
}
