/*
 * XREFs of ?Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z @ 0x180569D8C
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180567760 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ @ 0x180563000 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___ @ 0x18056965C (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_35.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___ @ 0x180569730 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_48.c)
 */

__int64 __fastcall VirtualDesktopHotKeyWindow::Commit(
        VirtualDesktopHotKeyWindow *this,
        struct IVirtualDesktopSwitchAnimator2 *a2,
        float a3,
        __int64 a4)
{
  __int64 v4; // r8
  bool v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  bool v11; // zf
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdx
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-48h]
  _DWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+48h] [rbp-30h]
  int v20; // [rsp+4Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = VirtualDesktopGestureWindow::ShowAndAnimateCustomWallpapers(this, (__int64)a2, v4, a4);
  v18[1] = 0;
  v10 = *((_QWORD *)this + 20);
  v11 = !v7;
  v12 = *((_DWORD *)this + 48);
  v20 = 1;
  LOBYTE(v16) = 0;
  if ( v11 )
  {
    v18[0] = (int)(float)((float)(v12 - *((_DWORD *)this + 46)) * a3);
    v19 = v18[0] + 1;
    v13 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___(
            v10,
            (__int64)v18,
            v8,
            v9,
            v16,
            (__int64)a2,
            v17);
    if ( v13 < 0 )
    {
      v14 = 156LL;
      goto LABEL_4;
    }
  }
  else
  {
    v18[0] = (int)(float)((float)(v12 - *((_DWORD *)this + 46)) * a3);
    v19 = v18[0] + 1;
    v13 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___(
            v10,
            (__int64)v18,
            v8,
            v9,
            v16,
            (__int64)a2,
            v17);
    if ( v13 < 0 )
    {
      v14 = 142LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  return 0LL;
}
