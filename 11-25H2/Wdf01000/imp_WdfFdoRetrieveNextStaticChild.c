/*
 * XREFs of imp_WdfFdoRetrieveNextStaticChild @ 0x14001EB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_WdfFdoRetrieveNextStaticChild(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Fdo,
        WDFDEVICE__ *PreviousChild,
        unsigned int Flags)
{
  __int64 v7; // rcx
  FxDevice *v8; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  bool v13; // di
  KIRQL v14; // r9
  __int64 *i; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int16 v18; // ax
  WDFDEVICE__ *v19; // rcx
  __int64 v20; // rbx
  __int16 v21; // ax
  __int64 *j; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int16 v26; // cx
  FxDevice_vtbl *v27; // rax
  unsigned __int8 v28; // dl
  unsigned int v29; // r8d
  unsigned __int16 v30; // r9
  __int64 v31; // rcx
  __int16 v32; // ax
  WDFDEVICE__ *v33; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  FxDevice **p_pDevice; // [rsp+50h] [rbp-38h] BYREF
  __int16 v36; // [rsp+58h] [rbp-30h]
  __int16 v37; // [rsp+5Ah] [rbp-2Eh]
  int v38; // [rsp+5Ch] [rbp-2Ch]
  FxDevice *pDevice; // [rsp+98h] [rbp+10h] BYREF

  if ( !Fdo )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v7) = 0;
  v8 = (FxDevice *)(~Fdo & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Fdo & 1) != 0 )
  {
    v7 = LOWORD(v8->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v8 = (FxDevice *)((char *)v8 - v7);
  }
  if ( v8->m_Type == 4098 )
  {
    pDevice = v8;
  }
  else
  {
    pDevice = 0LL;
    p_pDevice = &pDevice;
    v37 = v7;
    v38 = 0;
    v27 = v8->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v36 = 4098;
    if ( v27->QueryInterface(v8, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(v8->m_Globals, v28, v29, v30, traceGuid, (const void *)Fdo, 0x1002u, v8, v8->m_Type);
      FxVerifierBugCheckWorker(v8->m_Globals, WDF_INVALID_HANDLE, Fdo, 0x1002uLL);
    }
    v8 = pDevice;
  }
  m_Globals = v8->m_Globals;
  if ( !Flags || (Flags & 0xFFFFFFF8) != 0 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Flags);
    goto LABEL_27;
  }
  if ( v8->m_Legacy || (m_PkgPnp = v8->m_PkgPnp, m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xEu, WPP_FxDeviceFdoAPI_cpp_Traceguids, (const void *)Fdo);
LABEL_27:
    FxVerifierDbgBreakPoint(m_Globals);
    return 0LL;
  }
  v11 = *(_QWORD *)&m_PkgPnp[1].m_Type;
  v12 = 0LL;
  v13 = PreviousChild == 0LL;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 264));
  if ( *(_DWORD *)(v11 + 320) )
  {
    if ( (Flags & 1) != 0 )
    {
      for ( i = *(__int64 **)(v11 + 272); i != (__int64 *)(v11 + 272); i = (__int64 *)*i )
      {
        if ( !*((_BYTE *)i + 82) )
        {
          v16 = i[3];
          if ( v13
            && (*((_DWORD *)i + 4) == 2
             || (Flags & 2) != 0 && (unsigned int)(*((_DWORD *)i + 4) - 3) <= 1
             || (Flags & 4) != 0 && *((_DWORD *)i + 4) == 1) )
          {
            v20 = *(_QWORD *)(v16 + 8);
            v21 = *(_WORD *)(v20 + 10);
            v12 = v20 ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !v21 )
              v12 = 0LL;
            if ( !v12 )
              break;
            goto LABEL_25;
          }
          v17 = *(_QWORD *)(v16 + 8);
          v18 = *(_WORD *)(v17 + 10);
          v19 = (WDFDEVICE__ *)(v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v18 )
            v19 = 0LL;
          if ( v19 == PreviousChild )
            v13 = 1;
        }
      }
    }
    if ( (Flags & 4) != 0 )
    {
      for ( j = *(__int64 **)(v11 + 288); j != (__int64 *)(v11 + 288); j = (__int64 *)*j )
      {
        if ( !*((_BYTE *)j + 42) )
        {
          v24 = *(j - 2);
          if ( v13 && *((_DWORD *)j + 4) == 1 )
          {
            v25 = *(_QWORD *)(v24 + 8);
            v26 = *(_WORD *)(v25 + 10);
            v12 = v25 ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !v26 )
              v12 = 0LL;
            break;
          }
          v31 = *(_QWORD *)(v24 + 8);
          v32 = *(_WORD *)(v31 + 10);
          v33 = (WDFDEVICE__ *)(v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v32 )
            v33 = 0LL;
          if ( v33 == PreviousChild )
            v13 = 1;
        }
      }
    }
  }
LABEL_25:
  KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 264), v14);
  return (WDFDEVICE__ *)v12;
}
