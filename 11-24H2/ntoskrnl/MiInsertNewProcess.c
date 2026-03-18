/*
 * XREFs of MiInsertNewProcess @ 0x140490A94
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140AE66AC (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiInsertNewProcess(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = ExAcquireSpinLockExclusive(&dword_140E373C0);
  v3 = (_QWORD *)qword_140E2DA60;
  v4 = (_QWORD *)(a1 + 1344);
  if ( *(__int64 **)qword_140E2DA60 != &qword_140E2DA58 )
    __fastfail(3u);
  *v4 = &qword_140E2DA58;
  v4[1] = v3;
  *v3 = v4;
  qword_140E2DA60 = (__int64)v4;
  return MiReleaseSpinLockExclusive(&dword_140E373C0, v2);
}
