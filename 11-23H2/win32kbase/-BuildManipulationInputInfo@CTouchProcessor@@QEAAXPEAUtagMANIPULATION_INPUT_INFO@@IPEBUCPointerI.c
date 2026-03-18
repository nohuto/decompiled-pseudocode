/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BAC80
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C2DE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 * Callees:
 *     ApiSetAddMagnificationOutputTransform @ 0x1C005880C (ApiSetAddMagnificationOutputTransform.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00D4174 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     GetPointerInfoSize @ 0x1C00DFDFA (GetPointerInfoSize.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C00E40C0 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C00E47AE (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C01BB060 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01BFD1C (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ConvertPointCoordinates @ 0x1C01EFBE8 (ConvertPointCoordinates.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        struct tagMANIPULATION_INPUT_INFO *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v7; // r15d
  CTouchProcessor *v8; // rcx
  CTouchProcessor *v9; // rcx
  CTouchProcessor *v10; // rcx
  size_t v11; // r12
  unsigned int PointerInfoSize; // eax
  struct tagPROCESSINFO *InputProcessContext; // rax
  int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // rsi
  _QWORD *v17; // r14
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r13d
  int v23; // edx
  __int64 v24; // rcx
  struct tagWND *UserWindow; // rax
  BOOL v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // [rsp+80h] [rbp+8h]

  v29 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  v7 = v29;
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v29) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16964);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v9, v29) )
  {
    v11 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 30) + 168LL));
      v11 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16974);
    }
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v10, *((void **)a4 + 8));
    if ( InputProcessContext )
      v14 = *((_DWORD *)InputProcessContext + 14);
    else
      v14 = 0;
    *((_DWORD *)a2 + 36) = v14;
    v15 = 0;
    *((_DWORD *)a2 + 37) = 0;
    if ( *((_DWORD *)a4 + 12) )
    {
      do
      {
        v16 = *((_QWORD *)a4 + 30) + 480LL * v15;
        if ( CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v16) )
        {
          v17 = (_QWORD *)((char *)a2 + 240 * *((unsigned int *)a2 + 37) + 160);
          memmove(v17, (const void *)(v16 + 168), v11);
          v18 = *(_OWORD *)(v16 + 400);
          v19 = *(_OWORD *)(v16 + 416);
          v20 = 240LL * *((unsigned int *)a2 + 37);
          *(_OWORD *)((char *)a2 + v20 + 304) = *(_OWORD *)(v16 + 384);
          *(_OWORD *)((char *)a2 + v20 + 320) = v18;
          *(_OWORD *)((char *)a2 + v20 + 336) = v19;
          if ( (*(_DWORD *)(v16 + 4) & 0x80u) == 0 )
            v21 = 0;
          else
            v21 = *(_DWORD *)(v16 + 348);
          *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 37) + 88) = v21;
          *((_QWORD *)a2 + 30 * *((unsigned int *)a2 + 37) + 45) = *(_QWORD *)(v16 + 448);
          *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 37) + 92) = *(_DWORD *)(v16 + 456);
          v22 = *(_DWORD *)v17;
          v17[3] = 0LL;
          if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v17 + 4)) && v22 != 5 )
            ConvertPointCoordinates(v17[4]);
          if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v17 + 6)) && v22 != 5 )
            ConvertPointCoordinates(v17[6]);
          ++*((_DWORD *)a2 + 37);
        }
        ++v15;
      }
      while ( v15 < *((_DWORD *)a4 + 12) );
      v7 = v29;
    }
    if ( *((_DWORD *)a2 + 37) != v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17040);
    *(_OWORD *)a2 = *(_OWORD *)((char *)a4 + 72);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a4 + 88);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)a4 + 104);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)a4 + 120);
    *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)a4 + 136);
    *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)a4 + 152);
    *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)a4 + 168);
    *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)a4 + 184);
    *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)a4 + 200);
    v23 = *((_DWORD *)a2 + 38) ^ (*((_DWORD *)a2 + 38) ^ (*((int *)a4 + 57) >> 8)) & 1;
    *((_DWORD *)a2 + 38) = v23;
    v24 = *((_QWORD *)a4 + 30);
    v26 = *(_DWORD *)(v24 + 168) == 3
       && (UserWindow = CInputDest::GetUserWindow((CInputDest *)(v24 + 352))) != 0LL
       && *(_QWORD *)(*((_QWORD *)UserWindow + 2) + 1336LL) != 0LL;
    *((_DWORD *)a2 + 38) = (2 * v26) | v23 & 0xFFFFFFFD;
    v27 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 8), 19);
    if ( v27 )
    {
      v28 = *(_QWORD *)(v27 + 472);
      if ( v28 )
        *((_DWORD *)a2 + 39) = *(_DWORD *)(v28 + 956);
      else
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17059);
    }
  }
}
