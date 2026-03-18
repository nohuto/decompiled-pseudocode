/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1401ABEF0
 * Callers:
 *     ??1CAdapter@@IEAA@XZ @ 0x14009B090 (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x140322C20 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(__int64 a1)
{
  return DxgkCloseAdapterImpl(a1, 0LL);
}
