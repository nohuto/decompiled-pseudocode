/*
 * XREFs of ??1CShallowContainerIterator@@QEAA@XZ @ 0x1802BF970
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x180067CFC (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806001DC (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806004A4 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$7 @ 0x1806CDA27 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$7.c)
 *     _CLauncherTipContextMenu::_AddFolderLinksToCommands_::_1_::dtor$0 @ 0x1806D6717 (_CLauncherTipContextMenu--_AddFolderLinksToCommands_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile_::_1_::dtor$3 @ 0x1806FEB34 (_CLauncherTipContextMenu--AddMissingLinksFromDefaultProfile_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$2 @ 0x1806FEB58 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$2.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$4 @ 0x1806FEB6A (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$4.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802BF9AC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CShallowContainerIterator::~CShallowContainerIterator(CShallowContainerIterator *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  SafeRelease<IShellItemArray>((char *)this + 8);
}
