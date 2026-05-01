/*
 * XREFs of SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BDF10
 * Callers:
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_InitCoro$2 @ 0x1805BDE78 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_InitCoro$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800298D4 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18008B368 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180210C8C (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18054B368 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ??1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805AD4CC (--1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 *     ??0MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805BD670 (--0MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 *     ?BuildMonitorUIIDListString@SnapAccessibilityHelpers@@YA?AV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z @ 0x1805BD9F8 (-BuildMonitorUIIDListString@SnapAccessibilityHelpers@@YA-AV-$NativeString@V-$CoTaskMemPolicy@G@I.c)
 *     ?GetResourceForRegion@SnapAccessibilityHelpers@@YAIW4SnapRegion@@M_N@Z @ 0x1805BDAC0 (-GetResourceForRegion@SnapAccessibilityHelpers@@YAIW4SnapRegion@@M_N@Z.c)
 *     ?GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA?AV?$vector@IV?$allocator@I@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805BDC78 (-GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA-AV-$vector@IV-$allocator@I@std@@@std@@P.c)
 *     ?RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1805BE48C (-RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV-$NativeString@V-$CoTask.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__ResumeCoro_1(
        char *a1,
        __int64 a2,
        void *a3)
{
  _QWORD *v4; // r12
  __int64 *v5; // r15
  __int64 v6; // rbx
  __int64 *v7; // r13
  int (__fastcall *v8)(__int64, _QWORD, char *); // rbx
  SnapRectHelpers **v9; // r15
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, HMONITOR, char *); // rbx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int ResourceForRegion; // edi
  float v16; // xmm6_4
  int v17; // eax
  void **v18; // rbx
  unsigned __int16 **v19; // r8
  __int64 v20; // r8
  const char *v21; // r9
  HMONITOR v22; // [rsp+38h] [rbp-110h]
  SnapRectHelpers *v23; // [rsp+60h] [rbp-E8h]
  __int64 v25; // [rsp+78h] [rbp-D0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
      case 5:
        goto LABEL_35;
      case 2:
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(
          (__int64)&_ImageBase,
          (void (*)(void *, void *))a1,
          a3);
        return;
      case 4:
        if ( !UiaClientsAreListening() )
          goto LABEL_35;
        *((GUID *)a1 + 1) = CLSID_ImmersiveShell;
        v4 = a1 + 32;
        winrt::create_instance<IServiceProvider>((__int64)(a1 + 32), (_DWORD)a1 + 16);
        v5 = (__int64 *)(a1 + 40);
        *((_QWORD *)a1 + 5) = 0LL;
        v6 = *((_QWORD *)a1 + 4);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)a1 + 5);
        if ( (*(int (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v6 + 24LL))(
               v6,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               a1 + 40) < 0 )
          goto LABEL_33;
        v7 = (__int64 *)(a1 + 48);
        *((_QWORD *)a1 + 6) = 0LL;
        v25 = *v5;
        v8 = *(int (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)*v5 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 6);
        if ( v8(v25, *(_QWORD *)(a1 + 209), a1 + 48) < 0 )
          goto LABEL_32;
        v22 = MonitorFromRect((LPCRECT)(a1 + 237), 0);
        v9 = (SnapRectHelpers **)(a1 + 56);
        *((_QWORD *)a1 + 7) = 0LL;
        if ( !v22 )
          goto LABEL_31;
        v10 = *(_QWORD *)(a1 + 257);
        v11 = *(int (__fastcall **)(__int64, HMONITOR, char *))(*(_QWORD *)v10 + 48LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 7);
        if ( v11(v10, v22, a1 + 56) < 0 )
          goto LABEL_31;
        v12 = *(_DWORD *)(a1 + 217);
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 )
              {
                v16 = (float)((*(_DWORD *)(a1 + 245) - *(_DWORD *)(a1 + 237))
                            * (*(_DWORD *)(a1 + 249) - *(_DWORD *)(a1 + 241)))
                    / (float)((*(_DWORD *)(a1 + 229) - *(_DWORD *)(a1 + 221))
                            * (*(_DWORD *)(a1 + 233) - *(_DWORD *)(a1 + 225)));
                v17 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)(a1 + 237), *v9);
                ResourceForRegion = SnapAccessibilityHelpers::GetResourceForRegion(v17, v16, 1);
              }
              else
              {
                ResourceForRegion = 15031;
              }
            }
            else
            {
              ResourceForRegion = 15003;
            }
          }
          else
          {
            ResourceForRegion = 15032;
          }
        }
        else
        {
          ResourceForRegion = 15033;
        }
        v23 = *v9;
        SnapAccessibilityHelpers::MonitorIDFinder::MonitorIDFinder((SnapAccessibilityHelpers::MonitorIDFinder *)(a1 + 160));
        v18 = (void **)(a1 + 64);
        SnapAccessibilityHelpers::MonitorIDFinder::GetUIIDs((int **)a1 + 20, (__int64)(a1 + 64), (__int64)v23);
        SnapAccessibilityHelpers::MonitorIDFinder::~MonitorIDFinder((void **)a1 + 20);
        if ( *((_QWORD *)a1 + 8) == *((_QWORD *)a1 + 9) )
        {
          if ( *v18 )
          {
            std::_Deallocate<16,0>(
              *v18,
              (const struct std::nothrow_t *)((*((_QWORD *)a1 + 10) - (_QWORD)*v18) & 0xFFFFFFFFFFFFFFFCuLL));
            *v18 = 0LL;
            *((_QWORD *)a1 + 9) = 0LL;
            *((_QWORD *)a1 + 10) = 0LL;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 7);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 6);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 5);
          if ( *v4 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 4);
        }
        else
        {
          *((_QWORD *)a1 + 11) = 0LL;
          *((_QWORD *)a1 + 12) = 0LL;
          *((_QWORD *)a1 + 13) = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 88));
          *((_QWORD *)a1 + 12) = -1LL;
          *((_QWORD *)a1 + 13) = -1LL;
          if ( (int)ApplicationViewHelpers::GetViewTitle(
                      *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))a1 + 6),
                      (unsigned __int16 **)a1 + 11,
                      v19) >= 0 )
          {
            SnapAccessibilityHelpers::BuildMonitorUIIDListString((_QWORD *)a1 + 14, (unsigned int **)a1 + 8, v20, v21);
            *((_QWORD *)a1 + 17) = 0LL;
            *((_QWORD *)a1 + 18) = 0LL;
            *((_QWORD *)a1 + 19) = 0LL;
            if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
                        (__int64)(a1 + 136),
                        &_ImageBase,
                        ResourceForRegion) >= 0 )
              SnapAccessibilityHelpers::RaiseSnapHotkeyResultsUiaNotification(a1 + 136);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 136));
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 112));
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 88));
          if ( *v18 )
            std::_Deallocate<16,0>(
              *v18,
              (const struct std::nothrow_t *)((*((_QWORD *)a1 + 10) - (_QWORD)*v18) & 0xFFFFFFFFFFFFFFFCuLL));
          v7 = (__int64 *)(a1 + 48);
LABEL_31:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 7);
          v5 = (__int64 *)(a1 + 40);
LABEL_32:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
LABEL_33:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v5);
          if ( *v4 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 4);
        }
LABEL_35:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x110);
        break;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
