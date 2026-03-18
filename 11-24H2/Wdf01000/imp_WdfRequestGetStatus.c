/*
 * XREFs of imp_WdfRequestGetStatus @ 0x14005BFA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfRequestGetStatus(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned int a3)
{
  __int64 v4; // rcx
  FxRequest *flags; // rbx
  unsigned int Status; // edi
  FxRequest_vtbl *v8; // rax
  unsigned __int8 v9; // dl
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // r8
  const _GUID *v12; // [rsp+20h] [rbp-40h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-10h] BYREF
  __int16 v14; // [rsp+58h] [rbp-8h]
  __int16 v15; // [rsp+5Ah] [rbp-6h]
  int v16; // [rsp+5Ch] [rbp-4h]
  unsigned __int8 PreviousIrql; // [rsp+88h] [rbp+28h] BYREF
  FxRequest *pRequest; // [rsp+90h] [rbp+30h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v4) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v4 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v4);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v15 = v4;
    v16 = 0;
    v8 = flags->__vftable;
    v14 = 4104;
    if ( v8->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v9, a3, v10, v12, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  if ( flags->m_Globals->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(flags, &PreviousIrql, a3);
    Status = flags->m_Irp.m_Irp->IoStatus.Status;
    FxNonPagedObject::Unlock(flags, PreviousIrql, v11);
  }
  else
  {
    return (unsigned int)flags->m_Irp.m_Irp->IoStatus.Status;
  }
  return Status;
}
