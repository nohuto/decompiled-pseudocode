/*
 * XREFs of ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x180068EC4
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180068CA0 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x180015A04 (--0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180021D08 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180069040 (-RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800690A0 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAcrylicSheet::StartRectAnimation(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        __int128 *a5,
        float a6)
{
  __int64 v9; // rdx
  CTimelineBase *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // esi
  unsigned int v20; // eax
  _OWORD v21[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+50h] [rbp-38h]

  std::_Func_class<void,>::_Tidy(a1 + 288, (__int64)a2);
  std::_Func_class<void,>::_Tidy(a1 + 352, v9);
  v10 = *(CTimelineBase **)(a1 + 488);
  if ( v10 )
    CTimelineBase::Release(v10);
  v12 = DefaultHeap::AllocClear(0x78uLL);
  if ( !v12 )
  {
    *(_QWORD *)(a1 + 488) = 0LL;
    v18 = -2147024882;
    v20 = 786;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v20, 0LL);
    CAcrylicSheet::StopAnimations((CAcrylicSheet *)a1);
    return (unsigned int)v18;
  }
  v15 = *a5;
  v21[1] = a5[1];
  v21[0] = v15;
  v22 = *((_QWORD *)a5 + 4);
  CTimelineBase::CTimelineBase((__int64)v12, v11, v13, v14, v21, COERCE__INT64(a6));
  *v12 = &CTimeline<float>::`vftable';
  *(_QWORD *)(a1 + 488) = v12;
  v16 = *a2;
  *(_WORD *)(a1 + 480) = 0;
  v17 = *a3;
  *(_BYTE *)(a1 + 482) = 0;
  *(_OWORD *)(a1 + 448) = v16;
  *(_OWORD *)(a1 + 464) = v17;
  v18 = CAcrylicSheet::RegisterGlobalTimer((CAcrylicSheet *)a1);
  if ( v18 < 0 )
  {
    v20 = 794;
    goto LABEL_7;
  }
  return (unsigned int)v18;
}
