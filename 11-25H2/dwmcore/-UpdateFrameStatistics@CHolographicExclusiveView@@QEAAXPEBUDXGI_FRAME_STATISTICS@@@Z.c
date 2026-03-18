/*
 * XREFs of ?UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1802DB750
 * Callers:
 *     ?PostPresent@CHolographicClient@@UEAAJXZ @ 0x1802DDE00 (-PostPresent@CHolographicClient@@UEAAJXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CHolographicExclusiveView::UpdateFrameStatistics(
        CHolographicExclusiveView *this,
        const struct DXGI_FRAME_STATISTICS *a2)
{
  int v2; // eax
  __int64 v4; // rcx
  __int128 v5; // xmm1
  int v6; // eax
  void *v7; // rcx
  _OWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_DWORD *)this + 30);
  v4 = *((_QWORD *)this + 19);
  v5 = *(_OWORD *)&a2->SyncQPCTime.LowPart;
  v8[0] = *(_OWORD *)&a2->PresentCount;
  LODWORD(v8[0]) = v2;
  v8[1] = v5;
  if ( v4 && (v6 = NtSetCompositionSurfaceStatistics(v4, (char *)this + 144, v8), v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6 | 0x10000000, 0x205u, 0LL);
  }
  else
  {
    v7 = (void *)*((_QWORD *)this + 14);
    if ( v7 )
      SetEvent(v7);
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 0x8000u);
  }
}
