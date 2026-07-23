/*
 * XREFs of PpmEventPlatformVetoRundown @ 0x14048073C
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventTracePreVetoAccounting @ 0x140480A8C (PpmEventTracePreVetoAccounting.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PpmEventPlatformVetoRundown()
{
  KIRQL v0; // al
  __int64 v1; // r8
  unsigned int v2; // edx
  KIRQL v3; // si
  unsigned int v4; // ecx
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  unsigned int i; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  char *v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]

  if ( PpmPlatformStates )
  {
    for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
    {
      UserData.Reserved = 0;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&i;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PLATFORM_PRE_VETO_ACCOUNTING_RUNDOWN);
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN) )
    {
      v0 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v1 = PpmPlatformStates;
      v2 = 0;
      i = 0;
      v3 = v0;
      if ( *(_DWORD *)PpmPlatformStates )
      {
        v4 = 0;
        do
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&i;
          UserData.Size = 4;
          v5 = (_QWORD **)(448LL * v4 + v1 + 88);
          v6 = *v5;
          if ( *v5 != v5 )
          {
            do
            {
              v11 = 0;
              v14 = 0;
              v9 = v6 + 2;
              v10 = 4;
              v12 = (char *)v6 + 20;
              v13 = 4;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 3u, &UserData);
              v6 = (_QWORD *)*v6;
            }
            while ( v6 != v5 );
            v2 = i;
          }
          v1 = PpmPlatformStates;
          i = ++v2;
          v4 = v2;
        }
        while ( v2 < *(_DWORD *)PpmPlatformStates );
      }
      KeReleaseSpinLock(&PpmIdleVetoLock, v3);
    }
  }
}
