/*
 * XREFs of EtwpFreeGuidEntry @ 0x14083E7D4
 * Callers:
 *     EtwpAddGuidEntry @ 0x140838B30 (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeGuidEntry(char *P)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  char **v7; // rdx
  PVOID *v8; // rcx
  __int64 *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  __int64 v12; // rtt

  if ( *((_QWORD *)P + 82) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = (unsigned __int64 *)(*((_QWORD *)P + 82) + 664LL);
    v5 = KeAbPreAcquire((__int64)v4, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, (__int64)v5, (__int64)v4);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    *(_QWORD *)(*((_QWORD *)P + 82) + 672LL) = KeGetCurrentThread();
    v7 = (char **)*((_QWORD *)P + 2);
    if ( v7[1] != P + 16 || (v8 = (PVOID *)*((_QWORD *)P + 3), *v8 != P + 16) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (char *)v8;
    *(_QWORD *)(*((_QWORD *)P + 82) + 672LL) = 0LL;
    v9 = (__int64 *)(*((_QWORD *)P + 82) + 664LL);
    _m_prefetchw(v9);
    v10 = *v9;
    v11 = *v9 - 16;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v11 = 0LL;
    if ( (v10 & 2) != 0 || (v12 = *v9, v12 != _InterlockedCompareExchange64(v9, v11, v10)) )
      ExfReleasePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(*((__int64 **)P + 82));
  }
  ObDereferenceSecurityDescriptor(*((_QWORD *)P + 9), 1LL);
  v2 = (void *)*((_QWORD *)P + 80);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)P + 81) + 4392LL), 0xFFFFFFFF);
  ExFreePoolWithTag(P, 0);
}
