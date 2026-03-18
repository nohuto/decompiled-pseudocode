/*
 * XREFs of imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009CD00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x140038CF0 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x14005AEF8 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceAllocAndQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *StringMemoryAttributes,
        WDFMEMORY__ **StringMemory,
        unsigned __int16 *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  unsigned __int16 *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rsi
  __int64 result; // rax
  unsigned __int16 v12; // r12
  int String; // edi
  __int64 Tag; // r9
  FxMemoryObject *v15; // rsi
  unsigned __int16 *v16; // rax
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-10h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int64 retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int16 numChars; // [rsp+90h] [rbp+40h] BYREF
  FxMemoryObject *pBuffer; // [rsp+A8h] [rbp+58h] BYREF

  pBuffer = 0LL;
  hMemory = 0LL;
  pUsbDevice = 0LL;
  numChars = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    (_FX_DRIVER_GLOBALS **)&pBuffer);
  if ( !StringMemory )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)pBuffer, retaddr);
  v9 = NumCharacters;
  *StringMemory = 0LL;
  if ( v9 )
    *v9 = 0;
  v10 = (_FX_DRIVER_GLOBALS *)pBuffer;
  result = FxVerifierCheckIrqlLevel((_FX_DRIVER_GLOBALS *)pBuffer, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v10, StringMemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      v12 = LangID;
      String = FxUsbDevice::GetString(pUsbDevice, 0LL, &numChars, StringIndex, LangID, 0LL, 0LL);
      if ( String >= 0 && numChars )
      {
        Tag = v10->Tag;
        pBuffer = 0LL;
        if ( (int)FxMemoryObject::_Create(
                    v10,
                    StringMemoryAttributes,
                    ExDefaultNonPagedPoolType,
                    Tag,
                    2LL * numChars,
                    &pBuffer) < 0 )
          return 3221225626LL;
        v15 = pBuffer;
        String = FxObject::Commit(pBuffer, StringMemoryAttributes, (void **)&hMemory, 0LL, 1u);
        if ( String < 0
          || (v16 = (unsigned __int16 *)v15->GetBuffer(&v15->IFxMemory),
              String = FxUsbDevice::GetString(pUsbDevice, v16, &numChars, StringIndex, v12, 0LL, 0LL),
              String < 0) )
        {
          FxObject::DeleteFromFailedCreate(v15);
        }
        else
        {
          if ( v9 )
            *v9 = numChars;
          *StringMemory = hMemory;
        }
      }
      return (unsigned int)String;
    }
  }
  return result;
}
