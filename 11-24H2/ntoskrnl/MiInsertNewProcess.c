/*
 * XREFs of MiInsertNewProcess @ 0x14048B0D4
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140AE7F8C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiInsertNewProcess(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = ExAcquireSpinLockExclusive(&SpinLock);
  v3 = (_QWORD *)qword_140E2DBA0;
  v4 = (_QWORD *)(a1 + 1344);
  if ( *(__int64 **)qword_140E2DBA0 != &qword_140E2DB98 )
    __fastfail(3u);
  *v4 = &qword_140E2DB98;
  v4[1] = v3;
  *v3 = v4;
  qword_140E2DBA0 = (__int64)v4;
  return MiReleaseSpinLockExclusive(&SpinLock, v2);
}
