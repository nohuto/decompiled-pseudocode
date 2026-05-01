/*
 * XREFs of ?AnimateClipChangedElement@SwitchItemCloseAnimationCoordinator@@MEAAXAEBUClipChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804D8E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SwitchItemCloseAnimationCoordinator::AnimateClipChangedElement(
        SwitchItemCloseAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::ClipChangedInfo *a2)
{
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 104LL))(*(_QWORD *)a2, (char *)a2 + 8, 19LL);
}
