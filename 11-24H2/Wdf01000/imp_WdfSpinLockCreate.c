/*
 * XREFs of imp_WdfSpinLockCreate @ 0x140020CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140020DF4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x140053CDC (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        WDFSPINLOCK__ **SpinLock)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  bool v9; // cf
  unsigned __int16 v10; // si
  FX_POOL **v11; // rax
  FxObject *v12; // rax
  FxObject *v13; // rbx
  int v14; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  WDFSPINLOCK__ *lock; // [rsp+70h] [rbp+18h] BYREF
  FxObject *pParent; // [rsp+78h] [rbp+20h] BYREF

  lock = 0LL;
  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  if ( FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], SpinLockAttributes, 0) >= 0 )
  {
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(
      v3,
      (unsigned __int64)SpinLockAttributes->ParentObject,
      0x1000u,
      (void **)&pParent,
      &pFxDriverGlobals);
    v3 = pFxDriverGlobals;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(v3, retaddr);
  result = FxValidateObjectAttributes(v3, SpinLockAttributes, 0);
  if ( (int)result >= 0 )
  {
    v9 = v3->FxVerifierLock != 0;
    *SpinLock = 0LL;
    v10 = v9 ? 0x100 : 0;
    v11 = FxObjectHandleAlloc2(v3, v7, 0x80uLL, v8, SpinLockAttributes, v10, FxObjectTypeExternal);
    if ( v11 && (FxSpinLock::FxSpinLock((FxSpinLock *)v11, v3, v10), (v13 = v12) != 0LL) )
    {
      v14 = FxObject::Commit(v12, SpinLockAttributes, (void **)&lock, 0LL, 1u);
      if ( v14 < 0 )
        FxObject::DeleteFromFailedCreate(v13);
      else
        *SpinLock = lock;
      return (unsigned int)v14;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
