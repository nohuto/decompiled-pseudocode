/*
 * XREFs of ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpolationParameters@@@Z @ 0x180015874
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x180015A04 (--0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::CreateTimelineForTransform(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  CTimelineBase *v5; // rcx
  _QWORD *v6; // r14

  v3 = 0;
  v4 = a2;
  v5 = *(CTimelineBase **)(a1 + 8LL * a2 + 344);
  if ( v5 )
  {
    CTimelineBase::Release(v5);
    *(_QWORD *)(a1 + 8 * v4 + 344) = 0LL;
  }
  v6 = DefaultHeap::AllocClear(0x78uLL);
  if ( v6 )
  {
    CTimelineBase::CTimelineBase(v6);
    *v6 = &CTimeline<float>::`vftable';
    *(_QWORD *)(a1 + 8 * v4 + 344) = v6;
  }
  else
  {
    *(_QWORD *)(a1 + 8 * v4 + 344) = 0LL;
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB7u, 0LL);
  }
  return v3;
}
