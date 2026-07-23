/*
 * XREFs of KiEnclsDebugRead @ 0x1406ABEC0
 * Callers:
 *     KeDebugReadEnclaveMemory @ 0x140993ECC (KeDebugReadEnclaveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsDebugRead(__int64 a1, __int64 a2)
{
  __asm { encls }
  return a2;
}
