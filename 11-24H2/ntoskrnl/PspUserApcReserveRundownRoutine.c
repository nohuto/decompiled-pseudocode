/*
 * XREFs of PspUserApcReserveRundownRoutine @ 0x140A463B0
 * Callers:
 *     PspUserApcReserveKernelRoutine @ 0x140A46390 (PspUserApcReserveKernelRoutine.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspUserApcReserveRundownRoutine(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = (_DWORD *)(a1 - 8);
  *v1 = 0;
  return ObfDereferenceObject(v1);
}
