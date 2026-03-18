/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x140A837E0
 * Callers:
 *     NtCompressKey @ 0x1407C02F0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407C8754 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     CmpTraceHiveFlushStartWaitForActive @ 0x140A838AC (CmpTraceHiveFlushStartWaitForActive.c)
 *     CmpTraceHiveFlushFinishWaitForActive @ 0x140A83918 (CmpTraceHiveFlushFinishWaitForActive.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 *v8; // rax
  struct _KEVENT Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  memset(&Object, 0, sizeof(Object));
  v10 = 0LL;
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v11 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Object;
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v4);
  CmpTraceHiveFlushStartWaitForActive();
  v5 = KeAbPreAcquire(a2, 0LL);
  v6 = (__int64)v5;
  if ( v5 )
    KeAbPreWait(v5);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  if ( v6 )
  {
    v8 = KeAbPreAcquire(a2, v6);
    KeAbPostReleaseEx(a2, (ULONG_PTR)v8);
  }
  CmpTraceHiveFlushFinishWaitForActive();
  return (unsigned int)v10;
}
