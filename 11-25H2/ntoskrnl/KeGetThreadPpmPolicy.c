/*
 * XREFs of KeGetThreadPpmPolicy @ 0x1404F8F78
 * Callers:
 *     PspGetThreadPpmPolicy @ 0x140ABD8D0 (PspGetThreadPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetThreadPpmPolicy(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 958);
}
