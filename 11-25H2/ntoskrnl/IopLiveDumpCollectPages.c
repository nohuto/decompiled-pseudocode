/*
 * XREFs of IopLiveDumpCollectPages @ 0x140596B54
 * Callers:
 *     IopLiveDumpCapture @ 0x1405967B4 (IopLiveDumpCapture.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405971C0 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B334 (IopLiveDumpGetMillisecondCounter.c)
 *     RtlCaptureContext @ 0x1404FA120 (RtlCaptureContext.c)
 *     HvlCollectLivedump @ 0x140586B50 (HvlCollectLivedump.c)
 *     IoFillDumpHeader @ 0x14058D79C (IoFillDumpHeader.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x1405978A4 (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x14059828C (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1405984D4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405988A0 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405991E0 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x140599F48 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059AD10 (IopLiveDumpUncorralProcessors.c)
 *     IopLiveDumpTraceNoArgs @ 0x14059FC50 (IopLiveDumpTraceNoArgs.c)
 *     KdDecodeDataBlock @ 0x1405ABC18 (KdDecodeDataBlock.c)
 *     KdEncodeDataBlock @ 0x1405ABD20 (KdEncodeDataBlock.c)
 *     KeSaveSupervisorState @ 0x1405B4AA4 (KeSaveSupervisorState.c)
 *     KiSaveProcessorControlState @ 0x14069EF40 (KiSaveProcessorControlState.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall IopLiveDumpCollectPages(__int64 a1)
{
  int v1; // eax
  __int64 MillisecondCounter; // rbp
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v6; // rdi
  __int64 v7; // rbx
  _OWORD *v8; // rbx
  _CONTEXT *Context; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // ebx
  unsigned __int64 v15; // rax
  int v16; // r8d
  int v17; // ebx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 80);
  MillisecondCounter = 0LL;
  if ( (v1 & 0x80u) != 0 )
  {
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
    v1 = *(_DWORD *)(a1 + 80);
    v4 = MillisecondCounter - *(_QWORD *)(a1 + 536);
    if ( (v1 & 1) != 0 )
      *(_QWORD *)(a1 + 456) = v4;
    else
      *(_QWORD *)(a1 + 496) = v4;
  }
  if ( (v1 & 1) == 0 )
    IoFillDumpHeader(
      *(_DWORD **)(a1 + 560),
      6,
      *(_DWORD *)a1,
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 32),
      (__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    RtlCaptureContext(CurrentPrcb->Context);
    KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
  }
  else
  {
    v6 = KeGetCurrentPrcb();
    v7 = *(_QWORD *)(a1 + 560);
    RtlCaptureContext(v6->Context);
    KiSaveProcessorControlState(&v6->ProcessorState);
    v8 = (_OWORD *)(v7 + 840);
    if ( v8 )
    {
      memset_0(v8, 0, 0xBB8uLL);
      Context = v6->Context;
      v10 = 9LL;
      do
      {
        v11 = *(_OWORD *)&Context->P1Home;
        Context = (_CONTEXT *)((char *)Context + 128);
        *v8 = v11;
        v8 += 8;
        *(v8 - 7) = Context[-1].VectorRegister[22];
        *(v8 - 6) = Context[-1].VectorRegister[23];
        *(v8 - 5) = Context[-1].VectorRegister[24];
        *(v8 - 4) = Context[-1].VectorRegister[25];
        *(v8 - 3) = *(_OWORD *)&Context[-1].VectorControl;
        *(v8 - 2) = *(_OWORD *)&Context[-1].LastBranchToRip;
        *(v8 - 1) = *(_OWORD *)&Context[-1].LastExceptionToRip;
        --v10;
      }
      while ( v10 );
      *v8 = *(_OWORD *)&Context->P1Home;
      v8[1] = *(_OWORD *)&Context->P3Home;
      v8[2] = *(_OWORD *)&Context->P5Home;
      v8[3] = *(_OWORD *)&Context->ContextFlags;
      v8[4] = *(_OWORD *)&Context->SegGs;
    }
    if ( SaveSupervisorState )
    {
      KeSaveSupervisorState(KeGetCurrentPrcb()->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL);
      *(_BYTE *)(a1 + 433) = 1;
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v12 = IopLiveDumpGetMillisecondCounter(0);
    IopLiveDumpTraceCaptureProcessorContextDuration(a1, v12 - MillisecondCounter);
  }
  v13 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 1) == 0 )
    v13 = a1 + 688;
  v14 = IopLiveDumpMarkRequiredDumpData(a1, v13);
  if ( v14 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 80) & 1) != 0
      && (v15 = RtlNumberOfSetBitsEx((__int64 *)(a1 + 544)),
          v16 = *(_DWORD *)(a1 + 80),
          *(_QWORD *)(a1 + 104) = v15,
          (v16 & 0x200) != 0)
      && v15 > (*(_QWORD *)(a1 + 1144) >> 12) + (unsigned __int64)((*(_QWORD *)(a1 + 1144) & 0xFFFLL) != 0) )
    {
      v14 = -1073741670;
      *(_DWORD *)(a1 + 80) = v16 | 0x400;
    }
    else
    {
      v14 = IopLiveDumpMarkImportantDumpData(a1, v13);
      if ( v14 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
        {
          IopLiveDumpPopulateBitmapForDump(a1);
        }
        else
        {
          if ( *(_QWORD *)(a1 + 696) || *(_QWORD *)(a1 + 704) )
          {
            v17 = *(_DWORD *)(a1 + 44);
            v18 = IopLiveDumpGetMillisecondCounter(0);
            HvlCollectLivedump(v17 & 2, *(_QWORD *)(a1 + 208), (_QWORD *)(a1 + 192), a1 + 144);
            *(_QWORD *)(a1 + 520) = IopLiveDumpGetMillisecondCounter(0) - v18;
          }
          IopLiveDumpGenerateIptSecondaryData();
          IopLiveDumpPopulateBitmapForDump(a1);
          v21 = 0LL;
          KdDecodeDataBlock();
          IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_BUFFERING_START);
          IopLiveDumpInitiateCorralStateChange(a1 + 312, 4LL, &v21);
          IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_BUFFERING_END);
          KdEncodeDataBlock();
          *(_QWORD *)(a1 + 528) = v21;
        }
        v14 = 0;
      }
    }
  }
  IopLiveDumpUncorralProcessors(a1 + 312, 0LL);
  v19 = IopLiveDumpGetMillisecondCounter(0) - *(_QWORD *)(a1 + 536);
  if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
    *(_QWORD *)(a1 + 448) = v19;
  else
    *(_QWORD *)(a1 + 488) = v19;
  return (unsigned int)v14;
}
