/*
 * XREFs of IommupHvDetachPasidDeviceDomain @ 0x14056383C
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BD54 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IommupHvDetachPasidDeviceDomain(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  char *v4; // rax
  __int64 v5; // rdx
  char *v6; // rsi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( a2 )
  {
    if ( *(_DWORD *)(v2 + 8) != 1 )
    {
      v4 = (char *)KeAbPreAcquire(v2 + 104, 0LL);
      v6 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 104), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 104), v4, v2 + 104);
      if ( v6 )
        v6[10] = 1;
      if ( (*(_DWORD *)(v2 + 92))-- == 1 )
      {
        LODWORD(v8) = *(_DWORD *)(v2 + 48);
        BYTE4(v8) = 1;
        guard_dispatch_icall_no_overrides(&v8, v5);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 104));
      KeAbPostRelease(v2 + 104);
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 32);
    LODWORD(v8) = IommupHvPasidInitialDomainId;
    BYTE4(v8) = 1;
    guard_dispatch_icall_no_overrides(v3, &v8);
  }
}
