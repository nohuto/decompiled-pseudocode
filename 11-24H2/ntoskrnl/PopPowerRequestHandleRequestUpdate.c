/*
 * XREFs of PopPowerRequestHandleRequestUpdate @ 0x140A4EFCC
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x14046C280 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140749BF0 (PopPowerRequestDebounceTimerWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopUmpoSendPowerRequestAction @ 0x14075D040 (PopUmpoSendPowerRequestAction.c)
 */

char __fastcall PopPowerRequestHandleRequestUpdate(__int64 a1, unsigned int a2, char a3)
{
  __int64 (__fastcall **v6)(); // rbx
  int v7; // eax
  int v8; // r8d
  int v9; // eax
  bool v10; // zf
  int v11; // ecx
  unsigned int v12; // ecx
  int v13; // edi
  int v14; // r14d
  unsigned __int8 v15; // si
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD v21[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = &PopPowerRequestAttributes + 6 * (int)a2;
  v7 = *((_DWORD *)v6 + 2);
  v8 = v7 + 1;
  v9 = v7 - 1;
  if ( a3 )
    v9 = v8;
  *((_DWORD *)v6 + 2) = v9;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      if ( a2 <= 3 )
      {
        v10 = PopPowerRequestNotificationsEnabled == 0;
        *(_BYTE *)((int)a2 + a1 + 153) = a3;
        if ( !v10 )
          LOBYTE(v9) = PopUmpoSendPowerRequestAction(*(_DWORD *)(a1 + 36), a2, a3);
      }
    }
  }
  v11 = *((_DWORD *)v6 + 3);
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
      v12 = v11 | 4;
      *((_DWORD *)v6 + 3) = v12;
      v13 = 0;
      while ( 1 )
      {
        v14 = v12 & 2;
        v15 = *((_DWORD *)v6 + 2) != 0;
        LOBYTE(v9) = v14 != 0;
        if ( (_BYTE)v9 == v15 )
          break;
        PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
        LOBYTE(v16) = v15;
        guard_dispatch_icall_no_overrides(0LL, a2, v16, v17);
        PopAcquireRwLockExclusive(&PopPowerRequestLock);
        v12 = *((_DWORD *)v6 + 3) & 0xFFFFFFFD | (2 * v15);
        *((_DWORD *)v6 + 3) = v12;
        if ( v14 )
        {
          if ( (unsigned int)++v13 >= 3 )
          {
            ++*((_DWORD *)v6 + 2);
            v21[0] = 0LL;
            v21[1] = -1LL;
            *((_DWORD *)v6 + 3) = v12 | 8;
            LOBYTE(v9) = KeSetTimer2((__int64)&PopPowerRequestDebounceTimer, -50000000LL, 0LL, (__int64)v21);
            break;
          }
        }
      }
      *((_DWORD *)v6 + 3) &= ~4u;
    }
  }
  else
  {
    PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
    LOBYTE(v18) = a3;
    guard_dispatch_icall_no_overrides(a1, a2, v18, v19);
    LOBYTE(v9) = (unsigned __int8)PopAcquireRwLockExclusive(&PopPowerRequestLock);
  }
  return v9;
}
