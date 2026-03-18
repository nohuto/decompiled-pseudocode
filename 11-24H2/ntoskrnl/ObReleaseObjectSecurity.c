/*
 * XREFs of ObReleaseObjectSecurity @ 0x1409D22E0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140363E20 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObReleaseObjectSecurityWrapper @ 0x140636540 (DifObReleaseObjectSecurityWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  volatile signed __int64 *v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v6; // rsi
  volatile signed __int64 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  signed __int64 v10; // rcx
  bool v11; // cc
  signed __int64 v12; // rcx
  volatile signed __int64 *i; // rdx

  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
    {
      ExFreePoolWithTag(SecurityDescriptor, 0);
    }
    else
    {
      v2 = (volatile signed __int64 *)((char *)SecurityDescriptor - 32);
      _m_prefetchw((char *)SecurityDescriptor - 24);
      v3 = *((_QWORD *)SecurityDescriptor - 3);
      while ( v3 - 1 > 0 )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64(v2 + 1, v3 - 1, v3);
        if ( v4 == v3 )
          return;
      }
      if ( v3 != 1 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      v6 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v2 + 4));
      --CurrentThread->KernelApcDisable;
      v7 = (volatile signed __int64 *)(v6 + 1);
      v8 = KeAbPreAcquire((__int64)v6, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, (__int64)v8, (__int64)v6);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      v10 = _InterlockedExchangeAdd64(v2 + 1, 0xFFFFFFFFFFFFFFFFuLL);
      v11 = v10 <= 1;
      v12 = v10 - 1;
      if ( v11 )
      {
        if ( v12 )
          __fastfail(0xEu);
        for ( i = (volatile signed __int64 *)*v7; i != v2; i = (volatile signed __int64 *)*i )
          v7 = i;
        *v7 = *v2;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v6);
        KeAbPostRelease((ULONG_PTR)v6);
        KeLeaveCriticalRegionThread();
        ExFreePoolWithTag((PVOID)v2, 0x6353624Fu);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v6);
        KeAbPostRelease((ULONG_PTR)v6);
        KeLeaveCriticalRegionThread();
      }
    }
  }
}
