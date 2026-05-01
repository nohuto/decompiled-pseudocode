/*
 * XREFs of ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1802C7000
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x180067CFC (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806001DC (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806004A4 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CShallowContainerIterator *__fastcall CShallowContainerIterator::CShallowContainerIterator(
        CShallowContainerIterator *this,
        struct IShellItem *a2,
        int a3)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 6) = a3;
  ((void (__fastcall *)(struct IShellItem *))a2->lpVtbl->AddRef)(a2);
  return this;
}
