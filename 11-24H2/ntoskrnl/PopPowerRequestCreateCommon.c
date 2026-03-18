/*
 * XREFs of PopPowerRequestCreateCommon @ 0x1403313A8
 * Callers:
 *     PoRegisterSystemState @ 0x1403310B0 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140331200 (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x140331C00 (PoCreatePowerRequest.c)
 *     NtSetThreadExecutionState @ 0x140AC6F10 (NtSetThreadExecutionState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140C2D2F8 (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140C6809C (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     SessionIsInteractive @ 0x14033117C (SessionIsInteractive.c)
 *     PsGetCurrentProcessSessionId @ 0x140331630 (PsGetCurrentProcessSessionId.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140331678 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObCreateObject @ 0x14098A240 (ObCreateObject.c)
 *     PopPowerRequestTableDeleteEntry @ 0x1409BAB80 (PopPowerRequestTableDeleteEntry.c)
 *     PsQueryProcessAttributes @ 0x1409D67A0 (PsQueryProcessAttributes.c)
 *     PopPowerRequestStatsCreate @ 0x140A24B3C (PopPowerRequestStatsCreate.c)
 *     PopDiagTracePowerRequestCreate @ 0x140A3808C (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A50600 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140A5A6BC (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestTableInsertEntry @ 0x140A64C70 (PopPowerRequestTableInsertEntry.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140A66258 (PopUmpoSendPowerRequestCreate.c)
 */

__int64 __fastcall PopPowerRequestCreateCommon(_DWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v4; // rsi
  char v5; // bl
  LONG *p_LockNV; // rdi
  LONG v7; // r12d
  int v8; // r13d
  __int64 v9; // rcx
  __int64 inserted; // r15
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rcx
  int Object; // ebx
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // eax
  _DWORD v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-14h]
  __int128 v26; // [rsp+70h] [rbp-10h]
  char v27; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v28; // [rsp+D0h] [rbp+50h]
  void *v29; // [rsp+D8h] [rbp+58h] BYREF

  v28 = a3;
  v4 = a1;
  v21[1] = 0;
  v25 = 0;
  v29 = 0LL;
  v27 = 0;
  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 1;
    p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
    v7 = p_LockNV[116];
    if ( a2 )
    {
      PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v27, 0LL);
      if ( v27 )
        return (unsigned int)-1073741637;
    }
  }
  else
  {
    v5 = 0;
    p_LockNV = 0LL;
    v7 = 0;
  }
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  v8 = PopPowerRequestId;
  v9 = (unsigned int)PopPowerRequestId++;
  inserted = PopPowerRequestTableInsertEntry(v9);
  PopReleasePowerRequestPushLock();
  v11 = v4[12] + 56;
  v22 = 0LL;
  v23 = 0LL;
  LOBYTE(v12) = v5;
  v21[0] = 48;
  v24 = 32;
  v26 = 0LL;
  Object = ObCreateObject(0, PopPowerRequestObjectType, (unsigned int)v21, v12, 0, 168, v11, 0, (__int64)&v29);
  if ( Object < 0 )
  {
    if ( inserted )
    {
      LOBYTE(v13) = 1;
      PopAcquirePowerRequestPushLock(v13);
      PopPowerRequestTableDeleteEntry(*(unsigned int *)(inserted + 8));
      PopReleasePowerRequestPushLock();
    }
  }
  else
  {
    v15 = v29;
    memset_0(v29, 0, 0xA8uLL);
    v15[4] = PsGetCurrentProcessSessionId();
    v15[26] = v7;
    if ( *v4 && !a2 )
    {
      ObfReferenceObjectWithTag(p_LockNV, 0x72506F50u);
      *((_QWORD *)v15 + 17) = p_LockNV;
    }
    *((_BYTE *)v15 + 152) = a2;
    *((_QWORD *)v15 + 12) = v4;
    v15[9] = v8;
    *((_QWORD *)v15 + 9) = v15 + 16;
    *((_QWORD *)v15 + 8) = v15 + 16;
    if ( *v4 )
    {
      SessionId = PsGetSessionIdEx((__int64)p_LockNV);
      if ( a2 )
        v15[5] = 8;
      else
        v15[5] = SessionIsInteractive(SessionId) != 0 ? 63 : 30;
    }
    else
    {
      v15[5] = 18;
    }
    PopPowerRequestStatsCreate(v15);
    LOBYTE(v16) = 1;
    PopAcquirePowerRequestPushLock(v16);
    v17 = (_QWORD *)qword_140F0E078;
    if ( *(PVOID **)qword_140F0E078 != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *(_QWORD *)v15 = &PopPowerRequestObjectList;
    *((_QWORD *)v15 + 1) = v17;
    *v17 = v15;
    qword_140F0E078 = (__int64)v15;
    *(_QWORD *)inserted = v15;
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v15);
    if ( *v4 )
      PopUmpoSendPowerRequestCreate((unsigned int)v15[9]);
    PopDiagTracePowerRequestCreate(0LL, v15);
    PopReleasePowerRequestPushLock();
    *v28 = v15;
    return 0;
  }
  return (unsigned int)Object;
}
