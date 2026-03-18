/*
 * XREFs of ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01D1408
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01C2454 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01CE870 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D354C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C00E47AE (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BB1C8 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01CFA4C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01D7C18 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessQFrameNode(
        struct _KTHREAD **this,
        struct CPointerQFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4)
{
  const struct CPointerInputFrame *v5; // r14
  struct CPointerQFrame *v6; // rdi
  char v8; // bl
  BOOL v9; // eax
  int v10; // edx
  __int16 v11; // r8
  int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  void *v18; // r8
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      69,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  v9 = CPointerInfoNode::IsForManipulationThread(a4);
  if ( !v9 || (v12 = 1, (*((_DWORD *)a4 + 1) & 0x200) != 0) )
    v12 = 0;
  if ( (v10 || v9 && (v11 & 0x400) != 0) && !v12 )
    CTouchProcessor::ProcessEnterLeave(this, v5, a4);
  v13 = *((_DWORD *)v6 + 35);
  v14 = v13;
  if ( (v13 & 1) != 0 && v12 )
  {
    v14 = v13 & 0xFFFFFFFE;
    *((_DWORD *)v6 + 36) = 22;
    *((_DWORD *)v6 + 35) = v14;
  }
  if ( (v14 & 1) != 0 )
  {
    if ( (*(_DWORD *)a4 & 1) == 0 )
    {
      CTouchProcessor::TrackCoalesceOnArrival(v14, v6, 2LL);
      *((_DWORD *)v6 + 35) &= ~1u;
      v14 = *((unsigned int *)v6 + 35);
    }
    if ( (v14 & 1) != 0 )
    {
      v15 = *(_DWORD *)a4;
      if ( (*(_DWORD *)a4 & 8) != 0 || (v15 & 0x10) != 0 || (v15 & 0x40) != 0 || (v15 & 0x20) != 0 )
      {
        CTouchProcessor::TrackCoalesceOnArrival(v14, v6, 16LL);
        *((_DWORD *)v6 + 35) &= ~1u;
        v14 = *((unsigned int *)v6 + 35);
      }
    }
  }
  v16 = v14;
  if ( (v14 & 8) == 0 && (*(_DWORD *)a4 & 0x100000) != 0 && !v12 )
  {
    CTouchProcessor::TrackCoalesceOnArrival(v14, v6, 9LL);
    *((_DWORD *)v6 + 35) |= 8u;
    v16 = *((_DWORD *)v6 + 35);
  }
  if ( (v16 & 1) == 0 || (v16 & 8) != 0 )
  {
    v16 &= ~2u;
    *((_DWORD *)v6 + 35) = v16;
  }
  if ( (v16 & 2) != 0 )
  {
    v19 = 1;
    *((_DWORD *)v6 + 35) ^= (*((_DWORD *)v6 + 35) ^ (2
                                                   * CTouchProcessor::CanCoalesceNodeWithPrevious(
                                                       this,
                                                       v5,
                                                       a4,
                                                       0LL,
                                                       v6,
                                                       (enum CPointerCoalesce *)&v19))) & 2;
    if ( (*((_DWORD *)v6 + 35) & 2) == 0 )
      CTouchProcessor::TrackCoalesceOnArrival(v17, v6, v19);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v8 = 0;
  if ( (_BYTE)v16 || v8 )
  {
    v18 = &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids;
    LOBYTE(v18) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      (_DWORD)v18,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      70,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  }
}
