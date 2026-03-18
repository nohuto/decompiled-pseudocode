/*
 * XREFs of ExpCleanupAutoExpandPushLock @ 0x1402B99A0
 * Callers:
 *     FsRtlFreeAePushLock @ 0x14057FEC0 (FsRtlFreeAePushLock.c)
 * Callees:
 *     ExpSaAllocatorFree @ 0x1402B980C (ExpSaAllocatorFree.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 */

void __fastcall ExpCleanupAutoExpandPushLock(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rdx
  ULONG_PTR v7; // rcx

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 1) != 0 )
  {
    v2 = v1 & 0xFFFFFFF8;
    v3 = ((unsigned int)v2 >> 13) & 0x3FFFF;
    _BitScanReverse(&v4, v3);
    CurrentThread = KeGetCurrentThread();
    v6 = *(__int64 **)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v4 - 2))
                     + 8 * (v3 ^ (unsigned int)(1 << v4))
                     + 8);
    v7 = v6[2];
    --CurrentThread->SpecialApcDisable;
    ExpSaAllocatorFree(v7, v6, v2, 2u);
    KeLeaveGuardedRegion();
  }
}
