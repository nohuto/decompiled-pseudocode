/*
 * XREFs of FxIoResourceListInsertDescriptor @ 0x140098650
 * Callers:
 *     imp_WdfIoResourceListAppendDescriptor @ 0x140098AF0 (imp_WdfIoResourceListAppendDescriptor.c)
 *     imp_WdfIoResourceListInsertDescriptor @ 0x140098D30 (imp_WdfIoResourceListInsertDescriptor.c)
 * Callees:
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14001CFC0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140046AE8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x14009A4D4 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int __fastcall FxIoResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  int result; // eax
  FX_POOL **v10; // rax
  FX_POOL **v11; // rbx
  int v12; // edi
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxIoResList *pList; // [rsp+70h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList,
    &pFxDriverGlobals);
  if ( !Descriptor )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( (pList->m_OwningList->m_AccessFlags & 1) != 0 )
  {
    v10 = FxObjectHandleAlloc2(pFxDriverGlobals, v7, 0xA8uLL, v8, 0LL, 0, FxObjectTypeInternal);
    v11 = v10;
    if ( v10 )
    {
      FxObject::FxObject((FxObject *)v10, (_FX_DRIVER_GLOBALS *)0x1016, 0, pFxDriverGlobals);
      *v11 = (FX_POOL *)FxObject::`vftable';
      *(_OWORD *)(v11 + 13) = *(_OWORD *)&Descriptor->Option;
      *(_OWORD *)(v11 + 15) = *(_OWORD *)&Descriptor->u.BusNumber.MaxBusNumber;
      v12 = FxObject::AssignParentObject((FxObject *)v11, pList);
      if ( v12 >= 0 )
      {
        result = FxResourceCollection::AddAt(pList, Index, (FxObject *)v11);
        if ( result >= 0 )
          pList->m_OwningList->m_Changed = 1;
      }
      else
      {
        ((void (__fastcall *)(FX_POOL **))(*v11)->PagedLock.m_Lock.Owner)(v11);
        return v12;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  else
  {
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0xCu, 0xCu, WPP_FxResourceAPI_cpp_Traceguids, ResourceList);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
    return -1073741790;
  }
  return result;
}
