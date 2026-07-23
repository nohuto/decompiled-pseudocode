/*
 * XREFs of KiRcuStartGracePeriod @ 0x1405B9574
 * Callers:
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402E6180 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuFreePool @ 0x1405B94E0 (KeRcuFreePool.c)
 *     KeRcuSynchronize @ 0x14073A130 (KeRcuSynchronize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     KiRcuForEachParticipatingCpu @ 0x1404C055C (KiRcuForEachParticipatingCpu.c)
 */

void __fastcall KiRcuStartGracePeriod(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F205B8);
  v3 = qword_140F205C8 + 1;
  a1[2] = qword_140F205C8 + 1;
  v4 = (_QWORD *)qword_140F205D8;
  if ( *(__int64 **)qword_140F205D8 != &qword_140F205D0 )
    __fastfail(3u);
  a1[1] = qword_140F205D8;
  *a1 = &qword_140F205D0;
  *v4 = a1;
  qword_140F205D8 = (__int64)a1;
  qword_140F205C8 = v3;
  KeReleaseSpinLock(&qword_140F205B8, v2);
  v5 = 0;
  v8 = 0;
  KiRcuForEachParticipatingCpu(v6, &v8);
  if ( v8 )
  {
    LOBYTE(v5) = (a1[3] & 0xFFFFFFFFFFFFFFFCuLL) < 8;
    KiRcuFlushCompleted(v5, v7);
  }
}
