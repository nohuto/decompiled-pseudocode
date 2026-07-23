/*
 * XREFs of IommupDeviceGetPasidDevice @ 0x14054B87C
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x140564290 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x1405645B0 (IommuDomainDetachDeviceEx.c)
 *     IommupDeviceDisableSvm @ 0x1406FCEE8 (IommupDeviceDisableSvm.c)
 *     IommuDeviceDelete @ 0x140701590 (IommuDeviceDelete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

char __fastcall IommupDeviceGetPasidDevice(__int64 a1, __int64 a2, char a3, __int64 **a4)
{
  unsigned __int64 *v4; // rbx
  char v7; // di
  char *v9; // rax
  char *v10; // rsi
  __int64 *i; // rax
  __int64 *v12; // rdx
  __int64 **v13; // rcx

  v4 = (unsigned __int64 *)(a1 + 376);
  v7 = 0;
  *a4 = 0LL;
  v9 = (char *)KeAbPreAcquire(a1 + 376, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v9, (__int64)v4);
  if ( v10 )
    v10[10] = 1;
  for ( i = *(__int64 **)(a1 + 360); i != (__int64 *)(a1 + 360); i = (__int64 *)*i )
  {
    if ( !*((_DWORD *)i + 12) )
    {
      if ( a3 )
      {
        v12 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i || (v13 = (__int64 **)i[1], *v13 != i) )
          __fastfail(3u);
        *v13 = v12;
        v12[1] = (__int64)v13;
      }
      v7 = 1;
      *a4 = i;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v7;
}
