/*
 * XREFs of imp_WdfRequestSetCompletionRoutine @ 0x1400569F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfRequestSetCompletionRoutine(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _FX_DRIVER_GLOBALS *CompletionRoutine,
        _FX_DRIVER_GLOBALS *CompletionContext)
{
  __int64 v7; // rcx
  _FX_DRIVER_GLOBALS **flags; // rbx
  _FX_DRIVER_GLOBALS *v9; // rax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  const _GUID *v13; // [rsp+20h] [rbp-58h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-28h] BYREF
  __int16 v15; // [rsp+58h] [rbp-20h]
  __int16 v16; // [rsp+5Ah] [rbp-1Eh]
  int v17; // [rsp+5Ch] [rbp-1Ch]
  FxRequest *pRequest; // [rsp+88h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v7) = 0;
  flags = (_FX_DRIVER_GLOBALS **)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v7 = *(unsigned __int16 *)flags;
    flags = (_FX_DRIVER_GLOBALS **)((char *)flags - v7);
  }
  if ( *((_WORD *)flags + 4) != 4104 )
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v16 = v7;
    v17 = 0;
    v9 = *flags;
    v15 = 4104;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, FxRequest ***))v9->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           flags,
           &p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags[2],
        v10,
        v11,
        v12,
        v13,
        (const void *)Request,
        0x1008u,
        flags,
        *((unsigned __int16 *)flags + 4));
      FxVerifierBugCheckWorker(flags[2], WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = (_FX_DRIVER_GLOBALS **)pRequest;
  }
  flags[25] = CompletionContext;
  flags[24] = CompletionRoutine;
}
