/*
 * XREFs of RIMFindSiblingMouseDeviceWorker @ 0x1401DCD28
 * Callers:
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RawInputManagerDeviceObjectReference @ 0x140063B80 (RawInputManagerDeviceObjectReference.c)
 *     RIMIsParentCommon @ 0x140127DC0 (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingMouseDeviceWorker(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  char v7; // di
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  _QWORD **v12; // r14
  _QWORD *i; // rdi
  __int64 v14; // rdx
  int v15; // eax

  v6 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      80,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      a2);
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2365);
  *a3 = 0LL;
  v12 = (_QWORD **)(W32GetUserSessionState(a1) + 136);
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v14 = (__int64)(i + 7);
    if ( !*((_BYTE *)i - 5) && !*(_DWORD *)((v14 & -(__int64)(i != (_QWORD *)16)) + 0x30) )
    {
      v15 = *(_DWORD *)((v14 & -(__int64)(i != (_QWORD *)16)) + 0xA8);
      if ( (v15 & 0x2000) == 0
        && (v15 & 0x400) == 0
        && (*(_BYTE *)((v14 & -(__int64)(i != (_QWORD *)16)) + 0x914) & 1) != 0
        && (unsigned int)RIMIsParentCommon(
                           a2,
                           v14 & -(__int64)(i != (_QWORD *)16),
                           a1,
                           *(_WORD *)((v14 & -(__int64)(i != (_QWORD *)16)) + 0x362),
                           *(_WORD *)((v14 & -(__int64)(i != (_QWORD *)16)) + 0x364)) )
      {
        RawInputManagerDeviceObjectReference(i - 2);
        *a3 = i - 2;
        return 1;
      }
    }
  }
  return v6;
}
