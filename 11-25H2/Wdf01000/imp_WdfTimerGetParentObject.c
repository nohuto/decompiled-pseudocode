/*
 * XREFs of imp_WdfTimerGetParentObject @ 0x14006B780
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfTimerGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFTIMER__ *Timer)
{
  FxObject *m_Object; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v4; // rcx
  FxTimer *pFxTimer; // [rsp+30h] [rbp+8h] BYREF

  pFxTimer = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Timer, 0x1028u, (void **)&pFxTimer);
  m_Object = pFxTimer->m_Object;
  if ( !m_Object )
    return 0LL;
  m_ObjectSize = m_Object->m_ObjectSize;
  v4 = (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    return 0LL;
  return v4;
}
