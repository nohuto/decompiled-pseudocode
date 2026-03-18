/*
 * XREFs of MiInsertNewProcess @ 0x14049125C
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140A47A3C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiInsertNewProcess(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = ExAcquireSpinLockExclusive(&dword_140E37180);
  v3 = (_QWORD *)qword_140E2D820;
  v4 = (_QWORD *)(a1 + 1344);
  if ( *(__int64 **)qword_140E2D820 != &qword_140E2D818 )
    __fastfail(3u);
  *v4 = &qword_140E2D818;
  v4[1] = v3;
  *v3 = v4;
  qword_140E2D820 = (__int64)v4;
  return MiReleaseSpinLockExclusive(&dword_140E37180, v2);
}
