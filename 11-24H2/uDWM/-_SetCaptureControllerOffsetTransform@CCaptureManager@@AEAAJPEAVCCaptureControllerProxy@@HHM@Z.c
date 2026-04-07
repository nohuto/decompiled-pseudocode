/*
 * XREFs of ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z @ 0x1800B4500
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B5024 (-_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCapture.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800B50E4 (-_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureCon.c)
 * Callees:
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180015B98 (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180019B80 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetTransform@CCaptureControllerProxy@@QEAAJPEAVCMatrixTransformProxy@@@Z @ 0x1800A8650 (-SetTransform@CCaptureControllerProxy@@QEAAJPEAVCMatrixTransformProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_SetCaptureControllerOffsetTransform(
        CCaptureManager *this,
        struct CCaptureControllerProxy *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  CCompositor *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  CMatrixTransformProxy *v13; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_MATRIX_3X2_F v14; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v13 = 0LL;
  v8 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  v9 = CCompositor::CreateMatrixTransformProxy(v8, &v13);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *(_QWORD *)&v14.m11 = a5;
    v14.m21 = 0.0;
    LODWORD(v14.m22) = a5;
    v14.dx = (float)a3;
    v14.dy = (float)a4;
    v9 = CMatrixTransformProxy::Update(v13, &v14);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v9 = CCaptureControllerProxy::SetTransform(a2, v13);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v10 = 0;
        goto LABEL_9;
      }
      v11 = 1952LL;
    }
    else
    {
      v11 = 1951LL;
    }
  }
  else
  {
    v11 = 1941LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_9:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  return v10;
}
