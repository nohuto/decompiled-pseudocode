/*
 * XREFs of ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x14009AA40
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400743C8 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14001CFC0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x140044BE8 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x14009A63C (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

FX_POOL **__fastcall FxIoResReqList::_CreateFromWdmList(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_REQUIREMENTS_LIST *WdmRequirementsList,
        unsigned __int8 a3,
        __int64 a4)
{
  FX_POOL **v6; // rax
  FX_POOL **v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // esi
  FxIoResReqList *v11; // rbp
  FX_POOL **v12; // rax
  FxIoResList *v13; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  _IO_RESOURCE_LIST *pWdmResourceList; // [rsp+88h] [rbp+20h] BYREF

  v6 = FxObjectHandleAlloc2(
         FxDriverGlobals,
         (unsigned __int64)WdmRequirementsList,
         0xA0uLL,
         a4,
         0LL,
         0,
         FxObjectTypeExternal);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  FxResourceCollection::FxResourceCollection((FxResourceCollection *)v6, FxDriverGlobals, 0x1037u, 0xA0u, 3u);
  v7[19] = 0LL;
  *v7 = (FX_POOL *)FxIoResList::`vftable';
  *((_BYTE *)v7 + 144) = 3;
  if ( WdmRequirementsList )
  {
    v10 = 0;
    pWdmResourceList = WdmRequirementsList->List;
    *((_DWORD *)v7 + 39) = WdmRequirementsList->InterfaceType;
    *((_DWORD *)v7 + 38) = WdmRequirementsList->SlotNumber;
    if ( WdmRequirementsList->AlternativeLists )
    {
      v11 = (FxIoResReqList *)v7;
      while ( 1 )
      {
        v7 = (FX_POOL **)v11;
        v12 = FxObjectHandleAlloc2(FxDriverGlobals, v8, 0xA0uLL, v9, 0LL, 0, FxObjectTypeExternal);
        v13 = (FxIoResList *)v12;
        if ( !v12 )
          break;
        FxResourceCollection::FxResourceCollection((FxResourceCollection *)v12, FxDriverGlobals, 0x1035u, 0xA0u, 0);
        v13->m_OwningList = v11;
        v13->__vftable = (FxIoResList_vtbl *)FxIoResList::`vftable';
        v13->m_AccessFlags = v11->m_AccessFlags;
        FxObject::AssignParentObject(v13, v11);
        if ( (int)FxIoResList::BuildFromWdmList(v13, (_IO_RESOURCE_DESCRIPTOR **)&pWdmResourceList, v14, v15) < 0 )
          break;
        if ( ++v10 >= WdmRequirementsList->AlternativeLists )
          return v7;
      }
      v11->DeleteObject(v11);
      return 0LL;
    }
  }
  return v7;
}
