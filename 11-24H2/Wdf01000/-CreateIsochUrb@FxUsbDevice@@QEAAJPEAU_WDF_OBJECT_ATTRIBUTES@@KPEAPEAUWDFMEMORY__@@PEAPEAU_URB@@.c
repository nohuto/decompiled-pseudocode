/*
 * XREFs of ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14007252C
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x140072470 (imp_WdfUsbTargetDeviceCreateIsochUrb.c)
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x14001EC64 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x14001FA10 (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140020DF4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     USBD_UrbFree @ 0x140066D7C (USBD_UrbFree.c)
 *     USBD_IsochUrbAllocate @ 0x140072768 (USBD_IsochUrbAllocate.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxUsbDevice::CreateIsochUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v10; // eax
  int v11; // ebx
  _FX_DRIVER_GLOBALS *v12; // rsi
  signed int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  FX_POOL **v16; // rax
  FxObject *v17; // rax
  FxObject *v18; // rsi
  _URB **v19; // rdi
  FxObject *pParent; // [rsp+40h] [rbp-20h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+48h] [rbp-18h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  _URB *urbLocal; // [rsp+90h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  hMemory = 0LL;
  pParent = 0LL;
  pFxDriverGlobals = m_Globals;
  v10 = FxValidateObjectAttributesForParentHandle(m_Globals, Attributes, 0);
  v11 = v10;
  if ( v10 >= 0 )
  {
    FxObjectHandleGetPtrAndGlobals(
      m_Globals,
      (unsigned __int64)Attributes->ParentObject,
      0x1000u,
      (void **)&pParent,
      &pFxDriverGlobals);
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, pParent) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x23u, WPP_FxUsbDevice_cpp_Traceguids);
      v11 = -1073741811;
      goto LABEL_20;
    }
    v12 = pFxDriverGlobals;
  }
  else
  {
    if ( v10 != -1071644142 )
      goto LABEL_20;
    v12 = this->m_Globals;
    pParent = this;
  }
  v11 = FxValidateObjectAttributes(v12, Attributes, 0);
  if ( v11 >= 0 )
  {
    if ( !UrbMemory )
      FxVerifierNullBugCheck(v12, retaddr);
    *UrbMemory = 0LL;
    v13 = USBD_IsochUrbAllocate(this->m_USBDHandle, NumberOfIsochPackets, &urbLocal);
    v11 = v13;
    if ( v13 < 0 )
    {
      urbLocal = 0LL;
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x24u, WPP_FxUsbDevice_cpp_Traceguids, v13);
    }
    else
    {
      v16 = FxObjectHandleAlloc2(v12, v14, 0x88uLL, v15, Attributes, 0, FxObjectTypeExternal);
      if ( v16
        && (FxUsbUrb::FxUsbUrb((FxUsbUrb *)v16, v12, this->m_USBDHandle, urbLocal, 12 * NumberOfIsochPackets + 152),
            (v18 = v17) != 0LL) )
      {
        urbLocal = 0LL;
        v11 = FxObject::Commit(v17, Attributes, (void **)&hMemory, pParent, 1u);
        if ( v11 >= 0 )
        {
          v19 = Urb;
          *UrbMemory = hMemory;
          if ( v19 )
            *v19 = (_URB *)((__int64 (__fastcall *)(FxObject *))v18[1].SelfDestruct)(&v18[1]);
          return (unsigned int)v11;
        }
        FxObject::DeleteFromFailedCreate(v18);
      }
      else
      {
        v11 = -1073741670;
      }
    }
  }
LABEL_20:
  if ( urbLocal )
    USBD_UrbFree(this->m_USBDHandle, urbLocal);
  return (unsigned int)v11;
}
