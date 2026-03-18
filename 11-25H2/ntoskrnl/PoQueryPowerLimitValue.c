/*
 * XREFs of PoQueryPowerLimitValue @ 0x14073EBF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerLimitUpdatePendingEvents @ 0x14073F9B4 (PopPowerLimitUpdatePendingEvents.c)
 */

__int64 __fastcall PoQueryPowerLimitValue(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdi
  unsigned int v7; // ecx
  unsigned int i; // eax
  __int64 v9; // r8
  unsigned int v10; // ebx

  if ( a1 && a2 && a3 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    PopAcquireRwLockExclusive((unsigned __int64 *)(v6 + 32));
    if ( *(_BYTE *)(a1 + 16) && *(_BYTE *)(v6 + 48) )
    {
      v7 = 0;
LABEL_7:
      if ( v7 >= a2 )
      {
        ++*(_DWORD *)(v6 + 180);
        PopReleaseRwLock((signed __int64 *)(v6 + 32));
        v10 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 120));
        PopAcquireRwLockExclusive((unsigned __int64 *)(v6 + 32));
        --*(_DWORD *)(v6 + 180);
        PopPowerLimitUpdatePendingEvents(v6);
      }
      else
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 32); ++i )
        {
          v9 = *(_QWORD *)(a1 + 40);
          if ( *(_DWORD *)(a3 + 16LL * v7) == *(_DWORD *)(v9 + 16LL * i)
            && *(_DWORD *)(a3 + 16LL * v7 + 4) == *(_DWORD *)(v9 + 16LL * i + 4) )
          {
            ++v7;
            goto LABEL_7;
          }
        }
        v10 = -1073741637;
      }
    }
    else
    {
      v10 = -1073741431;
    }
    PopReleaseRwLock((signed __int64 *)(v6 + 32));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
