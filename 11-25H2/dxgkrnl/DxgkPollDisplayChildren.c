/*
 * XREFs of DxgkPollDisplayChildren @ 0x1403CA380
 * Callers:
 *     <none>
 * Callees:
 *     DxgkPollDisplayChildrenInternal @ 0x1403CA3A0 (DxgkPollDisplayChildrenInternal.c)
 */

__int64 __fastcall DxgkPollDisplayChildren(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkPollDisplayChildrenInternal(a1, a2);
}
