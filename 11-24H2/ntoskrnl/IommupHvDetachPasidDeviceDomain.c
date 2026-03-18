/*
 * XREFs of IommupHvDetachPasidDeviceDomain @ 0x140565B84
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054E124 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054E420 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IommupHvDetachPasidDeviceDomain(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rsi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  if ( a2 )
  {
    if ( *(_DWORD *)(v4 + 8) != 1 )
    {
      v6 = KeAbPreAcquire(v4 + 104, 0LL);
      v10 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 104), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 104), (__int64)v6, v4 + 104);
      if ( v10 )
        *((_BYTE *)v10 + 10) = 1;
      if ( (*(_DWORD *)(v4 + 92))-- == 1 )
      {
        LODWORD(v12) = *(_DWORD *)(v4 + 48);
        BYTE4(v12) = 1;
        guard_dispatch_icall_no_overrides(&v12, v7, v8, v9);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 104));
      KeAbPostRelease(v4 + 104);
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 32);
    LODWORD(v12) = IommupHvPasidInitialDomainId;
    BYTE4(v12) = 1;
    guard_dispatch_icall_no_overrides(v5, &v12, a3, a4);
  }
}
