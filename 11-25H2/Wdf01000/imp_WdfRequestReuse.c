/*
 * XREFs of imp_WdfRequestReuse @ 0x14002BCB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x14002BE90 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfRequestReuse(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  unsigned __int8 v5; // dl
  __int64 v6; // rcx
  FxRequest *flags; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  FxRequest_vtbl *v13; // rax
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  const _GUID *_a1; // [rsp+20h] [rbp-48h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-18h] BYREF
  __int16 v18; // [rsp+58h] [rbp-10h]
  __int16 v19; // [rsp+5Ah] [rbp-Eh]
  int v20; // [rsp+5Ch] [rbp-Ch]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxRequest *pRequest; // [rsp+78h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v5 = 0;
  LOWORD(v6) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v6 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v6);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v19 = v6;
    v20 = 0;
    v13 = flags->__vftable;
    v18 = 4104;
    if ( v13->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v5, v14, v15, _a1, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !ReuseParams )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( ReuseParams->Size == 24 )
  {
    WdfBindInfo = m_Globals->WdfBindInfo;
    if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
      v10 = -4;
    else
      v10 = -2;
    v11 = ReuseParams->Flags;
    if ( (v11 & v10) != 0 )
    {
      WPP_IFR_SF_DDd(m_Globals, v5, 0x10u, 0xDu, WPP_FxRequestApi_cpp_Traceguids, v11, v10, -1073741811);
      return -1073741811;
    }
    else
    {
      return FxRequest::Reuse(flags, ReuseParams);
    }
  }
  else
  {
    WPP_IFR_SF_DDd(m_Globals, v5, 0x10u, 0xCu, WPP_FxRequestApi_cpp_Traceguids, ReuseParams->Size, 0x18u, -1073741811);
    return -1073741811;
  }
}
