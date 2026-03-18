/*
 * XREFs of ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x140398BE8
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140398538 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetPostCompositionCaps @ 0x140398610 (DxgkGetPostCompositionCaps.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ @ 0x140052708 (-SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1402A064C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z @ 0x140398D8C (-DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetPostCompositionCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        float *a3,
        float *a4)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  ADAPTER_RENDER *v9; // rcx
  int PostCompositionCaps; // eax
  float MaxShrinkFactor; // xmm1_4
  __int64 v13; // rax
  _DXGKARG_GETPOSTCOMPOSITIONCAPS v14; // [rsp+50h] [rbp-48h] BYREF

  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 10867;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    LODWORD(v8) = 0;
    *a3 = 1.0;
    *a4 = 1.0;
    v9 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 3128LL);
    if ( v9
      && ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v9)
      && DXGADAPTER::SupportGetPostCompositionCaps(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 3128LL) + 16LL))
      && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(this, v7) )
    {
      *(_QWORD *)&v14.MaxStretchFactor = 0LL;
      v14.VidPnSourceId = v7;
      PostCompositionCaps = ADAPTER_DISPLAY::DdiGetPostCompositionCaps(this, &v14);
      v8 = PostCompositionCaps;
      if ( PostCompositionCaps < 0 )
      {
        WdLogSingleEntry3(2LL, PostCompositionCaps, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), v7);
        v13 = *((_QWORD *)this + 2);
        WdLogGlobalForLineNumber = 10900;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Driver returned error (0x%I64x) from GetPostCompositionCaps: Adapter (0x%I64x), VidPnSourceId (0x%I64x)",
          v8,
          *(_QWORD *)(v13 + 288),
          v7,
          0LL,
          0LL);
      }
      else
      {
        MaxShrinkFactor = v14.MaxShrinkFactor;
        *a3 = v14.MaxStretchFactor;
        *a4 = MaxShrinkFactor;
      }
    }
    return (unsigned int)v8;
  }
}
