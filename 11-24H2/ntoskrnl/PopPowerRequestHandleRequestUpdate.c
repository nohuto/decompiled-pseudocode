/*
 * XREFs of PopPowerRequestHandleRequestUpdate @ 0x140A45D7C
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x140464F00 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140747F20 (PopPowerRequestDebounceTimerWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopUmpoSendPowerRequestAction @ 0x14075BFE0 (PopUmpoSendPowerRequestAction.c)
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
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

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
        PopReleaseRwLock(&PopPowerRequestLock);
        guard_dispatch_icall_no_overrides(0LL, a2);
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
        v12 = *((_DWORD *)v6 + 3) & 0xFFFFFFFD | (2 * v15);
        *((_DWORD *)v6 + 3) = v12;
        if ( v14 )
        {
          if ( (unsigned int)++v13 >= 3 )
          {
            ++*((_DWORD *)v6 + 2);
            v17[0] = 0LL;
            v17[1] = -1LL;
            *((_DWORD *)v6 + 3) = v12 | 8;
            LOBYTE(v9) = KeSetTimer2(
                           (__int64)&PopPowerRequestDebounceTimer,
                           (LARGE_INTEGER)-50000000LL,
                           0LL,
                           (__int64)v17);
            break;
          }
        }
      }
      *((_DWORD *)v6 + 3) &= ~4u;
    }
  }
  else
  {
    PopReleaseRwLock(&PopPowerRequestLock);
    guard_dispatch_icall_no_overrides(a1, a2);
    LOBYTE(v9) = (unsigned __int8)PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  }
  return v9;
}
