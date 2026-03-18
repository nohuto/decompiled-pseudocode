/*
 * XREFs of ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x14009DECC
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009C010 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x14007B68C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x14009D9FC (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x14009DB58 (--_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxUsbPipe::InitContinuousReader(
        FxUsbPipe *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength)
{
  const void *v6; // rdx
  unsigned __int8 NumPendingReads; // al
  unsigned __int8 v9; // bl
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v11; // r8
  ULONG Tag; // r10d
  FX_POOL **v13; // rax
  FxUsbPipeContinuousReader *v14; // rax
  __int64 v15; // r9
  FxUsbPipeContinuousReader *v16; // rbx
  int v17; // ebp
  __m128i v18; // [rsp+40h] [rbp-28h]
  __m128i v19; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( this->m_Reader )
  {
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0x1Cu, WPP_FxUsbPipe_cpp_Traceguids, v6, -1073741436);
    return 3221225860LL;
  }
  else
  {
    NumPendingReads = Config->NumPendingReads;
    if ( NumPendingReads )
    {
      v9 = Config->NumPendingReads;
      if ( NumPendingReads > 0xAu )
        v9 = 10;
    }
    else
    {
      v9 = 2;
    }
    m_Globals = this->m_Globals;
    v11 = retaddr;
    v18.m128i_i64[0] = 0LL;
    v18.m128i_i64[1] = 64LL;
    Tag = m_Globals->Tag;
    if ( !m_Globals->FxPoolTrackingOn )
      v11 = 0LL;
    v19 = v18;
    v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v19, 120LL * ((unsigned int)v9 - 1) + 216, Tag, v11);
    if ( v13
      && (FxUsbPipeContinuousReader::FxUsbPipeContinuousReader((FxUsbPipeContinuousReader *)v13, this, v9),
          (v16 = v14) != 0LL) )
    {
      v17 = FxUsbPipeContinuousReader::Config(v14, Config, TotalBufferLength, v15);
      if ( v17 >= 0 )
      {
        v16->m_ReadCompleteCallback = Config->EvtUsbTargetPipeReadComplete;
        v16->m_ReadCompleteContext = Config->EvtUsbTargetPipeReadCompleteContext;
        v16->m_ReadersFailedCallback = Config->EvtUsbTargetPipeReadersFailed;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Reader, (signed __int64)v16, 0LL) )
          FxUsbPipeContinuousReader::`scalar deleting destructor'(v16);
        return 0LL;
      }
      else
      {
        FxUsbPipeContinuousReader::`scalar deleting destructor'(v16);
        return (unsigned int)v17;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
}
