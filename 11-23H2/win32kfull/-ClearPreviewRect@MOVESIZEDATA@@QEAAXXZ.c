/*
 * XREFs of ?ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ @ 0x1C0239948
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F17A8 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     bSetDevDragRect @ 0x1C00910D0 (bSetDevDragRect.c)
 */

void __fastcall MOVESIZEDATA::ClearPreviewRect(MOVESIZEDATA *this)
{
  bool v2; // dl

  if ( (*((_DWORD *)this + 50) & 0x1000000) != 0 )
  {
    v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        29,
        4,
        1,
        29,
        (__int64)&WPP_0bf01d38e7493d5599743f09d218946b_Traceguids);
    *((_DWORD *)this + 50) &= ~0x1000000u;
    if ( (*((_DWORD *)this + 50) & 0x20) != 0 )
      bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  }
}
