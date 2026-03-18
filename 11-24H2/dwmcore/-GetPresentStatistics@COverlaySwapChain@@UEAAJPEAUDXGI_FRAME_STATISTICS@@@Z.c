/*
 * XREFs of ?GetPresentStatistics@COverlaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180214370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlaySwapChain::GetPresentStatistics(COverlaySwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  UINT v6; // ecx
  _DWORD v8[6]; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER v9; // [rsp+48h] [rbp-50h]

  memset_0(v8, 0, 0x50uLL);
  v4 = (*(__int64 (__fastcall **)(COverlaySwapChain *, _DWORD *))(*(_QWORD *)this + 328LL))(this, v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x68u, 0LL);
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
