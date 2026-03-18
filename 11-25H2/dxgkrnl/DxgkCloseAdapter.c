/*
 * XREFs of DxgkCloseAdapter @ 0x14031DF00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x14031DF20 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapter(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkCloseAdapterImpl(a1, a2);
}
