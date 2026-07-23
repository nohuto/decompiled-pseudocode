/*
 * XREFs of HalpSecureResumePoint @ 0x1406A6FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpSecureResumePoint()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v0 = (_QWORD *)(HalpHiberProcState + 1472LL * KeGetPcr()->Prcb.Number + 240);
  v1 = v0[16];
  v2 = v0[17];
  v3 = v0[23];
  v4 = v0[24];
  __writeeflags(*(_QWORD *)((char *)v0 + 68));
  _fxrstor(v0 + 32);
  return HalpResumePoint(v1, v2, v3, v4);
}
