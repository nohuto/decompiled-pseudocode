/*
 * XREFs of ??1BatchLayout@CSwitchItemGrid@@QEAA@XZ @ 0x1804C7948
 * Callers:
 *     ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1804C9020 (-RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804C9600 (-SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z.c)
 *     _CSwitchItemGrid::RemoveAllDescendants_::_1_::dtor$0 @ 0x1806EFE77 (_CSwitchItemGrid--RemoveAllDescendants_--_1_--dtor$0.c)
 *     _CSwitchItemGrid::SetItems_::_1_::dtor$0 @ 0x1806EFE89 (_CSwitchItemGrid--SetItems_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSwitchItemGrid::BatchLayout::~BatchLayout(CSwitchItemGrid::BatchLayout *this)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 208LL) + 64LL))(*(_QWORD *)this + 208LL);
}
