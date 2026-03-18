/*
 * XREFs of IommupHvDetachPasidDeviceDomain @ 0x140563374
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B814 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BB10 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IommupHvDetachPasidDeviceDomain(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( a2 )
  {
    if ( *(_DWORD *)(v2 + 8) != 1 )
    {
      v4 = KeAbPreAcquire(v2 + 104, 0LL);
      v5 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 104), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 104), v4, v2 + 104);
      if ( v5 )
        *((_BYTE *)v5 + 10) = 1;
      if ( (*(_DWORD *)(v2 + 92))-- == 1 )
      {
        LODWORD(v7) = *(_DWORD *)(v2 + 48);
        BYTE4(v7) = 1;
        guard_dispatch_icall_no_overrides(&v7);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 104));
      KeAbPostRelease(v2 + 104);
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 32);
    LODWORD(v7) = IommupHvPasidInitialDomainId;
    BYTE4(v7) = 1;
    guard_dispatch_icall_no_overrides(v3);
  }
}
