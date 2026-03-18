/*
 * XREFs of KiRcuStartGracePeriod @ 0x1405B80A4
 * Callers:
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403A53D0 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuFreePool @ 0x1405B8010 (KeRcuFreePool.c)
 *     KeRcuSynchronize @ 0x14072FF70 (KeRcuSynchronize.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiRcuForEachParticipatingCpu @ 0x1404C6AD8 (KiRcuForEachParticipatingCpu.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 */

void __fastcall KiRcuStartGracePeriod(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F20498);
  v3 = qword_140F204A8 + 1;
  a1[2] = qword_140F204A8 + 1;
  v4 = (_QWORD *)qword_140F204B8;
  if ( *(__int64 **)qword_140F204B8 != &qword_140F204B0 )
    __fastfail(3u);
  a1[1] = qword_140F204B8;
  *a1 = &qword_140F204B0;
  *v4 = a1;
  qword_140F204B8 = (__int64)a1;
  qword_140F204A8 = v3;
  KeReleaseSpinLock(&qword_140F20498, v2);
  v5 = 0;
  v7 = 0;
  KiRcuForEachParticipatingCpu(v6, &v7);
  if ( v7 )
  {
    LOBYTE(v5) = (a1[3] & 0xFFFFFFFFFFFFFFFCuLL) < 8;
    KiRcuFlushCompleted(v5);
  }
}
