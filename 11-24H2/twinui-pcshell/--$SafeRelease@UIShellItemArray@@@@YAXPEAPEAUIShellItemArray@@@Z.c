/*
 * XREFs of ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802BF9AC
 * Callers:
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x180195FC4 (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?Next@CPinnedListEnum@@UEAAJKPEAPEFAU_ITEMIDLIST@@PEAK@Z @ 0x1801E3370 (-Next@CPinnedListEnum@@UEAAJKPEAPEFAU_ITEMIDLIST@@PEAK@Z.c)
 *     ??1CShallowContainerIterator@@QEAA@XZ @ 0x1802BF970 (--1CShallowContainerIterator@@QEAA@XZ.c)
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x18045872C (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z @ 0x1804593C0 (-SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z.c)
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1806889E0 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 *     ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG@Z @ 0x180688FE4 (-_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPE.c)
 *     ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180689138 (-_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEA.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180689440 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 *     ??1CPinList@@QEAA@XZ @ 0x18068AEEC (--1CPinList@@QEAA@XZ.c)
 *     ??1CPinnedListEnum@@AEAA@XZ @ 0x18068AFD4 (--1CPinnedListEnum@@AEAA@XZ.c)
 *     BindCtx_SetMode @ 0x18068C478 (BindCtx_SetMode.c)
 *     ?Destruct@PINENTRY@@QEAAXXZ @ 0x18068D77C (-Destruct@PINENTRY@@QEAAXXZ.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180692D90 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?Reset@CPinnedListEnum@@UEAAJXZ @ 0x180694800 (-Reset@CPinnedListEnum@@UEAAJXZ.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x180696CC8 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     ?_GetPinnableInfoImpl@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@3PEAPEAGPEAH@Z @ 0x180697C8C (-_GetPinnableInfoImpl@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 *     ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180699910 (-v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 *     BindCtx_RegisterObjectParam @ 0x1806C8D0C (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SafeRelease<IShellItemArray>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
