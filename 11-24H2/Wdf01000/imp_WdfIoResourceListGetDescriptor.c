/*
 * XREFs of imp_WdfIoResourceListGetDescriptor @ 0x140098CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x140060AC0 (-GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z.c)
 */

_LIST_ENTRY **__fastcall imp_WdfIoResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY *Item; // rbx
  unsigned __int8 v6; // r8
  FxNonPagedObject *v7; // r9
  _LIST_ENTRY **result; // rax
  __int128 v9; // xmm1
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResList *pList; // [rsp+48h] [rbp+20h] BYREF

  pList = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList);
  FxNonPagedObject::Lock(pList, &irql, v4);
  Item = FxCollectionInternal::GetItem(&pList->FxCollectionInternal, Index);
  FxNonPagedObject::Unlock(v7, irql, v6);
  if ( !Item )
    return 0LL;
  result = &Item[8].Blink;
  v9 = *(_OWORD *)&Item[7].Blink;
  *(_LIST_ENTRY *)((char *)Item + 136) = *(_LIST_ENTRY *)((char *)Item + 104);
  *(_OWORD *)&Item[9].Blink = v9;
  return result;
}
