/*
 * XREFs of imp_WdfPdoGetParent @ 0x1400112E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1400115F0 (WPP_IFR_SF_sq.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_WdfPdoGetParent(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  _FX_DRIVER_GLOBALS **flags; // rbx
  __int64 v4; // rcx
  _FX_DRIVER_GLOBALS *v5; // rax
  _FX_DRIVER_GLOBALS *v6; // rsi
  WDFDEVICE__ *result; // rax
  _FX_DRIVER_GLOBALS *v8; // rax
  __int16 v9; // cx
  _FX_DRIVER_GLOBALS *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  _FX_DRIVER_GLOBALS ***v15; // [rsp+50h] [rbp-18h] BYREF
  __int16 v16; // [rsp+58h] [rbp-10h]
  __int16 v17; // [rsp+5Ah] [rbp-Eh]
  int v18; // [rsp+5Ch] [rbp-Ch]
  _FX_DRIVER_GLOBALS **v19; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  flags = (_FX_DRIVER_GLOBALS **)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v4) = 0;
  if ( (Device & 1) != 0 )
  {
    v4 = *(unsigned __int16 *)flags;
    flags = (_FX_DRIVER_GLOBALS **)((char *)flags - v4);
  }
  if ( *((_WORD *)flags + 4) == 4098 )
  {
    v19 = flags;
  }
  else
  {
    v19 = 0LL;
    v15 = &v19;
    v17 = v4;
    v18 = 0;
    v10 = *flags;
    v16 = 4098;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, _FX_DRIVER_GLOBALS ****))v10->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           flags,
           &v15) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags[2],
        v11,
        v12,
        v13,
        traceGuid,
        (const void *)Device,
        0x1002u,
        flags,
        *((unsigned __int16 *)flags + 4));
      FxVerifierBugCheckWorker(flags[2], WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = v19;
  }
  v5 = flags[81];
  v6 = flags[2];
  if ( v5 && LOWORD(v5->Linkage.Blink) == 4354 )
  {
    v8 = flags[28];
    v9 = WORD1(v8->Linkage.Blink);
    result = (WDFDEVICE__ *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9 )
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_sq(v6, 2u, 0x12u, 0xAu, WPP_FxDevicePdoAPI_cpp_Traceguids, "imp_WdfPdoGetParent", (const void *)Device);
    WPP_IFR_SF_D(v6, 2u, 0x12u, 0xDu, WPP_FxDevicePdoAPI_cpp_Traceguids, 0xC000000D);
    return 0LL;
  }
  return result;
}
