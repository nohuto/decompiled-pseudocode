/*
 * XREFs of imp_WdfChildListCreate @ 0x14008B170
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x140041ED4 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x14008C8B0 (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfChildListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DeviceListAttributes,
        WDFCHILDLIST__ **DeviceList)
{
  _FX_DRIVER_GLOBALS *v8; // rbx
  void **v9; // rdi
  __int64 result; // rax
  int v11; // esi
  signed int v12; // eax
  unsigned int v13; // edi
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 totalDescriptionSize; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int64 retaddr; // [rsp+78h] [rbp+28h]
  FxDevice *pDevice; // [rsp+80h] [rbp+30h] BYREF
  FxChildList *pList; // [rsp+90h] [rbp+40h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  pList = 0LL;
  totalDescriptionSize = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  v8 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0xAu, WPP_FxChildListAPI_cpp_Traceguids, Device);
  if ( !Config )
    FxVerifierNullBugCheck(v8, retaddr);
  v9 = (void **)DeviceList;
  if ( !DeviceList )
    FxVerifierNullBugCheck(v8, retaddr);
  *DeviceList = 0LL;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    v11 = FxChildList::_ValidateConfig(v8, Config, &totalDescriptionSize);
    if ( v11 >= 0 )
    {
      result = FxValidateObjectAttributes(v8, DeviceListAttributes, 1);
      if ( (int)result >= 0 )
      {
        result = ((__int64 (__fastcall *)(FxDevice *))pDevice->AllocateEnumInfo)(pDevice);
        if ( (int)result >= 0 )
        {
          result = FxChildList::_CreateAndInit(
                     &pList,
                     v8,
                     DeviceListAttributes,
                     totalDescriptionSize,
                     pDevice,
                     Config,
                     0);
          if ( (int)result >= 0 )
          {
            v12 = FxObject::Commit(pList, DeviceListAttributes, v9, pDevice, 1u);
            v13 = v12;
            if ( v12 >= 0 )
            {
              pDevice->SetDeviceTelemetryInfoFlags(pDevice, DeviceInfoHasDynamicChildren);
            }
            else
            {
              WPP_IFR_SF_D(v8, 2u, 0xCu, 0xCu, WPP_FxChildListAPI_cpp_Traceguids, v12);
              FxObject::DeleteFromFailedCreate(pList);
            }
            return v13;
          }
        }
      }
    }
    else
    {
      WPP_IFR_SF_q(v8, 2u, 0xCu, 0xBu, WPP_FxChildListAPI_cpp_Traceguids, Device);
      return (unsigned int)v11;
    }
  }
  return result;
}
