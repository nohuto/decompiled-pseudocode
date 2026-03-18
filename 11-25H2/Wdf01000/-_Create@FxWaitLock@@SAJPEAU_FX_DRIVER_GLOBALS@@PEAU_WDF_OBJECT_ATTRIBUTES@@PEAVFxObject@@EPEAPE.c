/*
 * XREFs of ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x14005203C
 * Callers:
 *     imp_WdfWaitLockCreate @ 0x140051F90 (imp_WdfWaitLockCreate.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A96A0 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1400521E4 (--0FxWaitLockInternal@@QEAA@XZ.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400532F8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxWaitLock::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        __int64 AssignDriverAsDefaultParent,
        WDFWAITLOCK__ **LockHandle)
{
  unsigned __int8 v6; // bp
  FX_POOL **v9; // rax
  FX_POOL **v10; // rdi
  int v12; // ebx

  v6 = AssignDriverAsDefaultParent;
  *LockHandle = 0LL;
  v9 = FxObjectHandleAlloc2(
         FxDriverGlobals,
         (unsigned __int64)Attributes,
         0x90uLL,
         AssignDriverAsDefaultParent,
         Attributes,
         0,
         FxObjectTypeExternal);
  v10 = v9;
  if ( v9 )
  {
    FxObject::FxObject((FxObject *)v9, 0x1023u, 0x90u, FxDriverGlobals);
    FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)(v10 + 13));
    *v10 = (FX_POOL *)FxObject::`vftable';
    KeInitializeEvent((PRKEVENT)(v10 + 13), SynchronizationEvent, 1u);
    *((_BYTE *)v10 + 128) = 1;
    v12 = FxObject::Commit((FxObject *)v10, Attributes, (void **)LockHandle, ParentObject, v6);
    if ( v12 < 0 )
      FxObject::DeleteFromFailedCreate((FxObject *)v10);
    return (unsigned int)v12;
  }
  else
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xDu, 0xAu, WPP_FxWaitLock_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
