/*
 * XREFs of PopDirectedDripsDiagTraceNotifyDevices @ 0x14049736C
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140A35914 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140A35FB0 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDirectedDripsDiagTraceNotifyDevices(unsigned __int8 a1, int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  int v4; // edi
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rbx
  _BYTE *v8; // rsi
  PVOID *v9; // rdx
  _BYTE *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  char *v13; // r8
  PVOID *v14; // r9
  unsigned int v15; // r10d
  unsigned __int64 v16; // r11
  signed __int64 v17; // rbx
  int v19; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  int *v21; // [rsp+68h] [rbp-9h]
  int v22; // [rsp+70h] [rbp-1h]
  int v23; // [rsp+74h] [rbp+3h]
  int *v24; // [rsp+78h] [rbp+7h]
  int v25; // [rsp+80h] [rbp+Fh]
  int v26; // [rsp+84h] [rbp+13h]
  __int64 *v27; // [rsp+88h] [rbp+17h]
  int v28; // [rsp+90h] [rbp+1Fh]
  int v29; // [rsp+94h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v31; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+E8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v32 = a3;
  v31 = a2;
  v4 = a1;
  if ( a2 >= 0 )
  {
    v5 = (char *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v5, (__int64)&PopDirectedDripsDiagLock);
    if ( v7 )
      v7[10] = 1;
    v8 = (_BYTE *)MEMORY[0xFFFFF78000000008];
    v9 = (PVOID *)PopDirectedDripsDiagSessionContext;
    if ( PopDirectedDripsDiagSessionContext != &PopDirectedDripsDiagSessionContext )
    {
      do
      {
        if ( (_BYTE)v4 )
        {
          v10 = v9[6];
          v11 = 7LL;
          v9[6] = 0LL;
          v12 = 10LL;
        }
        else
        {
          v10 = v9[15];
          v11 = 16LL;
          v9[15] = 0LL;
          v12 = 19LL;
        }
        v13 = (char *)&v9[v12];
        v14 = &v9[v11];
        if ( *((_DWORD *)v9 + 9) == dword_140F06B48 && v10 && ((_DWORD)v9[5] & 0x100) == 0 )
        {
          v15 = 0;
          v16 = v8 - v10;
          v17 = (char *)PopFxAccountingBucketLimits - v13;
          do
          {
            if ( v16 >= *(_QWORD *)&v13[v17] && v16 < PopFxAccountingBucketLimits[v15 + 1] )
            {
              ++*(_DWORD *)v14;
              *(_QWORD *)v13 += v16;
            }
            ++v15;
            v14 = (PVOID *)((char *)v14 + 4);
            v13 += 8;
          }
          while ( v15 < 5 );
          if ( (_BYTE)v4 )
            v9[15] = v8;
        }
        v9 = (PVOID *)*v9;
      }
      while ( v9 != &PopDirectedDripsDiagSessionContext );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    LOBYTE(v3) = KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v21 = &v19;
      v24 = &v31;
      v27 = &v32;
      v19 = v4;
      UserData.Size = 1;
      v22 = 4;
      v25 = 4;
      v28 = 8;
      LOBYTE(v3) = EtwWriteEx(
                     PopDiagHandle,
                     &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     4u,
                     &UserData);
    }
  }
  return (char)v3;
}
