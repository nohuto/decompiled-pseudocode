/*
 * XREFs of ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x180070EAC
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x1800D89A0 (--$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?CreateCoverWindow@TabletModeCoverWindow@@AEAAJXZ @ 0x180200714 (-CreateCoverWindow@TabletModeCoverWindow@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeCoverWindow::RuntimeClassInitialize(TabletModeCoverWindow *this, struct IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rdi
  HRESULT Service; // eax
  HRESULT v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 112);
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  v12 = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  Service = IUnknown_QueryService(
              a2,
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              (void **)this + 18);
  v6 = Service;
  if ( Service < 0 )
  {
    v7 = 174LL;
    goto LABEL_11;
  }
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 19);
  v6 = IUnknown_QueryService(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (void **)v8);
  if ( v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
    v6 = IUnknown_QueryService(
           a2,
           &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
           &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
           (void **)this + 22);
    if ( v6 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
      Service = IUnknown_QueryService(
                  a2,
                  &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                  &GUID_3873e6f1_a2b6_443a_92f3_dc3923dc6f54,
                  (void **)this + 24);
      v6 = Service;
      if ( Service >= 0 )
      {
        Service = TabletModeCoverWindow::CreateCoverWindow(this);
        v6 = Service;
        if ( Service >= 0 )
        {
          PostMessageW(*((HWND *)this + 13), 0x401u, 0LL, 0LL);
          v6 = 0;
          goto LABEL_15;
        }
        v7 = 178LL;
      }
      else
      {
        v7 = 177LL;
      }
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)Service);
LABEL_15:
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v12);
      return (unsigned int)v6;
    }
    v9 = 176LL;
  }
  else
  {
    v9 = 175LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v6);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return (unsigned int)v6;
}
