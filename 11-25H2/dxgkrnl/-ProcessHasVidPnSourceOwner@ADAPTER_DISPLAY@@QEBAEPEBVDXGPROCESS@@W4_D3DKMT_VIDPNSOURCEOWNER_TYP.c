/*
 * XREFs of ?ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGPROCESS@@W4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@W4DXGDEVICECLIENT_TYPE@@@Z @ 0x1403F5690
 * Callers:
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x140328C5C (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

char __fastcall ADAPTER_DISPLAY::ProcessHasVidPnSourceOwner(__int64 a1, __int64 a2)
{
  unsigned int i; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8282;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 8282LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 96); ++i )
  {
    v5 = *(_QWORD *)(a1 + 128);
    v6 = 3984LL * i;
    v7 = *(_QWORD *)(v6 + v5 + 728);
    if ( v7 && a2 == *(_QWORD *)(v7 + 40) && !*(_DWORD *)(v7 + 464) && *(_DWORD *)(v6 + v5 + 736) == 3 )
      return 1;
  }
  return 0;
}
