/*
 * XREFs of imp_WdfWorkItemEnqueue @ 0x14005CC50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x14005CD4C (-Enqueue@FxWorkItem@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfWorkItemEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 WorkItem)
{
  __int64 v3; // rcx
  FxWorkItem *flags; // rbx
  FxWorkItem_vtbl *v5; // rax
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  const _GUID *v9; // [rsp+20h] [rbp-48h]
  FxWorkItem **p_pFxWorkItem; // [rsp+50h] [rbp-18h] BYREF
  __int16 v11; // [rsp+58h] [rbp-10h]
  __int16 v12; // [rsp+5Ah] [rbp-Eh]
  int v13; // [rsp+5Ch] [rbp-Ch]
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
    v12 = v3;
    v13 = 0;
    v5 = flags->__vftable;
    v11 = 4133;
    if ( v5->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pFxWorkItem) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v6, v7, v8, v9, (const void *)WorkItem, 0x1025u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, WorkItem, 0x1025uLL);
    }
    flags = pFxWorkItem;
  }
  FxWorkItem::Enqueue(flags);
}
