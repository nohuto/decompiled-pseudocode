/*
 * XREFs of DxgkDestroyOutputDupl @ 0x140406EC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDestroyOutputDuplInternal @ 0x140182494 (DxgkDestroyOutputDuplInternal.c)
 */

__int64 __fastcall DxgkDestroyOutputDupl(__int64 a1, __int64 a2, __int64 a3)
{
  return DxgkDestroyOutputDuplInternal(a1, 0, a3);
}
