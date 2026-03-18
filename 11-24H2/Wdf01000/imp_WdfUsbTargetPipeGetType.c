/*
 * XREFs of imp_WdfUsbTargetPipeGetType @ 0x140066050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeGetType(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Pipe)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  FxUsbPipe *flags; // rbx
  unsigned __int64 PipeType; // rax
  FxUsbPipe_vtbl *v8; // rax
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  const _GUID *v12; // [rsp+20h] [rbp-48h]
  FxUsbPipe **p_pUsbPipe; // [rsp+50h] [rbp-18h] BYREF
  __int16 v14; // [rsp+58h] [rbp-10h]
  __int16 v15; // [rsp+5Ah] [rbp-Eh]
  int v16; // [rsp+5Ch] [rbp-Ch]
  FxUsbPipe *pUsbPipe; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( !Pipe )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1203uLL);
  LOWORD(v4) = 0;
  flags = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Pipe & 1) != 0 )
  {
    v4 = LOWORD(flags->__vftable);
    flags = (FxUsbPipe *)((char *)flags - v4);
  }
  if ( flags->m_Type == 4611 )
  {
    pUsbPipe = flags;
  }
  else
  {
    pUsbPipe = 0LL;
    p_pUsbPipe = &pUsbPipe;
    v15 = v4;
    v16 = 0;
    v8 = flags->__vftable;
    v14 = 4611;
    if ( v8->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pUsbPipe) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v9, v10, v11, v12, (const void *)Pipe, 0x1203u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Pipe, 0x1203uLL);
    }
    flags = pUsbPipe;
  }
  PipeType = flags->m_PipeInformation.PipeType;
  if ( PipeType < 4 )
    return (unsigned int)`FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType];
  return v2;
}
