/*
 * XREFs of ??0?$CTimeline@M@@QEAA@NMMUInterpolationParameters@@N@Z @ 0x1800A21D0
 * Callers:
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x1800A3508 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x1800E4D74 (--0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z.c)
 */

_QWORD *__fastcall CTimeline<float>::CTimeline<float>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v6; // xmm4
  _QWORD *v7; // r11
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v6 = *(_OWORD *)(a5 + 16);
  v9[0] = *(_OWORD *)a5;
  v10 = *(_QWORD *)(a5 + 32);
  v9[1] = v6;
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, _OWORD *, __int64))CTimelineBase::CTimelineBase)(
    a1,
    a2,
    a3,
    a4,
    v9,
    a6);
  *v7 = &CTimeline<float>::`vftable';
  return v7;
}
