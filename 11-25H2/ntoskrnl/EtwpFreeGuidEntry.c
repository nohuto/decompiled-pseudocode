/*
 * XREFs of EtwpFreeGuidEntry @ 0x14089D208
 * Callers:
 *     EtwpAddGuidEntry @ 0x1408995E0 (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeGuidEntry(char *P)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rsi
  char **v7; // rdx
  PVOID *v8; // rcx
  signed __int64 *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt

  if ( *((_QWORD *)P + 50) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = (unsigned __int64 *)(*((_QWORD *)P + 50) + 408LL);
    v5 = KeAbPreAcquire((__int64)v4, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = KeGetCurrentThread();
    v7 = (char **)*((_QWORD *)P + 2);
    if ( v7[1] != P + 16 || (v8 = (PVOID *)*((_QWORD *)P + 3), *v8 != P + 16) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (char *)v8;
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = 0LL;
    v9 = (signed __int64 *)(*((_QWORD *)P + 50) + 408LL);
    _m_prefetchw(v9);
    v10 = *v9;
    v11 = *v9 - 16;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v11 = 0LL;
    if ( (v10 & 2) != 0 || (v12 = *v9, v12 != _InterlockedCompareExchange64(v9, v11, v10)) )
      ExfReleasePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(*((PVOID *)P + 50));
  }
  ObDereferenceSecurityDescriptor(*((_QWORD *)P + 9), 1u);
  v2 = (void *)*((_QWORD *)P + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)P + 49) + 4120LL), 0xFFFFFFFF);
  ExFreePoolWithTag(P, 0);
}
