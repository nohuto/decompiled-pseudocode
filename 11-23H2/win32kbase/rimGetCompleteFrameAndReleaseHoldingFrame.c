/*
 * XREFs of rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A06F8
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C019F804 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00DF000 (EtwTraceBeginPointerFrameCommit.c)
 *     ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C00E15E4 (-DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     rimFindHoldingFrame @ 0x1C00E1B8A (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C01A1140 (rimReclaimHoldingFrame.c)
 */

__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *HoldingFrame; // rdi
  int v7; // r8d
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  _QWORD *v15; // rax
  unsigned int v16; // r14d
  __int64 i; // r15
  __int64 v18; // r12
  _OWORD *v19; // rcx
  __int64 v20; // r14
  _DWORD *v21; // r15
  int v22; // eax
  unsigned int v23; // eax

  v3 = 0;
  *a3 = 0LL;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1018);
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1019);
  if ( HoldingFrame[3] != *(_QWORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1020);
  if ( !*((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1021);
  if ( *((_DWORD *)HoldingFrame + 10) != *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1022);
  EtwTraceBeginPointerFrameCommit(0, *((_DWORD *)HoldingFrame + 10), v7);
  v8 = (_DWORD *)HoldingFrame[7];
  v9 = 0LL;
  while ( v8 )
  {
    v10 = v8[1];
    v8 = (_DWORD *)*((_QWORD *)v8 + 2);
    v9 = ((v10 + 7) & 0xFFFFFFF8) + (_DWORD)v9 + 24;
  }
  v11 = 48 * *((_DWORD *)HoldingFrame + 10);
  v12 = v9 + v11 * 4 + 240;
  if ( v12 )
  {
    v13 = (_DWORD *)Win32AllocPoolZInit(v12, 0x66637352u);
    v14 = v13;
    if ( v13 )
    {
      *v13 = v12;
      v8 = v13 + 60;
      v15 = v13 + 2;
      v16 = 0;
      v15[1] = v15;
      *v15 = v15;
      v14[6] = *((_DWORD *)HoldingFrame + 10);
      *((_QWORD *)v14 + 4) = HoldingFrame[3];
      *((_QWORD *)v14 + 6) = HoldingFrame[4];
      *((_QWORD *)v14 + 29) = v14 + 60;
      for ( i = HoldingFrame[9]; v16 < *((_DWORD *)HoldingFrame + 10); i += 192LL )
      {
        v18 = 48LL * v16;
        v19 = &v8[v18];
        *v19 = *(_OWORD *)i;
        v19[1] = *(_OWORD *)(i + 16);
        v19[2] = *(_OWORD *)(i + 32);
        v19[3] = *(_OWORD *)(i + 48);
        v19[4] = *(_OWORD *)(i + 64);
        v19[5] = *(_OWORD *)(i + 80);
        v19[6] = *(_OWORD *)(i + 96);
        v19[7] = *(_OWORD *)(i + 112);
        v19[8] = *(_OWORD *)(i + 128);
        v19[9] = *(_OWORD *)(i + 144);
        v19[10] = *(_OWORD *)(i + 160);
        v19[11] = *(_OWORD *)(i + 176);
        DbgDumpNode(v16, (struct tagRIMPOINTERINFONODE *)i);
        v8 = (_DWORD *)*((_QWORD *)v14 + 29);
        if ( i == HoldingFrame[10] )
          *((_QWORD *)v14 + 27) = &v8[v18];
        ++v16;
      }
      v14[7] = *((_DWORD *)HoldingFrame + 12);
      if ( HoldingFrame[7] )
        *((_QWORD *)v14 + 28) = &v8[v11];
      v20 = HoldingFrame[7];
      v21 = (_DWORD *)*((_QWORD *)v14 + 28);
      while ( v20 )
      {
        while ( 1 )
        {
          *v21 = *(_DWORD *)v20;
          v21[1] = *(_DWORD *)(v20 + 4);
          *((_QWORD *)v21 + 1) = v21 + 6;
          memmove(v21 + 6, *(const void **)(v20 + 8), *(unsigned int *)(v20 + 4));
          v8 = 0LL;
          v22 = *(_DWORD *)(v20 + 4) + 7;
          *((_QWORD *)v21 + 2) = 0LL;
          v23 = (v22 & 0xFFFFFFF8) + 24;
          if ( *(_QWORD *)(v20 + 16) )
          {
            v8 = (_DWORD *)((char *)v21 + v23);
            *((_QWORD *)v21 + 2) = v8;
          }
          v20 = *(_QWORD *)(v20 + 16);
          v21 = v8;
          if ( !v8 )
            break;
          if ( !v20 )
            goto LABEL_29;
        }
        if ( !v20 )
          break;
LABEL_29:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1176);
      }
      *a3 = v14;
      v3 = 1;
    }
  }
  rimReclaimHoldingFrame(v8, v9, HoldingFrame);
  return v3;
}
