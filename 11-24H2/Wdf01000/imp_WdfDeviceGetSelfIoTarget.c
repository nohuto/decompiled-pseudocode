/*
 * XREFs of imp_WdfDeviceGetSelfIoTarget @ 0x140074980
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFIOTARGET__ *__fastcall imp_WdfDeviceGetSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxPkgPnp *m_PkgPnp; // rax
  __int64 v3; // rax
  __int16 v4; // cx
  WDFIOTARGET__ *result; // rax
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp )
    return 0LL;
  if ( m_PkgPnp->m_Type != 4353 )
    return 0LL;
  v3 = *(_QWORD *)&m_PkgPnp[1].m_ObjectFlags;
  if ( !v3 )
    return 0LL;
  v4 = *(_WORD *)(v3 + 10);
  result = (WDFIOTARGET__ *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v4 )
    return 0LL;
  return result;
}
