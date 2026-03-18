/*
 * XREFs of imp_WdfWmiProviderGetDevice @ 0x14008D780
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfWmiProviderGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIPROVIDER__ *WmiProvider)
{
  FxDeviceBase *m_DeviceBase; // rax
  unsigned __int16 m_ObjectSize; // cx
  WDFDEVICE__ *result; // rax
  FxWmiProvider *pProvider; // [rsp+30h] [rbp+8h] BYREF

  pProvider = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)WmiProvider,
    0x1004u,
    (void **)&pProvider);
  m_DeviceBase = pProvider->m_Parent->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  result = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    return 0LL;
  return result;
}
