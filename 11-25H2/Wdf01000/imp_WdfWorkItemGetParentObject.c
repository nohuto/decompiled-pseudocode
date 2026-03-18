/*
 * XREFs of imp_WdfWorkItemGetParentObject @ 0x140065180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_WdfWorkItemGetParentObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 WorkItem)
{
  __int64 v3; // rcx
  FxWorkItem *flags; // rbx
  FxObject *m_Object; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v7; // rcx
  FxWorkItem_vtbl *v9; // rax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  const _GUID *v13; // [rsp+20h] [rbp-48h]
  FxWorkItem **p_pFxWorkItem; // [rsp+50h] [rbp-18h] BYREF
  __int16 v15; // [rsp+58h] [rbp-10h]
  __int16 v16; // [rsp+5Ah] [rbp-Eh]
  int v17; // [rsp+5Ch] [rbp-Ch]
  FxWorkItem *pFxWorkItem; // [rsp+78h] [rbp+10h] BYREF

  if ( !WorkItem )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1025uLL);
  LOWORD(v3) = 0;
  flags = (FxWorkItem *)(~WorkItem & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (WorkItem & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxWorkItem *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4133 )
  {
    pFxWorkItem = flags;
  }
  else
  {
    pFxWorkItem = 0LL;
    p_pFxWorkItem = &pFxWorkItem;
    v16 = v3;
    v17 = 0;
    v9 = flags->__vftable;
    v15 = 4133;
    if ( v9->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pFxWorkItem) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v10, v11, v12, v13, (const void *)WorkItem, 0x1025u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, WorkItem, 0x1025uLL);
    }
    flags = pFxWorkItem;
  }
  m_Object = flags->m_Object;
  if ( !m_Object )
    return 0LL;
  m_ObjectSize = m_Object->m_ObjectSize;
  v7 = (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    return 0LL;
  return v7;
}
