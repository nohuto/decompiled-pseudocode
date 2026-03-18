/*
 * XREFs of FxCmResourceListInsertDescriptor @ 0x14009855C
 * Callers:
 *     imp_WdfCmResourceListAppendDescriptor @ 0x140098870 (imp_WdfCmResourceListAppendDescriptor.c)
 *     imp_WdfCmResourceListInsertDescriptor @ 0x140098900 (imp_WdfCmResourceListInsertDescriptor.c)
 * Callees:
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14001CFC0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140046AE8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x14009A4D4 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int __fastcall FxCmResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *v4; // rdi
  _FX_DRIVER_GLOBALS *v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  FX_POOL **v10; // rax
  FX_POOL **v11; // rbx
  int v12; // edi
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  FxCmResList *pList; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pList = 0LL;
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !Descriptor )
    FxVerifierNullBugCheck(v7, retaddr);
  FxObjectHandleGetPtr(v7, (unsigned __int64)List, 0x1036u, (void **)&pList);
  v10 = FxObjectHandleAlloc2(v4, v8, 0x90uLL, v9, 0LL, 0, FxObjectTypeInternal);
  v11 = v10;
  if ( !v10 )
    return -1073741670;
  FxObject::FxObject((FxObject *)v10, (_FX_DRIVER_GLOBALS *)0x1017, 0, v4);
  *v11 = (FX_POOL *)FxObject::`vftable';
  *(_OWORD *)(v11 + 13) = *(_OWORD *)&Descriptor->Type;
  *((_DWORD *)v11 + 30) = *((_DWORD *)&Descriptor->u.Memory48 + 3);
  v12 = FxObject::AssignParentObject((FxObject *)v11, pList);
  if ( v12 >= 0 )
    return FxResourceCollection::AddAt(pList, Index, (FxObject *)v11);
  ((void (__fastcall *)(FX_POOL **))(*v11)->PagedLock.m_Lock.Owner)(v11);
  return v12;
}
