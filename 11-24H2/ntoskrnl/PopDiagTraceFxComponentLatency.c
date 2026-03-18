/*
 * XREFs of PopDiagTraceFxComponentLatency @ 0x140316B7C
 * Callers:
 *     PoFxSetComponentLatency @ 0x140316970 (PoFxSetComponentLatency.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentLatency(__int64 a1, int a2, __int64 a3)
{
  char v4; // r11
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int8 v8; // dl
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  __int64 *v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+98h] [rbp+18h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+20h] BYREF

  v18 = a3;
  v17 = a2;
  v11 = a1;
  v4 = a2;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 )
    {
      v6 = 3LL
         * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 896), 1u) % *(_DWORD *)(v5 + 880));
      v7 = *(_QWORD *)(v5 + 888);
      *(_QWORD *)(v7 + 8 * v6) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v7 + 8 * v6 + 8) = 9;
      *(_BYTE *)(v7 + 8 * v6 + 9) = v4;
      *(_WORD *)(v7 + 8 * v6 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v7 + 8 * v6 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v7 + 8 * v6 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v7 + 8 * v6 + 16) = a3;
    }
  }
  if ( PopDiagHandleRegistered
    && PopDiagHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL)
     || *(_WORD *)(v10 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v10 + 40) + 96LL, v8, v9)) )
  {
    UserData.Ptr = (ULONGLONG)&v11;
    *(_QWORD *)&UserData.Size = 8LL;
    v13 = &v17;
    v14 = 4LL;
    v15 = &v18;
    v16 = 8LL;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_LATENCY, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
  }
}
