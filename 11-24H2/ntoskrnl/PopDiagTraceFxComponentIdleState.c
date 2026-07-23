/*
 * XREFs of PopDiagTraceFxComponentIdleState @ 0x1403A5978
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x1403A5B20 (PoFxCompleteIdleState.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentIdleState(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // r11
  char v4; // r10
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int8 v8; // dl
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  int *v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+98h] [rbp+18h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+20h] BYREF

  v19 = a3;
  v18 = a2;
  v12 = a1;
  v3 = a3;
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
      *(_BYTE *)(v7 + 8 * v6 + 8) = 8;
      *(_BYTE *)(v7 + 8 * v6 + 9) = v4;
      *(_WORD *)(v7 + 8 * v6 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v7 + 8 * v6 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v7 + 8 * v6 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v7 + 8 * v6 + 16) = v3;
    }
  }
  if ( PopDiagHandleRegistered
    && PopDiagHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL)
     || *(_WORD *)(v10 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v10 + 40) + 96LL, v8, v9)) )
  {
    UserData.Ptr = (ULONGLONG)&v12;
    *(_QWORD *)&UserData.Size = 8LL;
    v14 = &v18;
    v15 = v11;
    v16 = (int *)&v19;
    v17 = v11;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_STATE, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
  }
}
