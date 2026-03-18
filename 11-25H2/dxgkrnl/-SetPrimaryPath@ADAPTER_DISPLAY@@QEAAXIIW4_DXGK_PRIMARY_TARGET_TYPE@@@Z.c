/*
 * XREFs of ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x14030C9B4
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x14030C5F8 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkSetDeviceCandidateTarget @ 0x140059398 (DxgkSetDeviceCandidateTarget.c)
 */

char __fastcall ADAPTER_DISPLAY::SetPrimaryPath(__int64 a1, int a2, int a3, int a4)
{
  char result; // al

  result = DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16));
  if ( !result )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8431;
    result = DxgkLogInternalTriageEvent(
               0LL,
               262146,
               0xFFFFFFFFLL,
               L"this->GetAdapter()->IsCoreResourceExclusiveOwner()",
               8431LL,
               0LL,
               0LL,
               0LL,
               0LL);
  }
  *(_DWORD *)(a1 + 136) = a2;
  *(_DWORD *)(a1 + 140) = a3;
  *(_DWORD *)(a1 + 144) = a4;
  if ( a3 != -1 )
    return DxgkSetDeviceCandidateTarget();
  return result;
}
