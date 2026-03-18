/*
 * XREFs of GetMonitorRectForDpi @ 0x140026844
 * Callers:
 *     GetMonitorTransform @ 0x1400256BC (GetMonitorTransform.c)
 *     InitializeMonitorInfo @ 0x1400259E8 (InitializeMonitorInfo.c)
 *     _GetWindowPlacement @ 0x140025CD8 (_GetWindowPlacement.c)
 *     GetMonitorRectForWindow @ 0x1400260CC (GetMonitorRectForWindow.c)
 *     GetScreenRectForDpi @ 0x14002622C (GetScreenRectForDpi.c)
 *     GetMonitorRect @ 0x140026800 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x140027270 (_MonitorFromPoint.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     _GetClientRect @ 0x1400750A0 (_GetClientRect.c)
 *     InternalGetRealClientRect @ 0x140079644 (InternalGetRealClientRect.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1400987D8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x140098A48 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     FindBestPos @ 0x140098F94 (FindBestPos.c)
 *     xxxBroadcastMessageEx @ 0x1401177BC (xxxBroadcastMessageEx.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014ACFC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     xxxSendSizeMessage @ 0x14019DCF0 (xxxSendSizeMessage.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1401D4DD0 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020890C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x140267394 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  INT v5; // edx
  INT v6; // esi
  INT v7; // ebx
  INT v8; // r14d
  INT v9; // edi
  INT v10; // eax
  INT v11; // ebp
  __m128i v12; // xmm6
  INT v13; // r8d
  INT v14; // ebx
  int v15; // esi
  int v16; // eax
  int v17; // edi
  INT a[2]; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 40);
  v5 = *(unsigned __int16 *)(v3 + 62);
  v6 = *(unsigned __int16 *)(v3 + 60);
  *a1 = *(__m128i *)(v3 + 28);
  if ( a3 )
  {
    v7 = v5;
    v8 = a3;
    *(_QWORD *)a = a1->m128i_i64[0];
    v9 = EngMulDiv(a1->m128i_i64[0], a3, v5);
    v10 = EngMulDiv(a[1], v8, v7);
    v11 = v6;
    v12 = *a1;
    v20 = a1->m128i_i64[0];
    v13 = v6;
    v14 = v10;
    v15 = _mm_cvtsi128_si32(*a1);
    v16 = v9 + EngMulDiv(v15 - a1->m128i_i64[0], v8, v13);
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
    a1->m128i_i32[0] = v16;
    a1->m128i_i32[1] = v14 + EngMulDiv(v17 - HIDWORD(v20), v8, v11);
    a1->m128i_i32[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) - v15, v8, v11) + a1->m128i_i32[0];
    a1->m128i_i32[3] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v12, 12)) - v17, v8, v11) + a1->m128i_i32[1];
  }
  return a1;
}
