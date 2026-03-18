/*
 * XREFs of ?GetPresentStatistics@CLegacyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1802D5380
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetPresentStatisticsDWM@CLegacyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802D5420 (-GetPresentStatisticsDWM@CLegacyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::GetPresentStatistics(
        CLegacyRemotingSwapChain *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  int PresentStatisticsDWM; // eax
  unsigned int v5; // ebx
  UINT v6; // ecx
  _DWORD v8[6]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER v9; // [rsp+48h] [rbp-40h]

  memset_0(v8, 0, 0x50uLL);
  PresentStatisticsDWM = CLegacyRemotingSwapChain::GetPresentStatisticsDWM(this, (struct DXGI_FRAME_STATISTICS_DWM *)v8);
  v5 = PresentStatisticsDWM;
  if ( PresentStatisticsDWM < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, PresentStatisticsDWM, 0xBEu, 0LL);
  }
  else
  {
    v6 = v8[0];
    a2->SyncGPUTime.QuadPart = 0LL;
    a2->PresentCount = v6;
    a2->PresentRefreshCount = v8[1];
    a2->SyncRefreshCount = v8[4];
    a2->SyncQPCTime = v9;
  }
  return v5;
}
