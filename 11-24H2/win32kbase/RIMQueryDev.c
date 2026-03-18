/*
 * XREFs of RIMQueryDev @ 0x140055E98
 * Callers:
 *     RIMRefreshDeviceAttributes @ 0x1400548C0 (RIMRefreshDeviceAttributes.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E67B0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401366D8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMGetKbdExId @ 0x14013CBD8 (RIMGetKbdExId.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x140147320 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG *v4; // rbx
  NTSTATUS v5; // eax
  char v6; // r14
  unsigned int v7; // r12d
  char v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // r15
  char v14; // di
  char v15; // si
  __int64 v16; // rax
  void *v17; // rdx
  int v18; // r8d
  int v19; // esi
  int v20; // r15d
  char v21; // bl
  bool v22; // di
  __int64 v23; // rax
  void *v24; // rdx
  int v25; // r8d
  int IoStatusBlock; // [rsp+20h] [rbp-78h]
  ULONG IoControlCode; // [rsp+28h] [rbp-70h]

  v2 = *(unsigned int *)(a2 + 48);
  v4 = (ULONG *)(a1 + 32 * (v2 + 4));
  if ( (_DWORD)v2 == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1390LL);
  v5 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 208),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 240),
         v4[2],
         0LL,
         0,
         (PVOID)(a2 + v4[3]),
         v4[4]);
  *(_DWORD *)(a2 + 276) = v5;
  v6 = 1;
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 19392),
        2,
        1,
        21,
        (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids,
        a2,
        v7);
    }
  }
  if ( *(_DWORD *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 208)) < 0 )
    {
      v19 = *(unsigned __int8 *)(a2 + 440);
      v20 = *(unsigned __int8 *)(a2 + 441);
      *(_DWORD *)(a2 + 468) = v19;
      *(_DWORD *)(a2 + 472) = v20;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v21 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
        v24 = &WPP_0b7b67ba98653d08fb379134e851684c_Traceguids;
        LOBYTE(v25) = v22;
        LOBYTE(v24) = v21;
        WPP_RECORDER_AND_TRACE_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v24,
          v25,
          *(_QWORD *)(v23 + 19392),
          2,
          1,
          23,
          (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids,
          a2,
          v19,
          v20);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v6 = 0;
      }
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = *(_BYTE *)(a2 + 441);
        v15 = *(_BYTE *)(a2 + 440);
        v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
        v17 = &WPP_0b7b67ba98653d08fb379134e851684c_Traceguids;
        LOBYTE(v18) = v13;
        LOBYTE(v17) = v6;
        WPP_RECORDER_AND_TRACE_SF_DDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v17,
          v18,
          *(_QWORD *)(v16 + 19392),
          IoStatusBlock,
          IoControlCode,
          22,
          (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids,
          v15,
          v14,
          0,
          0);
      }
      *(_QWORD *)(a2 + 468) = 0LL;
    }
  }
  *(_DWORD *)(a2 + 184) &= ~0x40u;
  return v7;
}
