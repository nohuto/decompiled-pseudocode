/*
 * XREFs of ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18000F270
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18000E8DC (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x18016EED4 (-OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(
        Microsoft::WRL::Wrappers::HString *a1,
        const unsigned __int16 **a2)
{
  const unsigned __int16 *v2; // rdx
  unsigned __int64 v3; // r8

  v2 = *a2;
  if ( v2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v2[v3] );
    if ( v3 > 0xFFFFFFFF )
      return 2147942934LL;
  }
  else
  {
    LODWORD(v3) = 0;
    v2 = &WindowName;
  }
  return Microsoft::WRL::Wrappers::HString::Set(a1, v2, v3);
}
