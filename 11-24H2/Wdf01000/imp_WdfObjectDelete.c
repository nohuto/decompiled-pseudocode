/*
 * XREFs of imp_WdfObjectDelete @ 0x140056B70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfObjectDelete(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Object)
{
  __int64 v3; // rcx
  unsigned __int16 *flags; // rbx
  _FX_DRIVER_GLOBALS *v5; // rsi
  __int64 v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxObject **p_pObject; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+5Ch] [rbp-Ch]
  FxObject *pObject; // [rsp+78h] [rbp+10h] BYREF

  if ( !Object )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
  LOWORD(v3) = 0;
  flags = (unsigned __int16 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 )
  {
    v3 = *flags;
    flags = (unsigned __int16 *)((char *)flags - v3);
  }
  if ( flags[4] == 4096 )
  {
    pObject = (FxObject *)flags;
  }
  else
  {
    pObject = 0LL;
    p_pObject = &pObject;
    v13 = v3;
    v14 = 0;
    v6 = *(_QWORD *)flags;
    v12 = 4096;
    if ( (*(int (__fastcall **)(unsigned __int16 *, FxObject ***))(v6 + 40))(flags, &p_pObject) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *((_FX_DRIVER_GLOBALS **)flags + 2),
        v7,
        v8,
        v9,
        traceGuid,
        (const void *)Object,
        0x1000u,
        flags,
        flags[4]);
      FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)flags + 2), WDF_INVALID_HANDLE, Object, 0x1000uLL);
    }
    flags = (unsigned __int16 *)pObject;
  }
  v5 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)flags + 2);
  if ( (flags[12] & 2) != 0 )
  {
    WPP_IFR_SF_qd(v5, 2u, 0x12u, 0xCu, WPP_FxObjectAPI_cpp_Traceguids, (const void *)Object, -1073741535);
    FxVerifierDbgBreakPoint(v5);
  }
  else
  {
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)flags + 48LL))(flags);
  }
}
