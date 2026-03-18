/*
 * XREFs of KiRcuStartGracePeriod @ 0x1405BBF44
 * Callers:
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402CD480 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuFreePool @ 0x1405BBEB0 (KeRcuFreePool.c)
 *     KeRcuSynchronize @ 0x14073C200 (KeRcuSynchronize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KiRcuForEachParticipatingCpu @ 0x1404C70FC (KiRcuForEachParticipatingCpu.c)
 */

void __fastcall KiRcuStartGracePeriod(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F20C38);
  v3 = qword_140F20C48 + 1;
  a1[2] = qword_140F20C48 + 1;
  v4 = (_QWORD *)qword_140F20C58;
  if ( *(__int64 **)qword_140F20C58 != &qword_140F20C50 )
    __fastfail(3u);
  a1[1] = qword_140F20C58;
  *a1 = &qword_140F20C50;
  *v4 = a1;
  qword_140F20C58 = (__int64)a1;
  qword_140F20C48 = v3;
  KeReleaseSpinLock(&qword_140F20C38, v2);
  v5 = 0;
  v7 = 0;
  KiRcuForEachParticipatingCpu(v6, &v7);
  if ( v7 )
  {
    LOBYTE(v5) = (a1[3] & 0xFFFFFFFFFFFFFFFCuLL) < 8;
    KiRcuFlushCompleted(v5);
  }
}
