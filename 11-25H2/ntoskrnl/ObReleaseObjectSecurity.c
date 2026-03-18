/*
 * XREFs of ObReleaseObjectSecurity @ 0x1409CFC60
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObReleaseObjectSecurityWrapper @ 0x14062A580 (DifObReleaseObjectSecurityWrapper.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  volatile signed __int64 *v2; // rsi
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v6; // rdi
  volatile signed __int64 *v7; // r14
  __int64 *v8; // rax
  __int64 *v9; // rbp
  signed __int64 v10; // rax
  bool v11; // cc
  signed __int64 v12; // rax
  volatile signed __int64 *i; // rcx
  ULONG v14; // edx

  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
    {
      v14 = 0;
LABEL_19:
      ExFreePoolWithTag(SecurityDescriptor, v14);
      return;
    }
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
      ExfAcquirePushLockExclusiveEx(v6, v8, (__int64)v6);
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v14 = 1666409039;
      SecurityDescriptor = (PSECURITY_DESCRIPTOR)v2;
      goto LABEL_19;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
}
