/*
 * XREFs of ?BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEAUIVirtualDesktopAnimationNotificationInstance@@@Z @ 0x180559E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002FC18 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@AEAPEAU3@PEAUIObjectArray@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@1$$QEAPEAUIObjectArray@@AEAK@Z @ 0x180559A1C (--$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimation.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopAnimationSyncNotifications::BeginAnimatedSwitch(
        VirtualDesktopAnimationSyncNotifications *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktopAnimationNotificationInstance **a4)
{
  int CallbackArray; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct IObjectArray *v10; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IObjectArray *v12; // [rsp+60h] [rbp+8h] BYREF
  struct IVirtualDesktop *v13; // [rsp+68h] [rbp+10h] BYREF
  struct IVirtualDesktop *v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 6, &v12);
  v7 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    v8 = 126LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
    goto LABEL_6;
  }
  v10 = v12;
  CallbackArray = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAnimationSyncNotificationInstance,IVirtualDesktopAnimationNotificationInstance,IVirtualDesktop * &,IVirtualDesktop * &,IObjectArray *,unsigned long &>(
                    a4,
                    &v13,
                    &v14,
                    &v10,
                    (unsigned int *)this + 22);
  v7 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    v8 = 132LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  return v7;
}
