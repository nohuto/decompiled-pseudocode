/*
 * XREFs of KeGetThreadPpmPolicy @ 0x1404F8F48
 * Callers:
 *     PspGetThreadPpmPolicy @ 0x140ABC9A8 (PspGetThreadPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetThreadPpmPolicy(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 958);
}
