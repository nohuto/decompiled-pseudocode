/*
 * XREFs of ??0BatchLayout@CSwitchItemGrid@@QEAA@PEAV1@@Z @ 0x1804C77C4
 * Callers:
 *     ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1804C9020 (-RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804C9600 (-SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CSwitchItemGrid::BatchLayout *__fastcall CSwitchItemGrid::BatchLayout::BatchLayout(
        CSwitchItemGrid::BatchLayout *this,
        struct CSwitchItemGrid *a2)
{
  *(_QWORD *)this = a2;
  (*(void (__fastcall **)(char *))(*((_QWORD *)a2 + 26) + 56LL))((char *)a2 + 208);
  return this;
}
