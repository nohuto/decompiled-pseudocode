/*
 * XREFs of imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x14009B380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqqqd @ 0x140093C34 (WPP_IFR_SF_qqqqd.c)
 */

__int64 __fastcall imp_WdfIoTargetSelfAssignDefaultIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFQUEUE__ *Queue)
{
  FxDeviceBase *m_DeviceBase; // rbx
  FxDeviceBase *v6; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a5; // rbx
  bool v9; // zf
  unsigned __int16 v10; // ax
  const void *_a3; // rdx
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // ax
  const void *v15; // rbx
  FxIoQueue *pFxIoQueue; // [rsp+50h] [rbp-28h] BYREF
  _FX_DRIVER_GLOBALS *pGlobals; // [rsp+80h] [rbp+8h] BYREF
  FxIoTargetSelf *pTargetSelf; // [rsp+98h] [rbp+20h] BYREF

  pGlobals = 0LL;
  pTargetSelf = 0LL;
  pFxIoQueue = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)IoTarget,
    0x1205u,
    (void **)&pTargetSelf,
    &pGlobals);
  m_DeviceBase = pTargetSelf->m_DeviceBase;
  FxObjectHandleGetPtr(pGlobals, (unsigned __int64)Queue, 0x1003u, (void **)&pFxIoQueue);
  v6 = pFxIoQueue->m_DeviceBase;
  if ( m_DeviceBase != v6 )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v9 = m_ObjectSize == 0;
    v10 = v6->m_ObjectSize;
    if ( v9 )
      _a5 = 0LL;
    _a3 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v10 )
      _a3 = 0LL;
    WPP_IFR_SF_qqqqd(
      pGlobals,
      (unsigned __int8)WPP_FxIoTargetAPI_cpp_Traceguids,
      0xDu,
      0x3Au,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      Queue,
      _a3,
      IoTarget,
      _a5,
      -1073741808);
    return 3221225488LL;
  }
  if ( !BYTE5(m_DeviceBase[1].m_Globals) )
  {
    if ( LODWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) != 261 )
    {
      v13 = 60;
      goto LABEL_10;
    }
LABEL_15:
    pTargetSelf->m_DispatchQueue = pFxIoQueue;
    return 0LL;
  }
  if ( (m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x80u) != 0 )
    goto LABEL_15;
  v13 = 59;
LABEL_10:
  v14 = m_DeviceBase->m_ObjectSize;
  v15 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v14 )
    v15 = 0LL;
  WPP_IFR_SF_qd(pGlobals, 2u, 0xCu, v13, WPP_FxIoTargetAPI_cpp_Traceguids, v15, -1073741436);
  return 3221225860LL;
}
