/*
 * XREFs of ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800108B8
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180010468 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18003CCA0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x1800420C0 (-CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D4A80 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D5340 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x1800E65C0 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6A1C (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?RoundToNearestInt@@YAHN@Z @ 0x18006DA6C (-RoundToNearestInt@@YAHN@Z.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800E4FB4 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1800E694C (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 */

void __fastcall CTopLevelWindow::GetFrameMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  struct _MARGINS *v2; // rax
  __int64 v5; // rax
  struct _MARGINS v6; // xmm0
  double v7; // xmm6_8
  int cyBottomHeight; // edi
  int cyTopHeight; // esi
  int cxRightWidth; // r14d
  int cxLeftWidth; // r12d
  volatile int v12; // ecx
  struct _MARGINS v13; // [rsp+68h] [rbp-69h] BYREF
  CHAR OutputString[112]; // [rsp+78h] [rbp-59h] BYREF

  v2 = (struct _MARGINS *)*((_QWORD *)this + 89);
  if ( v2 )
  {
    *a2 = *v2;
  }
  else
  {
    v5 = *((_QWORD *)this + 94);
    v6 = *(struct _MARGINS *)(v5 + 80);
    v7 = *(double *)(v5 + 336);
    v13 = v6;
    if ( v7 == 1.0 )
    {
      cyBottomHeight = v13.cyBottomHeight;
      cyTopHeight = v13.cyTopHeight;
      cxRightWidth = v13.cxRightWidth;
      cxLeftWidth = v13.cxLeftWidth;
    }
    else
    {
      cxLeftWidth = RoundToNearestInt((double)v13.cxLeftWidth * v7);
      v13.cxLeftWidth = cxLeftWidth;
      cxRightWidth = RoundToNearestInt((double)v13.cxRightWidth * v7);
      v13.cxRightWidth = cxRightWidth;
      cyTopHeight = RoundToNearestInt((double)v13.cyTopHeight * v7);
      v13.cyTopHeight = cyTopHeight;
      v13.cyBottomHeight = RoundToNearestInt((double)v13.cyBottomHeight * v7);
      cyBottomHeight = v13.cyBottomHeight;
      v6 = v13;
    }
    v12 = g_fTestFrameMargins;
    *a2 = v6;
    if ( v12 )
    {
      CTopLevelWindow::ComputeWindowFrameMargins(this, &v13);
      if ( cxLeftWidth != v13.cxLeftWidth
        || cxRightWidth != v13.cxRightWidth
        || cyTopHeight != v13.cyTopHeight
        || cyBottomHeight != v13.cyBottomHeight )
      {
        CTopLevelWindow::ComputeWindowFrameMargins(this, &v13);
        StringCchPrintfA(
          OutputString,
          0x6EuLL,
          "Mismatch: %08x New:{ %6d, %6d, %6d, %6d } Old:{ %6d, %6d, %6d, %6d }\r\n",
          *((_DWORD *)this + 190),
          cxLeftWidth,
          cyTopHeight,
          cxRightWidth,
          cyBottomHeight,
          v13.cxLeftWidth,
          v13.cyTopHeight,
          v13.cxRightWidth,
          v13.cyBottomHeight);
        OutputDebugStringA(OutputString);
      }
    }
  }
}
