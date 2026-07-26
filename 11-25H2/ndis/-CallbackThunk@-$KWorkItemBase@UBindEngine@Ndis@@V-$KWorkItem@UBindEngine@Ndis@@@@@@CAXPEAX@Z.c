/*
 * XREFs of ?CallbackThunk@?$KWorkItemBase@UBindEngine@Ndis@@V?$KWorkItem@UBindEngine@Ndis@@@@@@CAXPEAX@Z @ 0x1401735A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KWorkItemBase<Ndis::BindEngine,KWorkItem<Ndis::BindEngine>>::CallbackThunk(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 40))(*(_QWORD *)(a1 + 32));
}
