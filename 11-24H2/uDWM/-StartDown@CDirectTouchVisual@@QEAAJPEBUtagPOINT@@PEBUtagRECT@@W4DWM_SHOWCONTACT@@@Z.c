/*
 * XREFs of ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800123F8
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18000B658 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800122A0 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800B7214 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18000F708 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x1800120B0 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x18001213C (-StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800121B8 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180012240 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180015A64 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800950D4 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CDirectTouchVisual::StartDown(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        int a4)
{
  __int64 v7; // rdx
  int v8; // r8d
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r9
  int v13; // esi
  int v14; // r9d
  unsigned int v15; // eax
  double v17; // xmm1_8
  void *v18; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 328) = a4;
  *(_BYTE *)(a1 + 360) = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmDirectTouchDownAnimation_BeginDraw_Info,
      (_DWORD)a3,
      1,
      (__int64)&v18);
  CDirectTouchVisual::StopFadeTimeline((CDirectTouchVisual *)a1);
  CDirectTouchVisual::StopDownTimeline((CDirectTouchVisual *)a1, v7, v8);
  CDirectTouchVisual::StopDownDelayTimeline((CDirectTouchVisual *)a1);
  v9 = DefaultHeap::AllocClear(0x78uLL);
  v18 = v9;
  if ( v9 )
  {
    CTimelineBase::CTimelineBase(v9, v10, v11, v9, 0);
    *v12 = &CTimeline<float>::`vftable';
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)(a1 + 352) = v12;
  if ( !v12 )
  {
    v13 = -2147024882;
    v15 = 102;
    v14 = -2147024882;
    goto LABEL_9;
  }
  v13 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = 104;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v15, 0LL);
    CDirectTouchVisual::Stop((CDirectTouchVisual *)a1);
    return (unsigned int)v13;
  }
  CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, *(float *)(a1 + 312));
  CImage::SetBitmapSource(*(CImage **)(a1 + 368), *(struct CBitmapSource **)(a1 + 376));
  if ( (*(_BYTE *)(a1 + 328) & 1) != 0 )
    v17 = *(float *)(a1 + 304);
  else
    v17 = 0.0;
  CVisual::SetOpacity((CVisual *)a1, v17);
  return (unsigned int)v13;
}
