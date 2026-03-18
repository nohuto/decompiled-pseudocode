/*
 * XREFs of IvtAllocateDomain @ 0x14056D530
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvInitializeSpinLock @ 0x14055FDB4 (ExtEnvInitializeSpinLock.c)
 */

__int64 __fastcall IvtAllocateDomain(__int64 a1, _QWORD *a2)
{
  ExtEnvInitializeSpinLock(a2 + 9);
  a2[8] = a2 + 7;
  a2[7] = a2 + 7;
  return 0LL;
}
