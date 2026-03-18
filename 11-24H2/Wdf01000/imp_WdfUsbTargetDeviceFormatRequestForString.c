/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009D0C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qid @ 0x140002A18 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqqd @ 0x140003694 (WPP_IFR_SF_qqqd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x14001E120 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z @ 0x14004D998 (-ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x14004F1D0 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qqqdD @ 0x14009CC98 (WPP_IFR_SF_qqqdD.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x14009FCF0 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceFormatRequestForString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *Memory,
        _WDFMEMORY_OFFSET *Offset,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  _FX_DRIVER_GLOBALS *v13; // rbx
  unsigned __int16 v14; // r14
  unsigned __int8 v15; // r15
  __int64 result; // rax
  unsigned int BufferLength; // eax
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // rdx
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+28h] [rbp-51h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp-21h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+60h] [rbp-19h] BYREF
  FxRequestBuffer buf; // [rsp+68h] [rbp-11h] BYREF
  __int64 v25; // [rsp+88h] [rbp+Fh]
  IFxMemory *pMemory; // [rsp+C8h] [rbp+4Fh] BYREF

  v25 = 0LL;
  pUsbDevice = 0LL;
  pMemory = 0LL;
  *(_QWORD *)&buf.DataType = 0LL;
  LODWORD(buf.u.Memory.Memory) = 0;
  pFxDriverGlobals = 0LL;
  *(_OWORD *)&buf.u.RefMdl.Offsets = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&buf,
    (_FX_DRIVER_GLOBALS **)&pUsbDevice);
  v13 = (_FX_DRIVER_GLOBALS *)pUsbDevice;
  v14 = LangID;
  v15 = StringIndex;
  if ( LOBYTE(pUsbDevice->m_IoCount) )
    WPP_IFR_SF_qqqdD(
      (_FX_DRIVER_GLOBALS *)pUsbDevice,
      v10,
      v11,
      v12,
      (const _GUID *)ObjectGlobals,
      UsbDevice,
      Request,
      Memory,
      StringIndex,
      LangID);
  FxObjectHandleGetPtr(v13, (unsigned __int64)Memory, 0x100Au, (void **)&pMemory);
  FxObjectHandleGetPtr(v13, (unsigned __int64)Request, 0x1008u, (void **)&pFxDriverGlobals);
  result = IFxMemory::ValidateMemoryOffsets(pMemory, Offset);
  if ( (int)result >= 0 )
  {
    FxRequestBuffer::SetMemory((FxRequestBuffer *)&buf.u, pMemory, Offset);
    BufferLength = FxRequestBuffer::GetBufferLength((FxRequestBuffer *)&buf.u);
    if ( (BufferLength & 1) != 0 )
    {
      if ( v13->FxVerboseOn )
        WPP_IFR_SF_qid(v13, 5u, 0xEu, 0xDu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Memory, BufferLength, -1073741811);
      return 3221225485LL;
    }
    else
    {
      v18 = FxUsbDevice::FormatStringRequest(
              *(FxUsbDevice **)&buf.DataType,
              (FxRequestBase *)pFxDriverGlobals,
              (FxRequestBuffer *)&buf.u,
              v15,
              v14);
      v19 = v18;
      if ( v18 >= 0 )
      {
        v20 = *(_QWORD *)&pFxDriverGlobals->FxPoolFrameworks.PagedLock.m_Lock.Contention;
        *(_QWORD *)(v20 + 104) = Memory;
        *(_BYTE *)(v20 + 114) = v15;
        *(_WORD *)(v20 + 112) = v14;
      }
      if ( v13->FxVerboseOn )
        WPP_IFR_SF_qqqd(v13, 5u, 0xEu, 0xEu, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, Request, Memory, v18);
      return v19;
    }
  }
  return result;
}
