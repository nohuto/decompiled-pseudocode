/*
 * XREFs of ?InjectScrollZoom@MPCSpatialGestureRecognizerHandler@@AEAAXPEAUISpatialNavigationUpdatedEventArgs@Spatial@Input@UI@Windows@@@Z @ 0x1800C5534
 * Callers:
 *     ?OnSpatialNavigationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationUpdatedEventArgs@3456@@Z @ 0x1800C5B10 (-OnSpatialNavigationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogniz.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?GetVelocities@MPCSpatialGestureRecognizerHandler@@AEAA?AUVector3@Numerics@Foundation@Windows@@PEAUISpatialNavigationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x1800C54BC (-GetVelocities@MPCSpatialGestureRecognizerHandler@@AEAA-AUVector3@Numerics@Foundation@Windows@@P.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::InjectScrollZoom(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]

  MPCSpatialGestureRecognizerHandler::GetVelocities((__int64)this, (__int64)&v5, (__int64)a2);
  v3 = *((_QWORD *)this + 13);
  if ( *((_DWORD *)this + 42) == 1 )
  {
    *(_DWORD *)(v3 + 856) = 5;
    *(float *)(*((_QWORD *)this + 13) + 860LL) = *(float *)&v5 * 25.0;
    *(float *)(*((_QWORD *)this + 13) + 864LL) = COERCE_FLOAT(HIDWORD(v5) ^ _xmm) * 25.0;
  }
  else
  {
    *(_DWORD *)(v3 + 856) = 6;
    *(float *)(*((_QWORD *)this + 13) + 868LL) = (float)(*((float *)&v5 + 1) * 0.041999999) + 1.0;
  }
  v4 = v6;
  *((_QWORD *)this + 22) = v5;
  *((_DWORD *)this + 46) = v4;
}
