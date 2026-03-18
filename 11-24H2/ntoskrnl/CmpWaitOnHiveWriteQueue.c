/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x140A882DC
 * Callers:
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D7EEC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     CmpTraceHiveFlushStartWaitForActive @ 0x140A883A8 (CmpTraceHiveFlushStartWaitForActive.c)
 *     CmpTraceHiveFlushFinishWaitForActive @ 0x140A88414 (CmpTraceHiveFlushFinishWaitForActive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BB9A98 (HvUnlockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  _QWORD *v10; // rax
  struct _KEVENT Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  memset(&Object, 0, sizeof(Object));
  v12 = 0LL;
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v13 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Object;
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v4);
  CmpTraceHiveFlushStartWaitForActive();
  v5 = KeAbPreAcquire(a2, 0LL);
  v8 = (__int64)v5;
  if ( v5 )
    KeAbPreWait((__int64)v5, v6, v7);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  if ( v8 )
  {
    v10 = KeAbPreAcquire(a2, v8);
    KeAbPostReleaseEx(a2, (ULONG_PTR)v10);
  }
  CmpTraceHiveFlushFinishWaitForActive();
  return (unsigned int)v12;
}
