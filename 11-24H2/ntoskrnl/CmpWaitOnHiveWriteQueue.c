/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x140A847CC
 * Callers:
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     CmpTraceHiveFlushStartWaitForActive @ 0x140A84898 (CmpTraceHiveFlushStartWaitForActive.c)
 *     CmpTraceHiveFlushFinishWaitForActive @ 0x140A84904 (CmpTraceHiveFlushFinishWaitForActive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  _QWORD *v11; // rax
  struct _KEVENT Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  memset(&Object, 0, sizeof(Object));
  v13 = 0LL;
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v14 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Object;
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v4);
  CmpTraceHiveFlushStartWaitForActive();
  v5 = (char *)KeAbPreAcquire(a2, 0LL);
  v9 = (__int64)v5;
  if ( v5 )
    KeAbPreWait(v5, v6, v7, v8);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  if ( v9 )
  {
    v11 = KeAbPreAcquire(a2, v9);
    KeAbPostReleaseEx(a2, (ULONG_PTR)v11);
  }
  CmpTraceHiveFlushFinishWaitForActive();
  return (unsigned int)v13;
}
