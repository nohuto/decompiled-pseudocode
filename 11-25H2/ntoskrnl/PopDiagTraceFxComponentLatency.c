/*
 * XREFs of PopDiagTraceFxComponentLatency @ 0x1402C10CC
 * Callers:
 *     PoFxSetComponentLatency @ 0x1402C0EC0 (PoFxSetComponentLatency.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  __int64 *v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]
  int v19; // [rsp+98h] [rbp+18h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
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
     || *(_BYTE *)(v10 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v10 + 40) + 96LL, v8, v9)) )
  {
    UserData.Reserved = 0;
    v15 = 0;
    v18 = 0;
    UserData.Ptr = (ULONGLONG)&v11;
    UserData.Size = 8;
    v13 = &v19;
    v16 = &v20;
    v17 = 8;
    v14 = 4;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_LATENCY, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
  }
}
