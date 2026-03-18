/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x140395130
 * Callers:
 *     <none>
 * Callees:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140395150 (DxgkOpenResourceFromNtHandleInternal.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(__int64 a1)
{
  return DxgkOpenResourceFromNtHandleInternal(a1, 0LL);
}
