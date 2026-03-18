/*
 * XREFs of ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x140207DF8
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140185B9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1400DE464 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1400DE4B4 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F4710 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14018536C (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F33F8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetupQFramePostMT(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        CInputDest *a5,
        unsigned int a6)
{
  __int64 *v7; // r15
  __int64 v8; // rbp
  CTouchProcessor *v9; // rcx
  char v10; // bl
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // esi
  __int64 i; // rdi
  CTouchProcessor *v15; // rcx
  CTouchProcessor *v16; // rcx
  void *v17; // r8
  CInputDest *v19; // rax
  __int16 v20; // [rsp+30h] [rbp-B8h]
  _BYTE v21[128]; // [rsp+40h] [rbp-A8h] BYREF

  v7 = a3;
  v8 = a2;
  v9 = WPP_GLOBAL_Control;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      83,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)v9, v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3684);
  v12 = *(_DWORD *)(v8 + 48);
  v13 = 0;
  for ( i = *(_QWORD *)(v8 + 248); v13 < v12; ++v13 )
  {
    if ( (*(_DWORD *)(i + 140) & 0x10) == 0 )
    {
      if ( *(_DWORD *)i == -1 )
      {
        v19 = CInputDest::CInputDest((CInputDest *)v21, a5);
        CTouchProcessor::InitializeQFrame(a6, i, v13, a4, v19, a6);
LABEL_33:
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          v10 = 0;
        if ( (_BYTE)v11 || v10 )
        {
          v17 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
          v20 = 84;
LABEL_30:
          LOBYTE(v17) = v10;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)v16 + 3),
            v11,
            (_DWORD)v17,
            *((_QWORD *)v16 + 8),
            5,
            4,
            v20,
            (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        }
        goto LABEL_31;
      }
      if ( *(_QWORD *)(i + 8) == a4 )
        goto LABEL_33;
    }
    i += 160LL;
  }
  i = *v7;
  *v7 = 0LL;
  *(_QWORD *)(i + 8) = a4;
  CInputDest::operator=(i + 16, (__int64)a5);
  if ( *(_DWORD *)(i + 144) != 22 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3726);
  CTouchProcessor::InitializeQFrameCoalesceState(v15, (struct CPointerQFrame *)i, a6);
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v10 = 0;
  if ( (_BYTE)v11 || v10 )
  {
    v17 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    v20 = 85;
    goto LABEL_30;
  }
LABEL_31:
  CInputDest::~CInputDest(a5);
  return i;
}
