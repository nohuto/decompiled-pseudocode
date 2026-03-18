/*
 * XREFs of ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x14037C12C
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x14037BD70 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkSetDeviceCandidateTarget @ 0x140058E58 (DxgkSetDeviceCandidateTarget.c)
 */

char __fastcall ADAPTER_DISPLAY::SetPrimaryPath(__int64 a1, int a2, int a3, int a4)
{
  char result; // al

  result = DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16));
  if ( !result )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8576;
    result = DxgkLogInternalTriageEvent(
               0LL,
               262146LL,
               0xFFFFFFFFLL,
               L"this->GetAdapter()->IsCoreResourceExclusiveOwner()",
               8576LL,
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
