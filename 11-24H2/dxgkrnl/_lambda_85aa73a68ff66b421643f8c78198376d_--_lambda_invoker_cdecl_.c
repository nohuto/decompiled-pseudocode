/*
 * XREFs of _lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_ @ 0x1401AA7D0
 * Callers:
 *     <none>
 * Callees:
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1401AAABC (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AddAdapter.c)
 *     IsStartedIndirectDisplayDevice @ 0x1401AB458 (IsStartedIndirectDisplayDevice.c)
 */

__int64 __fastcall lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_(struct DXGADAPTER *a1, __int64 a2)
{
  char v4; // al
  unsigned int v5; // r8d

  v4 = IsStartedIndirectDisplayDevice(a1);
  v5 = 0;
  if ( v4 )
    return (unsigned int)DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter(a2, a1, 0LL);
  return v5;
}
