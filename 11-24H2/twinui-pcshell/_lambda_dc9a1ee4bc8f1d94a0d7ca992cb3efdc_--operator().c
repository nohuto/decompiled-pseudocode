/*
 * XREFs of _lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator() @ 0x18039D798
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___::Run @ 0x18039F960 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     wil::details::lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___::_lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___ @ 0x18039D55C (wil--details--lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___--_lambda_call__lambda_06ce.c)
 *     ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x18039E2F0 (-ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x18039E700 (-GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803A0AE8 (-UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator()(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  HMONITOR v3; // rax
  int FramePosition; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9[2]; // [rsp+30h] [rbp-30h] BYREF
  char v10; // [rsp+40h] [rbp-20h]
  struct tagRECT v11; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v1 = *a1;
  v8 = a1[1];
  v2 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  v9[0] = v1;
  v9[1] = v2;
  v8 = 0LL;
  v10 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  if ( *(_DWORD *)(v1 + 776) != 2 )
    goto LABEL_9;
  v3 = MonitorFromWindow(*(HWND *)(v1 + 352), 2u);
  FramePosition = CVirtualTouchpadExperienceManager::ComputeDesiredSizeForMonitor(
                    (CVirtualTouchpadExperienceManager *)v1,
                    v3);
  v5 = FramePosition;
  if ( FramePosition >= 0 )
  {
    v11 = 0LL;
    FramePosition = CVirtualTouchpadExperienceManager::GetFramePosition((CVirtualTouchpadExperienceManager *)v1, &v11);
    v5 = FramePosition;
    if ( FramePosition < 0 )
    {
      v6 = 820LL;
      goto LABEL_6;
    }
    *(_DWORD *)(v1 + 320) = v11.left + *(_DWORD *)(v1 + 300) / 2;
    *(_DWORD *)(v1 + 324) = v11.top + *(_DWORD *)(v1 + 304) / 2;
    FramePosition = CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize((CVirtualTouchpadExperienceManager *)v1);
    v5 = FramePosition;
    if ( FramePosition < 0 )
    {
      v6 = 823LL;
      goto LABEL_6;
    }
LABEL_9:
    v5 = 0;
    goto LABEL_10;
  }
  v6 = 818LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)FramePosition);
LABEL_10:
  wil::details::lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___::_lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___(v9);
  return v5;
}
