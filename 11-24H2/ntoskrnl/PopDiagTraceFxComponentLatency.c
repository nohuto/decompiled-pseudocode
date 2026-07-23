/*
 * XREFs of PopDiagTraceFxComponentLatency @ 0x1402BF72C
 * Callers:
 *     PoFxSetComponentLatency @ 0x1402BF520 (PoFxSetComponentLatency.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentLatency(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r11
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  __int64 *v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+98h] [rbp+18h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a2;
  v10 = a1;
  v4 = a2;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 )
    {
      v6 = 3LL
         * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 896), 1u) % *(_DWORD *)(v5 + 880));
      a2 = *(_QWORD *)(v5 + 888);
      *(_QWORD *)(a2 + 8 * v6) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(a2 + 8 * v6 + 8) = 9;
      *(_BYTE *)(a2 + 8 * v6 + 9) = v4;
      *(_WORD *)(a2 + 8 * v6 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(a2 + 8 * v6 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(a2 + 8 * v6 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(a2 + 8 * v6 + 16) = a3;
    }
  }
  if ( PopDiagHandleRegistered )
  {
    if ( PopDiagHandle )
    {
      LOBYTE(a2) = 4;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, a2, 256LL, PopDiagHandle)
        || *(_WORD *)(v9 + 102) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 40) + 96LL, v7, v8, v9) )
      {
        UserData.Ptr = (ULONGLONG)&v10;
        *(_QWORD *)&UserData.Size = 8LL;
        v12 = &v16;
        v13 = 4LL;
        v14 = &v17;
        v15 = 8LL;
        EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_LATENCY, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
      }
    }
  }
}
