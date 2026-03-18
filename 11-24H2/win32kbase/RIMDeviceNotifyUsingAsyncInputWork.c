/*
 * XREFs of RIMDeviceNotifyUsingAsyncInputWork @ 0x1401ECE9C
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x1401E8E88 (W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 *     W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x1401E9004 (W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sd @ 0x140112670 (WPP_RECORDER_AND_TRACE_SF_Sd.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8 (RIMQueueAndSignalAsyncWorkItem.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E15F8 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EC21C (RIMAllocateAsyncInputWorkItem.c)
 */

__int64 __fastcall RIMDeviceNotifyUsingAsyncInputWork(__int64 a1, __int64 a2)
{
  struct _KTHREAD **v4; // r14
  unsigned int v5; // r12d
  char v6; // si
  char v7; // r15
  const wchar_t *v8; // rdi
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  struct RIMAsyncWorkItem *v11; // rax
  char v12; // r15
  char v13; // r13
  __int64 v14; // rax
  char v15; // bl
  bool v16; // di
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v21; // [rsp+20h] [rbp-178h]
  PCUNICODE_STRING SourceString; // [rsp+28h] [rbp-170h]
  int SourceStringa; // [rsp+28h] [rbp-170h]
  __int64 v24; // [rsp+38h] [rbp-160h]
  _BYTE v25[256]; // [rsp+70h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v25);
  v4 = *(struct _KTHREAD ***)(a2 + 320);
  v5 = 0;
  if ( v4[5] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 544);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    RimDeviceTypeToRimInputType(a2, *(_DWORD *)(a2 + 48));
    v8 = *(const wchar_t **)(a2 + 200);
    UserSessionState = W32GetUserSessionState(v9);
    WPP_RECORDER_AND_TRACE_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v7,
      *(_QWORD *)(UserSessionState + 19392),
      v21,
      (__int64)SourceString,
      0x16u,
      v24,
      v8);
  }
  v11 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(
                                     v4,
                                     *(_QWORD **)(a2 + 32),
                                     *(_DWORD *)(*(_QWORD *)(a2 + 32) + 120LL),
                                     0LL,
                                     (_OWORD *)(a1 + 4),
                                     0LL,
                                     0,
                                     1);
  if ( v11 )
  {
    RIMQueueAndSignalAsyncWorkItem((struct RawInputManagerObject *)v4, v11);
  }
  else
  {
    v5 = -1073741801;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v13,
        *(_QWORD *)(v14 + 19392),
        4u,
        SourceStringa,
        0x17u,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v15 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 19392),
      4,
      1,
      24,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v5);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v25);
  return v5;
}
