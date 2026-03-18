/*
 * XREFs of ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14001F7DC
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateUrb @ 0x14001F660 (imp_WdfUsbTargetDeviceCreateUrb.c)
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x14001EC64 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x14001FA10 (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 *     USBD_UrbAllocate @ 0x14001FB30 (USBD_UrbAllocate.c)
 *     USBD_UrbFree @ 0x140066D7C (USBD_UrbFree.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxUsbDevice::CreateUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  void *ParentObject; // rdx
  int v10; // ebx
  signed int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  FX_POOL **v14; // rax
  FxObject *v15; // rax
  FxObject *v16; // r14
  WDFMEMORY__ *hMemory; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  _URB *urbLocal; // [rsp+A0h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+A8h] [rbp+48h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  hMemory = 0LL;
  pParent = 0LL;
  if ( !Attributes )
    goto LABEL_6;
  if ( Attributes->Size != 56 )
  {
    v10 = -1073741820;
    WPP_IFR_SF_qddd(
      m_Globals,
      (unsigned __int8)Attributes,
      6u,
      0xBu,
      WPP_FxValidateFunctions_hpp_Traceguids,
      Attributes,
      56,
      Attributes->Size,
      -1073741820);
    goto LABEL_21;
  }
  ParentObject = Attributes->ParentObject;
  if ( ParentObject )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, pParent) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x21u, WPP_FxUsbDevice_cpp_Traceguids);
      v10 = -1073741811;
      goto LABEL_21;
    }
  }
  else
  {
LABEL_6:
    pParent = this;
  }
  v10 = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( v10 < 0 )
    goto LABEL_21;
  if ( !UrbMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *UrbMemory = 0LL;
  v11 = USBD_UrbAllocate(this->m_USBDHandle, &urbLocal);
  v10 = v11;
  if ( v11 < 0 )
  {
    urbLocal = 0LL;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x22u, WPP_FxUsbDevice_cpp_Traceguids, v11);
LABEL_21:
    if ( urbLocal )
      USBD_UrbFree(this->m_USBDHandle, urbLocal);
    return (unsigned int)v10;
  }
  v14 = FxObjectHandleAlloc2(m_Globals, v12, 0x88uLL, v13, Attributes, 0, FxObjectTypeExternal);
  if ( !v14
    || (FxUsbUrb::FxUsbUrb((FxUsbUrb *)v14, m_Globals, this->m_USBDHandle, urbLocal, 0x98uLL), (v16 = v15) == 0LL) )
  {
    v10 = -1073741670;
    goto LABEL_21;
  }
  urbLocal = 0LL;
  v10 = FxObject::Commit(v15, Attributes, (void **)&hMemory, pParent, 1u);
  if ( v10 < 0 )
  {
    FxObject::DeleteFromFailedCreate(v16);
    goto LABEL_21;
  }
  *UrbMemory = hMemory;
  if ( Urb )
    *Urb = (_URB *)((__int64 (__fastcall *)(FxObject *))v16[1].SelfDestruct)(&v16[1]);
  return (unsigned int)v10;
}
