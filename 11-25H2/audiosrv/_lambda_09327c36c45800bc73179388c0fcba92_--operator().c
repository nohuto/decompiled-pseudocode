/*
 * XREFs of _lambda_09327c36c45800bc73179388c0fcba92_::operator() @ 0x1800DFBB0
 * Callers:
 *     ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E19B8 (-OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_09327c36c45800bc73179388c0fcba92_::operator()(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
    return (unsigned int)_o__wcsicmp(v3) == 0;
  return v2;
}
