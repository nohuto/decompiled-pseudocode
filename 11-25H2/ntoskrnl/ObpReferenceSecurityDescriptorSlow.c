/*
 * XREFs of ObpReferenceSecurityDescriptorSlow @ 0x140862984
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x140862780 (ObpAdjustCreatorAccessState.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408A4FB0 (ObpReferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall ObpReferenceSecurityDescriptorSlow(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v9; // rdi
  __int64 *v10; // rbx

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
      ExfAcquirePushLockSharedEx(v9, 0, v10, (unsigned __int64)v9);
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
  ObDereferenceSecurityDescriptor(v3, 15LL);
  return v3;
}
