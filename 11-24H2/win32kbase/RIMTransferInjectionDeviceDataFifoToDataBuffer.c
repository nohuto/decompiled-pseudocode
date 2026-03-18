/*
 * XREFs of RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401E74C4
 * Callers:
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1401EDAB4 (rimProcessInjectedDeviceBuffers.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMTransferInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v4; // eax
  unsigned int v5; // edx
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // di
  bool v14; // si
  int v15; // edx
  int v16; // r8d
  __int64 v17; // r9
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v24; // [rsp+30h] [rbp-28h]
  char v25; // [rsp+40h] [rbp-18h]

  v2 = *(_DWORD *)(a2 + 168);
  if ( (v2 & 0x2000) == 0 && (v2 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2934);
  v4 = *(_DWORD *)(a2 + 48);
  if ( v4 )
  {
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2972);
    v18 = *(_DWORD *)(a2 + 676);
    if ( v18 <= 0x10 )
    {
      result = v18;
      if ( !v18 )
        return result;
    }
    else
    {
      LODWORD(result) = 16;
    }
    v19 = *(_DWORD *)(a2 + 672);
    v20 = 16 - v19;
    if ( 16 - v19 >= (unsigned int)result )
      v20 = result;
    if ( v20 )
    {
      v21 = 0;
      do
      {
        ++v21;
        v22 = 3 * ((((unsigned __int8)*(_DWORD *)(a2 + 680) - (_BYTE)v18 + 1) & 0xF) + 57LL);
        v23 = 3 * (v19 + 40LL);
        *(_QWORD *)(a2 + 4 * v23) = *(_QWORD *)(a2 + 4 * v22);
        *(_DWORD *)(a2 + 4 * v23 + 8) = *(_DWORD *)(a2 + 4 * v22 + 8);
        LODWORD(v23) = *(_DWORD *)(a2 + 672);
        --*(_DWORD *)(a2 + 676);
        v19 = v23 + 1;
        v18 = *(_DWORD *)(a2 + 676);
        *(_DWORD *)(a2 + 672) = v19;
      }
      while ( v21 < v20 );
      result = v19;
      v12 = 12LL * v19;
      goto LABEL_32;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = a2;
      v17 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v24 = 67;
      goto LABEL_40;
    }
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 900);
    if ( v5 <= 0x10 )
    {
      result = v5;
      if ( !v5 )
        return result;
    }
    else
    {
      LODWORD(result) = 16;
    }
    v7 = *(_DWORD *)(a2 + 896);
    v8 = 16 - v7;
    if ( 16 - v7 >= (unsigned int)result )
      v8 = result;
    if ( v8 )
    {
      v9 = 0;
      do
      {
        ++v9;
        v10 = 3LL * (((unsigned __int8)*(_DWORD *)(a2 + 904) - (_BYTE)v5 + 1) & 0xF);
        v11 = 3LL * v7;
        *(_OWORD *)(a2 + 8 * v11 + 452) = *(_OWORD *)(a2 + 8 * v10 + 908);
        *(_QWORD *)(a2 + 8 * v11 + 468) = *(_QWORD *)(a2 + 8 * v10 + 924);
        LODWORD(v11) = *(_DWORD *)(a2 + 896);
        --*(_DWORD *)(a2 + 900);
        v7 = v11 + 1;
        v5 = *(_DWORD *)(a2 + 900);
        *(_DWORD *)(a2 + 896) = v7;
      }
      while ( v9 < v8 );
      result = v7;
      v12 = 24LL * v7;
LABEL_32:
      *(_DWORD *)(a2 + 240) = 0;
      *(_QWORD *)(a2 + 248) = v12;
      return result;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = a2;
      v17 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v24 = 66;
LABEL_40:
      LOBYTE(v16) = v14;
      LOBYTE(v15) = v13;
      return WPP_RECORDER_AND_TRACE_SF_q(
               *((_QWORD *)WPP_GLOBAL_Control + 3),
               v15,
               v16,
               v17,
               4,
               1,
               v24,
               (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
               v25);
    }
  }
  return result;
}
