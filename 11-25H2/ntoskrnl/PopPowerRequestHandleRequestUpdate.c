/*
 * XREFs of PopPowerRequestHandleRequestUpdate @ 0x140A4C6BC
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x14046D8F0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x14073DB70 (PopPowerRequestDebounceTimerWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopUmpoSendPowerRequestAction @ 0x1407506C4 (PopUmpoSendPowerRequestAction.c)
 */

char __fastcall PopPowerRequestHandleRequestUpdate(__int64 a1, int a2, char a3)
{
  __int64 (__fastcall **v5)(); // rbx
  int v6; // eax
  int v7; // r8d
  int v8; // eax
  bool v9; // zf
  int v10; // ecx
  unsigned int v11; // ecx
  int v12; // edi
  int v13; // r14d
  unsigned __int8 v14; // si
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = &PopPowerRequestAttributes + 6 * a2;
  v6 = *((_DWORD *)v5 + 2);
  v7 = v6 + 1;
  v8 = v6 - 1;
  if ( a3 )
    v8 = v7;
  *((_DWORD *)v5 + 2) = v8;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      if ( (unsigned int)a2 <= 3 )
      {
        v9 = PopPowerRequestNotificationsEnabled == 0;
        *(_BYTE *)(a2 + a1 + 153) = a3;
        if ( !v9 )
          LOBYTE(v8) = PopUmpoSendPowerRequestAction(*(_DWORD *)(a1 + 36), a2, a3);
      }
    }
  }
  v10 = *((_DWORD *)v5 + 3);
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 4) == 0 )
    {
      v11 = v10 | 4;
      *((_DWORD *)v5 + 3) = v11;
      v12 = 0;
      while ( 1 )
      {
        v13 = v11 & 2;
        v14 = *((_DWORD *)v5 + 2) != 0;
        LOBYTE(v8) = v13 != 0;
        if ( (_BYTE)v8 == v14 )
          break;
        PopReleaseRwLock(&PopPowerRequestLock);
        guard_dispatch_icall_no_overrides(0LL);
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
        v11 = *((_DWORD *)v5 + 3) & 0xFFFFFFFD | (2 * v14);
        *((_DWORD *)v5 + 3) = v11;
        if ( v13 )
        {
          if ( (unsigned int)++v12 >= 3 )
          {
            ++*((_DWORD *)v5 + 2);
            v16[0] = 0LL;
            v16[1] = -1LL;
            *((_DWORD *)v5 + 3) = v11 | 8;
            LOBYTE(v8) = KeSetTimer2(
                           (__int64)&PopPowerRequestDebounceTimer,
                           (LARGE_INTEGER)-50000000LL,
                           0LL,
                           (__int64)v16);
            break;
          }
        }
      }
      *((_DWORD *)v5 + 3) &= ~4u;
    }
  }
  else
  {
    PopReleaseRwLock(&PopPowerRequestLock);
    guard_dispatch_icall_no_overrides(a1);
    LOBYTE(v8) = (unsigned __int8)PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  }
  return v8;
}
