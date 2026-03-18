/*
 * XREFs of ObpReferenceSecurityDescriptorSlow @ 0x14087AEFC
 * Callers:
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     ObpGetObjectSecurity @ 0x140853850 (ObpGetObjectSecurity.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14087AD00 (ObpAdjustCreatorAccessState.c)
 *     ObpReferenceSecurityDescriptor @ 0x14090FEF0 (ObpReferenceSecurityDescriptor.c)
 *     ObGetObjectSecurity @ 0x1409B26F0 (ObGetObjectSecurity.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall ObpReferenceSecurityDescriptorSlow(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v9; // rdi
  _QWORD *v10; // rbx

  v3 = a3;
  if ( a2 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 - 24), 0xFuLL) <= 0 )
      __fastfail(0xEu);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (signed __int64 *)(a1 + 16);
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire(a1 + 16, 0LL);
    if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9, 0, v10, (__int64)v9);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    v3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), 0x10uLL) <= 0 )
      __fastfail(0xEu);
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
  }
  _m_prefetchw((const void *)(a1 + 40));
  v5 = *(_QWORD *)(a1 + 40);
  while ( (v5 & 0xF) == 0 && v3 == (v5 & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v5 + 15, v5);
    if ( v6 == v5 )
      return v3;
  }
  ObDereferenceSecurityDescriptor(v3, 0xFu);
  return v3;
}
