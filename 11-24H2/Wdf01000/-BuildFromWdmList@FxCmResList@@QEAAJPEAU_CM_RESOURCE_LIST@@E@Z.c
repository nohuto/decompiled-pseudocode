/*
 * XREFs of ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x140061DC4
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x140061820 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x140074E50 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 * Callees:
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14001CFC0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x140040788 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140046AE8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Add@FxCollection@@QEAAEPEAVFxObject@@@Z @ 0x14006250C (-Add@FxCollection@@QEAAEPEAVFxObject@@@Z.c)
 */

__int64 __fastcall FxCmResList::BuildFromWdmList(
        FxCmResList *this,
        _CM_RESOURCE_LIST *WdmResourceList,
        unsigned __int8 AccessFlags)
{
  unsigned int v4; // edi
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int Count; // r15d
  unsigned int i; // ebx
  FX_POOL **v12; // rax
  FX_POOL **v13; // rdi

  v4 = 0;
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  this->m_AccessFlags = AccessFlags;
  if ( WdmResourceList )
  {
    Count = WdmResourceList->List[0].PartialResourceList.Count;
    for ( i = 0; ; ++i )
    {
      WdmResourceList = (_CM_RESOURCE_LIST *)((char *)WdmResourceList + 20);
      v4 = 0;
      if ( i >= Count )
        break;
      v12 = FxObjectHandleAlloc2(this->m_Globals, v7, 0x90uLL, v8, 0LL, 0, FxObjectTypeInternal);
      v13 = v12;
      if ( v12 )
      {
        FxObject::FxObject((FxObject *)v12, (_FX_DRIVER_GLOBALS *)0x1017, 0, this->m_Globals);
        *v13 = (FX_POOL *)FxObject::`vftable';
        *(_OWORD *)(v13 + 13) = *(_OWORD *)&WdmResourceList->Count;
        *((_DWORD *)v13 + 30) = WdmResourceList->List[0].PartialResourceList.Count;
        FxObject::AssignParentObject((FxObject *)v13, this);
        if ( FxCollection::Add(this, (FxObject *)v13) )
          continue;
      }
      v4 = -1073741670;
      FxCollectionInternal::Clear(&this->FxCollectionInternal);
      return v4;
    }
  }
  return v4;
}
