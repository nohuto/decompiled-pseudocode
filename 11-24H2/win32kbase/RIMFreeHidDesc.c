/*
 * XREFs of RIMFreeHidDesc @ 0x1401DD0C4
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     RIMAllocateHidConfigDesc @ 0x140127788 (RIMAllocateHidConfigDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x140133A58 (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E67B0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMFreeHidDesc(char *Buffer)
{
  char v2; // bp
  char v3; // r14
  int v4; // ebx
  int v5; // edi
  __int64 UserSessionState; // rax
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx

  if ( !Buffer )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 563);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *((unsigned __int16 *)Buffer + 20);
    v5 = *((unsigned __int16 *)Buffer + 21);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v2,
      v3,
      *(_QWORD *)(UserSessionState + 19392),
      4u,
      1u,
      0x1Du,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      Buffer,
      v5,
      v4);
  }
  v7 = (char *)*((_QWORD *)Buffer + 3);
  if ( v7 )
    GreDeleteFastMutex(v7);
  v8 = (char *)*((_QWORD *)Buffer + 2);
  if ( v8 )
    GreDeleteFastMutex(v8);
  v9 = (char *)*((_QWORD *)Buffer + 4);
  if ( v9 )
    GreDeleteFastMutex(v9);
  GreDeleteFastMutex(Buffer);
}
