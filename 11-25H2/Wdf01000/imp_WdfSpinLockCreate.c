/*
 * XREFs of imp_WdfSpinLockCreate @ 0x1400085A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400086C4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x140057CCC (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        WDFSPINLOCK__ **SpinLock)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  int result; // eax
  unsigned __int64 v7; // rdx
  unsigned int v8; // r9d
  bool v9; // cf
  unsigned __int16 FxDriverGlobals; // si
  FxSpinLock *v11; // rax
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
    FxObjectHandleGetPtrAndGlobals(v3, SpinLockAttributes->ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
    v3 = pFxDriverGlobals;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(v3, retaddr);
  result = FxValidateObjectAttributes(v3, SpinLockAttributes, 0);
  if ( result >= 0 )
  {
    v9 = v3->FxVerifierLock != 0;
    *SpinLock = 0LL;
    FxDriverGlobals = v9 ? 0x100 : 0;
    v11 = (FxSpinLock *)FxObjectHandleAlloc2(
                          v3,
                          v7,
                          0x80uLL,
                          v8,
                          SpinLockAttributes,
                          FxDriverGlobals,
                          FxObjectTypeExternal);
    if ( v11 && (FxSpinLock::FxSpinLock(v11, v3, FxDriverGlobals), (v13 = v12) != 0LL) )
    {
      v14 = FxObject::Commit(v12, SpinLockAttributes, (void **)&lock, 0LL, 1u);
      if ( v14 < 0 )
        FxObject::DeleteFromFailedCreate(v13);
      else
        *SpinLock = lock;
      return v14;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
