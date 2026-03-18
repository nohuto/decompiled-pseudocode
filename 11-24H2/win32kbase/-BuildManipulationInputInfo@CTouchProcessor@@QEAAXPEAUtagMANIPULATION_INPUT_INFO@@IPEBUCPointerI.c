/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1401829E0
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 * Callees:
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1400483F4 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x140048EA8 (ApiSetAddMagnificationOutputTransform.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1400DE50C (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DEA6C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     GetPointerInfoSize @ 0x1400ECF9C (GetPointerInfoSize.c)
 *     ConvertPointCoordinates @ 0x1401584C4 (ConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1401F704C (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
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
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // rcx
  __int128 v28; // xmm1
  unsigned int v29; // edx
  __int64 v30; // rcx
  struct tagWND *UserWindow; // rax
  BOOL v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rax
  __int128 v35; // [rsp+20h] [rbp-58h] BYREF
  int v36[18]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+80h] [rbp+8h]

  v37 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  v7 = v37;
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v37) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17358LL);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v9, v37) )
  {
    v11 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 30) + 168LL));
      v11 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17368LL);
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
          {
            v23 = *((_QWORD *)a4 + 32);
            v24 = v17[4];
            v25 = *(_OWORD *)(v23 + 160);
            v35 = *(_OWORD *)(v23 + 176);
            *(_OWORD *)v36 = v25;
            ConvertPointCoordinates(v24, v36, (int *)&v35, v17 + 5);
          }
          if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v17 + 6)) && v22 != 5 )
          {
            v26 = *((_QWORD *)a4 + 32);
            v27 = v17[6];
            v28 = *(_OWORD *)(v26 + 160);
            *(_OWORD *)v36 = *(_OWORD *)(v26 + 176);
            v35 = v28;
            ConvertPointCoordinates(v27, (int *)&v35, v36, v17 + 7);
          }
          ++*((_DWORD *)a2 + 37);
        }
        ++v15;
      }
      while ( v15 < *((_DWORD *)a4 + 12) );
      v7 = v37;
    }
    if ( *((_DWORD *)a2 + 37) != v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17434LL);
    *(_OWORD *)a2 = *(_OWORD *)((char *)a4 + 72);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a4 + 88);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)a4 + 104);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)a4 + 120);
    *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)a4 + 136);
    *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)a4 + 152);
    *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)a4 + 168);
    *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)a4 + 184);
    *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)a4 + 200);
    v29 = (*((int *)a4 + 57) >> 8) ^ (*((_DWORD *)a2 + 38) ^ (*((int *)a4 + 57) >> 8)) & 0xFFFFFFFE;
    *((_DWORD *)a2 + 38) = v29;
    v30 = *((_QWORD *)a4 + 30);
    v32 = *(_DWORD *)(v30 + 168) == 3
       && (UserWindow = CInputDest::GetUserWindow((CInputDest *)(v30 + 352))) != 0LL
       && *(_QWORD *)(*((_QWORD *)UserWindow + 2) + 1496LL) != 0LL;
    *((_DWORD *)a2 + 38) = (2 * v32) | v29 & 0xFFFFFFFD;
    v33 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 8), 19);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 456);
      if ( v34 )
        *((_DWORD *)a2 + 39) = *(_DWORD *)(v34 + 968);
      else
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17453LL);
    }
  }
}
