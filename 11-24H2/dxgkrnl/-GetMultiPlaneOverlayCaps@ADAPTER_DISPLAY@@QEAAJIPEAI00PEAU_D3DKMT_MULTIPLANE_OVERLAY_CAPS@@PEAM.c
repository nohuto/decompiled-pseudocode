/*
 * XREFs of ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x140373040
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14037206C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1403728C0 (DxgkGetMultiPlaneOverlayCaps.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ @ 0x1400515D8 (-SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x140373298 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z @ 0x1403735B0 (-DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS *a6,
        float *a7,
        float *a8)
{
  __int64 v11; // rdi
  __int64 v12; // r15
  ADAPTER_RENDER *v13; // rcx
  int MultiPlaneOverlayCaps; // eax
  float MaxStretchFactor; // xmm0_4
  float MaxShrinkFactor; // xmm1_4
  __int64 v18; // rax
  _DXGKARG_GETMULTIPLANEOVERLAYCAPS v19; // [rsp+68h] [rbp-21h] BYREF

  v11 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 10920;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    *a3 = 1;
    LODWORD(v12) = 0;
    *a4 = 0;
    *a5 = 0;
    a6->Value = 0;
    *a7 = 1.0;
    *a8 = 1.0;
    v13 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 3128LL);
    if ( v13
      && ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13)
      && DXGADAPTER::SupportGetMultiPlaneOverlayCaps(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 3128LL) + 16LL))
      && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(this, v11) )
    {
      v19.VidPnSourceId = v11;
      memset(&v19.MaxPlanes, 0, 24);
      MultiPlaneOverlayCaps = ADAPTER_DISPLAY::DdiGetMultiPlaneOverlayCaps(this, &v19);
      v12 = MultiPlaneOverlayCaps;
      if ( MultiPlaneOverlayCaps < 0 )
      {
        WdLogSingleEntry3(2LL, MultiPlaneOverlayCaps, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), v11);
        v18 = *((_QWORD *)this + 2);
        WdLogGlobalForLineNumber = 10989;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver returned error (0x%I64x) from GetMultiPlaneOverlayCaps: Adapter (0x%I64x), VidPnSourceId (0x%I64x)",
          v12,
          *(_QWORD *)(v18 + 288),
          v11,
          0LL,
          0LL);
      }
      else
      {
        if ( v19.MaxPlanes )
        {
          MaxStretchFactor = v19.MaxStretchFactor;
          MaxShrinkFactor = v19.MaxShrinkFactor;
          *a3 = v19.MaxPlanes;
          *a4 = v19.MaxRGBPlanes;
          *a5 = v19.MaxYUVPlanes;
          *a7 = MaxStretchFactor;
          *a8 = MaxShrinkFactor;
          a6->Value = *(_WORD *)&v19.OverlayCaps.0 & 0x7FF | a6->Value & 0xFFFFF800;
        }
        else
        {
          *a3 = 1;
          *a4 = 0;
          *a5 = 0;
          a6->Value = 0;
          *a7 = 1.0;
          *a8 = 1.0;
        }
        a6->Value |= 0x800u;
      }
    }
    return (unsigned int)v12;
  }
}
