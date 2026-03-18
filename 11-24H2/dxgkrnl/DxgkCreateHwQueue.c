/*
 * XREFs of DxgkCreateHwQueue @ 0x1402BB790
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCreateHwQueueInternal @ 0x1402BAF98 (DxgkCreateHwQueueInternal.c)
 */

__int64 __fastcall DxgkCreateHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  return DxgkCreateHwQueueInternal(a1, 1, a3);
}
