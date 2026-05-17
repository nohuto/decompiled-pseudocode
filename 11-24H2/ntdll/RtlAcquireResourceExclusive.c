/*
 * XREFs of RtlAcquireResourceExclusive @ 0x1800E04E0
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x180106EC0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlpPossibleDeadlock @ 0x18009BC30 (RtlpPossibleDeadlock.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 */

char __fastcall RtlAcquireResourceExclusive(unsigned __int64 a1, char a2)
{
  int v2; // r8d
  char result; // al
  int v6; // ebp
  LARGE_INTEGER *v7; // rsi
  NTSTATUS v8; // eax
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v2 = *(_DWORD *)(a1 + 68);
  if ( v2 < 0 && *(void **)(a1 + 72) == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 68));
    return 1;
  }
  else
  {
    while ( 1 )
    {
LABEL_2:
      while ( !v2 )
      {
        v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), -1, 0);
        if ( !v2 )
        {
          result = 1;
          *(_QWORD *)(a1 + 72) = NtCurrentTeb()->ClientId.UniqueThread;
          return result;
        }
      }
      if ( !a2 )
        return 0;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
      v2 = *(_DWORD *)(a1 + 68);
      if ( !v2 )
      {
        v9 = *(_DWORD *)(a1 + 64);
        while ( v9 > 0 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v9 - 1, v9);
          if ( v10 == v9 )
            goto LABEL_2;
        }
        if ( v9 )
          continue;
      }
      v6 = 0;
      while ( 1 )
      {
        v7 = 0LL;
        if ( (*(_BYTE *)(a1 + 80) & 1) == 0 )
          v7 = &RtlpTimeout;
        v8 = NtWaitForSingleObject(*(HANDLE *)(a1 + 56), 0, v7);
        if ( v8 != 258 )
          break;
        DbgPrintEx(
          101,
          0,
          "RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n",
          v6,
          ((unsigned __int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 63)
        + ((__int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 23));
        DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
        if ( (unsigned int)++v6 > 2 )
          RtlpPossibleDeadlock(a1);
        DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
      }
      if ( v8 < 0 )
        RtlRaiseStatus(v8);
      v2 = *(_DWORD *)(a1 + 68);
    }
  }
}
