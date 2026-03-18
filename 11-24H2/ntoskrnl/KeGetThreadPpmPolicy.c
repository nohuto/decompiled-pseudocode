/*
 * XREFs of KeGetThreadPpmPolicy @ 0x1404FB684
 * Callers:
 *     PspGetThreadPpmPolicy @ 0x140AC16C0 (PspGetThreadPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetThreadPpmPolicy(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 958);
}
