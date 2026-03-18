/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x140879D10
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140836818 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x140837E90 (ExpWnfCreateNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x14083E7D4 (EtwpFreeGuidEntry.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     SeDefaultObjectMethod @ 0x140858190 (SeDefaultObjectMethod.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408588B0 (ObSetSecurityDescriptorInfo.c)
 *     ObReleaseObjectSecurityEx @ 0x140867FD0 (ObReleaseObjectSecurityEx.c)
 *     ObpCheckObjectReference @ 0x14086802C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1408682F0 (ObCheckCreateObjectAccess.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1408792D4 (ObQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14087AD00 (ObpAdjustCreatorAccessState.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087AEFC (ObpReferenceSecurityDescriptorSlow.c)
 *     ExpWnfDeleteNameInstance @ 0x1408AA6E8 (ExpWnfDeleteNameInstance.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140A2B970 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A5AC1C (IopSetDeviceSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A9290C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v11; // rax
  _QWORD *v12; // r15
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
    ExfAcquirePushLockExclusiveEx(v9, (__int64)v11, (__int64)v9);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  v13 = _InterlockedExchangeAdd64(v3 + 1, -a2) - v5;
  if ( v13 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread();
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
    KeLeaveCriticalRegionThread();
    ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
  }
}
