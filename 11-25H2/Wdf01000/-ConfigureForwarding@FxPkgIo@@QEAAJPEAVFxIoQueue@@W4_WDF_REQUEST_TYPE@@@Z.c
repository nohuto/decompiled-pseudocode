/*
 * XREFs of ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1400A0B68
 * Callers:
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1400917E0 (imp_WdfDeviceConfigureRequestDispatching.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1400425FC (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x14005F334 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     WPP_IFR_SF_Lqd @ 0x140082BB8 (WPP_IFR_SF_Lqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgIo::ConfigureForwarding(FxPkgIo *this, FxIoQueue *TargetQueue, _WDF_REQUEST_TYPE RequestType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 _a3; // r14
  unsigned int v7; // edi
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // ax
  const void *v11; // rbx
  unsigned int v12; // r8d
  FxIoQueue *m_DefaultQueue; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v15; // rbx
  FxIoQueue *v16; // rdx
  unsigned __int16 v17; // ax
  const void *v18; // rbx
  unsigned __int8 v19; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  _a3 = RequestType;
  v7 = 0;
  irql = 0;
  if ( FxIoQueue::IsIoEventHandlerRegistered(TargetQueue, RequestType) )
  {
    FxNonPagedObject::Lock(this, &irql, v9);
    m_DefaultQueue = this->m_DefaultQueue;
    if ( TargetQueue == m_DefaultQueue )
    {
      m_ObjectSize = TargetQueue->m_ObjectSize;
      v15 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v15 = 0LL;
      v7 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x19u, WPP_FxPkgIo_cpp_Traceguids, v15, -1073741808);
    }
    else
    {
      v16 = this->m_DispatchTable[_a3];
      if ( !v16 || v16 == m_DefaultQueue )
      {
        this->m_DispatchTable[_a3] = TargetQueue;
        FxObject::MarkNoDeleteDDI(TargetQueue, ObjectLock);
        goto LABEL_16;
      }
      v17 = TargetQueue->m_ObjectSize;
      v18 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v17 )
        v18 = 0LL;
      v7 = -1071644156;
      WPP_IFR_SF_Lqd(m_Globals, (unsigned __int8)v16, v12, 0x1Au, WPP_FxPkgIo_cpp_Traceguids, _a3, v18, -1071644156);
    }
    FxVerifierDbgBreakPoint(m_Globals);
LABEL_16:
    FxNonPagedObject::Unlock(this, irql, v19);
    return v7;
  }
  v10 = TargetQueue->m_ObjectSize;
  v11 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v10 )
    v11 = 0LL;
  v7 = -1073741808;
  WPP_IFR_SF_Lqd(m_Globals, v8, v9, 0x18u, WPP_FxPkgIo_cpp_Traceguids, _a3, v11, -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v7;
}
