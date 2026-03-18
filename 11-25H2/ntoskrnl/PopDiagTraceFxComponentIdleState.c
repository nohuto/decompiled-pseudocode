/*
 * XREFs of PopDiagTraceFxComponentIdleState @ 0x14044CC10
 * Callers:
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x14044CB70 (PoFxCompleteIdleState.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentIdleState(__int64 a1, int a2, unsigned int a3)
{
  char v3; // r10
  __int64 v4; // r11
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int8 v8; // dl
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r10d
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+64h] [rbp-1Ch]
  int *v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+74h] [rbp-Ch]
  int v20; // [rsp+98h] [rbp+18h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+20h] BYREF

  v21 = a3;
  v20 = a2;
  v12 = a1;
  v3 = a2;
  v4 = a3;
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
      *(_BYTE *)(v7 + 8 * v6 + 9) = v3;
      *(_WORD *)(v7 + 8 * v6 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v7 + 8 * v6 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v7 + 8 * v6 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v7 + 8 * v6 + 16) = v4;
    }
  }
  if ( PopDiagHandleRegistered
    && PopDiagHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL)
     || *(_BYTE *)(v10 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v10 + 40) + 96LL, v8, v9)) )
  {
    UserData.Reserved = 0;
    v16 = 0;
    v19 = 0;
    UserData.Ptr = (ULONGLONG)&v12;
    v14 = &v20;
    v17 = (int *)&v21;
    UserData.Size = 8;
    v15 = v11;
    v18 = v11;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_STATE, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
  }
}
