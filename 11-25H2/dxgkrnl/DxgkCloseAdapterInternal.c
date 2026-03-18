/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1401A99F0
 * Callers:
 *     ??1CAdapter@@IEAA@XZ @ 0x140098F40 (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x14031DF20 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(__int64 a1)
{
  return DxgkCloseAdapterImpl(a1, 0LL);
}
