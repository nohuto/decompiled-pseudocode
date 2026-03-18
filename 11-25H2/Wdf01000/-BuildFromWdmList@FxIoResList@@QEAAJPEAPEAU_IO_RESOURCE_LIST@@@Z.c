/*
 * XREFs of ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x14009A560
 * Callers:
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x14009A964 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 * Callees:
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14002C940 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Add@FxCollection@@QEAAEPEAVFxObject@@@Z @ 0x1400405BC (-Add@FxCollection@@QEAAEPEAVFxObject@@@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400532F8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoResList::BuildFromWdmList(
        FxIoResList *this,
        _IO_RESOURCE_DESCRIPTOR **WdmResourceList,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v7; // ebp
  unsigned int v8; // r15d
  _IO_RESOURCE_DESCRIPTOR *p_u; // rdi
  FX_POOL **v10; // rax
  FX_POOL **v11; // r12

  v4 = 0;
  v7 = 0;
  v8 = *(_DWORD *)&(*WdmResourceList)->Flags;
  p_u = (_IO_RESOURCE_DESCRIPTOR *)&(*WdmResourceList)->u;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = FxObjectHandleAlloc2(
              this->m_Globals,
              (unsigned __int64)WdmResourceList,
              0xA8uLL,
              a4,
              0LL,
              0,
              FxObjectTypeInternal);
      v11 = v10;
      if ( !v10 )
        break;
      FxObject::FxObject((FxObject *)v10, (_FX_DRIVER_GLOBALS *)0x1016, 0, this->m_Globals);
      *v11 = (FX_POOL *)FxObject::`vftable';
      *(_OWORD *)(v11 + 13) = *(_OWORD *)&p_u->Option;
      *(_OWORD *)(v11 + 15) = *(_OWORD *)&p_u->u.BusNumber.MaxBusNumber;
      FxObject::AssignParentObject((FxObject *)v11, this);
      if ( !FxCollection::Add(this, (FX_POOL *)v11) )
        break;
      ++p_u;
      if ( ++v7 >= v8 )
        goto LABEL_5;
    }
    return (unsigned int)-1073741670;
  }
LABEL_5:
  if ( !FxCollection::Add(this->m_OwningList, (FX_POOL *)this) )
    return (unsigned int)-1073741670;
  *WdmResourceList = p_u;
  return v4;
}
