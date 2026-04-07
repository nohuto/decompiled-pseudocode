/*
 * XREFs of ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800B3714
 * Callers:
 *     ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B09D0 (-StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0B80 (-StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0CA0 (-StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1980 (-StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1AE0 (-StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1BF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800B5404 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 */

void __fastcall CCaptureManager::_EnsureCursorStateForCapture(CCaptureManager *this)
{
  __int64 **v2; // rdx
  __int64 v3; // r8
  __int64 *v4; // rax
  unsigned int v5; // r9d
  bool v6; // zf
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // r9d
  char v10; // al

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    v2 = (__int64 **)*((_QWORD *)this + 2);
    v3 = 0LL;
    v4 = *v2;
    while ( 1 )
    {
      v5 = v3;
      if ( v4 == (__int64 *)v2 )
        break;
      v3 = (unsigned int)(v3 + 1);
      v6 = *((_BYTE *)v4 + 57) == 0;
      v4 = (__int64 *)*v4;
      if ( v6 )
        v3 = v5;
    }
    v7 = (_QWORD *)*((_QWORD *)this + 10);
    v8 = (_QWORD *)*v7;
    while ( 1 )
    {
      v9 = v3;
      if ( v8 == v7 )
        break;
      v2 = (__int64 **)((char *)v8 + 73);
      v3 = (unsigned int)(v3 + 1);
      v6 = *((_BYTE *)v8 + 73) == 0;
      v8 = (_QWORD *)*v8;
      if ( v6 )
        v3 = v9;
    }
    v10 = *((_BYTE *)this + 200);
    if ( (_DWORD)v3 )
    {
      if ( !v10 )
      {
        EnableSoftwareCursorForScreenCapture(1LL, v2, v3, (unsigned int)v3);
        *((_BYTE *)this + 200) = 1;
      }
    }
    else if ( v10 )
    {
      EnableSoftwareCursorForScreenCapture(0LL, v2, v3, (unsigned int)v3);
      *((_BYTE *)this + 200) = 0;
    }
  }
}
