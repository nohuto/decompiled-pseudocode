/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x14086EF20
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x140862780 (ObpAdjustCreatorAccessState.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140862984 (ObpReferenceSecurityDescriptorSlow.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140870540 (ObQuerySecurityDescriptorInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140897194 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x140898930 (ExpWnfCreateNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x14089D208 (EtwpFreeGuidEntry.c)
 *     SeDefaultObjectMethod @ 0x1408A1150 (SeDefaultObjectMethod.c)
 *     ExpWnfDeleteNameInstance @ 0x1408E204C (ExpWnfDeleteNameInstance.c)
 *     ObReleaseObjectSecurityEx @ 0x140914900 (ObReleaseObjectSecurityEx.c)
 *     ObpCheckObjectReference @ 0x1409156D0 (ObpCheckObjectReference.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckCreateObjectAccess @ 0x140915F70 (ObCheckCreateObjectAccess.c)
 *     ObSetSecurityDescriptorInfo @ 0x140919920 (ObSetSecurityDescriptorInfo.c)
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140A21F74 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A573D4 (IopSetDeviceSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A8DE24 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rdi
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v9; // rbp
  volatile signed __int64 *v10; // r14
  __int64 *v11; // rax
  __int64 *v12; // r15
  __int64 v13; // rax
  volatile signed __int64 *i; // rcx

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 8));
  v4 = *(_QWORD *)(a1 - 32 + 8);
  v5 = a2;
  while ( 1 )
  {
    v6 = v4 - a2;
    if ( v6 <= 0 )
      break;
    v7 = v4;
    v4 = _InterlockedCompareExchange64(v3 + 1, v6, v4);
    if ( v7 == v4 )
      return;
  }
  if ( v6 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v3 + 4));
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(v9 + 1);
  v11 = KeAbPreAcquire((__int64)v9, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v11, (__int64)v9);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  v13 = _InterlockedExchangeAdd64(v3 + 1, -a2) - v5;
  if ( v13 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    if ( v13 )
      __fastfail(0xEu);
    for ( i = (volatile signed __int64 *)*v10; i != v3; i = (volatile signed __int64 *)*i )
      v10 = i;
    *v10 = *v3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
  }
}
