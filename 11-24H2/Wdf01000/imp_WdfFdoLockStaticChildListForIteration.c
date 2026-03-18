/*
 * XREFs of imp_WdfFdoLockStaticChildListForIteration @ 0x140035230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfFdoLockStaticChildListForIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Fdo)
{
  __int64 v3; // rcx
  FxDevice *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxPkgPnp *m_PkgPnp; // rbx
  __int64 v7; // rbx
  unsigned __int64 *v8; // rdi
  KIRQL v9; // si
  int v10; // ecx
  _FX_DRIVER_GLOBALS *v11; // rax
  FxDevice_vtbl *v12; // rax
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  __int16 v16; // dx
  const void *v17; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxDevice **p_pDevice; // [rsp+50h] [rbp-18h] BYREF
  __int16 v20; // [rsp+58h] [rbp-10h]
  __int16 v21; // [rsp+5Ah] [rbp-Eh]
  int v22; // [rsp+5Ch] [rbp-Ch]
  FxDevice *pDevice; // [rsp+78h] [rbp+10h] BYREF

  if ( !Fdo )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v3) = 0;
  flags = (FxDevice *)(~Fdo & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Fdo & 1) != 0 )
  {
    v3 = LOWORD(flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    flags = (FxDevice *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4098 )
  {
    pDevice = flags;
  }
  else
  {
    pDevice = 0LL;
    p_pDevice = &pDevice;
    v21 = v3;
    v22 = 0;
    v12 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v20 = 4098;
    if ( v12->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v13, v14, v15, traceGuid, (const void *)Fdo, 0x1002u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Fdo, 0x1002uLL);
    }
    flags = pDevice;
  }
  m_Globals = flags->m_Globals;
  if ( flags->m_Legacy || (m_PkgPnp = flags->m_PkgPnp, m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxDeviceFdoAPI_cpp_Traceguids, (const void *)Fdo);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    v7 = *(_QWORD *)&m_PkgPnp[1].m_Type;
    v8 = (unsigned __int64 *)(v7 + 264);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 264));
    KeClearEvent((PRKEVENT)(v7 + 328));
    v10 = *(_DWORD *)(v7 + 320) + 1;
    *(_DWORD *)(v7 + 320) = v10;
    v11 = *(_FX_DRIVER_GLOBALS **)(v7 + 16);
    if ( v11->FxVerboseOn )
    {
      v16 = *(_WORD *)(v7 + 10);
      v17 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v16 )
        v17 = 0LL;
      WPP_IFR_SF_qd(v11, 5u, 0xCu, 0x11u, WPP_FxChildList_cpp_Traceguids, v17, v10);
    }
    KeReleaseSpinLock(v8, v9);
  }
}
