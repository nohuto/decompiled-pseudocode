/*
 * XREFs of _lambda_05fc02aedf2106bfd4b53262984b0e1a_::operator() @ 0x1800E42EC
 * Callers:
 *     ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800E6418 (-OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_05fc02aedf2106bfd4b53262984b0e1a_::operator()(_QWORD *a1, __int64 a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
    return (unsigned int)_o__wcsicmp(v4, *a1) == 0;
  return v3;
}
