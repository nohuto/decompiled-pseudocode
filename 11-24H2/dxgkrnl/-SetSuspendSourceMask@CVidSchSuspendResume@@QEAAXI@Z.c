/*
 * XREFs of ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x140052690
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall CVidSchSuspendResume::SetSuspendSourceMask(CVidSchSuspendResume *this, int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (a2 & *(_DWORD *)(v2 + 756)) != a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8475;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(m_pAdapter->GetSchedulerSuspendSourceMask() & SourceMask) == SourceMask",
        8475LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_DWORD *)this = a2;
  }
}
