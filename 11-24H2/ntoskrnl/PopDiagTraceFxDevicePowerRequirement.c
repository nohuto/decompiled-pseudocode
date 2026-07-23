/*
 * XREFs of PopDiagTraceFxDevicePowerRequirement @ 0x1402E6324
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140481CE0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140481DAC (PopFxDeliverDevicePowerRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140495294 (PopFxUpdateDeviceIdleTimer.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDevicePowerRequirement(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  const EVENT_DESCRIPTOR *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+68h] [rbp-20h]

  v3 = a3;
  v10 = a1;
  if ( a2 == 1 )
  {
    v4 = &POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_FROM_PEP;
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 80);
      if ( v5 )
      {
        v6 = 3LL
           * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 896), 1u) % *(_DWORD *)(v5 + 880));
        v7 = *(_QWORD *)(v5 + 888);
        *(_QWORD *)(v7 + 8 * v6) = MEMORY[0xFFFFF78000000008];
        *(_WORD *)(v7 + 8 * v6 + 8) = 4;
        *(_WORD *)(v7 + 8 * v6 + 10) = KeGetCurrentPrcb()->Number;
        *(_WORD *)(v7 + 8 * v6 + 12) = KeGetCurrentThread()[1].CycleTime;
        *(_WORD *)(v7 + 8 * v6 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_QWORD *)(v7 + 8 * v6 + 16) = v3;
      }
    }
  }
  else
  {
    v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_TO_DEVICE;
    PopFxAddLogEntry(a1, 0LL, 5LL);
  }
  if ( PopDiagHandleRegistered
    && PopDiagHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, v4->Level, v4->Keyword)
     || *(_WORD *)(v8 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v8 + 40) + 96LL, v4->Level, v4->Keyword)) )
  {
    UserData.Ptr = (ULONGLONG)&v10;
    v9 = v3;
    v12 = &v9;
    *(_QWORD *)&UserData.Size = 8LL;
    v13 = 4LL;
    EtwWriteEx(PopDiagHandle, v4, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
}
