/*
 * XREFs of RtlAcquireResourceShared @ 0x1800DC7A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlpPossibleDeadlock @ 0x18009BC30 (RtlpPossibleDeadlock.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 */

char __fastcall RtlAcquireResourceShared(unsigned __int64 a1, char a2)
{
  signed __int32 v2; // r8d
  bool v5; // zf
  signed __int32 v6; // eax
  int v8; // ebp
  LARGE_INTEGER *v9; // rsi
  NTSTATUS v10; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett

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
      while ( v2 >= 0 )
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), v2 + 1, v2);
        v5 = v2 == v6;
        v2 = v6;
        if ( v5 )
          return 1;
      }
      if ( !a2 )
        return 0;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
      v2 = *(_DWORD *)(a1 + 68);
      if ( v2 >= 0 )
      {
        v11 = *(_DWORD *)(a1 + 48);
        while ( v11 > 0 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v11 - 1, v11);
          if ( v12 == v11 )
            goto LABEL_2;
        }
        if ( v11 )
          continue;
      }
      v8 = 0;
      while ( 1 )
      {
        v9 = 0LL;
        if ( (*(_BYTE *)(a1 + 80) & 1) == 0 )
          v9 = &RtlpTimeout;
        v10 = NtWaitForSingleObject(*(HANDLE *)(a1 + 40), 0, v9);
        if ( v10 != 258 )
          break;
        DbgPrintEx(
          101,
          0,
          "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n",
          v8,
          ((unsigned __int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 63)
        + ((__int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 23));
        DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
        if ( (unsigned int)++v8 > 2 )
          RtlpPossibleDeadlock(a1);
        DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
      }
      if ( v10 < 0 )
        RtlRaiseStatus(v10);
      v2 = *(_DWORD *)(a1 + 68);
    }
  }
}
