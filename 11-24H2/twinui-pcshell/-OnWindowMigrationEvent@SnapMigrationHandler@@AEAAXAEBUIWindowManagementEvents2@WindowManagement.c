/*
 * XREFs of ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B60C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18021DD9C (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180231DC8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?MigrationReason@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18033DAE0 (-MigrationReason@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventAr.c)
 *     ?ShellContext@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x18035ADC8 (-ShellContext@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805A0894 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@.c)
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AA114 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 *     ?IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z @ 0x1805B6074 (-IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z.c)
 *     ?WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z @ 0x1805B6580 (-WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z.c)
 *     ?WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z @ 0x1805B662C (-WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z.c)
 *     ?get@?$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTelemetry@@P6AXXZ@Z @ 0x1805B6708 (-get@-$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTel.c)
 *     ?HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA?AUfire_and_forget@winrt@@PEAUHWND__@@W4_SHELLSETWINDOWPOS_STATE@@UCRect@Geometry@@2PEAUIImmersiveMonitorManager@@@Z @ 0x1805BE40C (-HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA-AUfire_and_forget@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SnapMigrationHandler::OnWindowMigrationEvent(
        SnapMigrationHandler *this,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r14d
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // edi
  unsigned int v20; // esi
  SnapMigrationHandlerTelemetry *v21; // rcx
  struct tagRECT *v22; // rax
  unsigned int left; // esi
  unsigned __int64 v24; // xmm0_8
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  SnapMigrationHandlerTelemetry *v34; // rcx
  __int64 v35; // rdi
  struct tagRECT v36; // xmm6
  struct tagRECT v37; // xmm7
  __int64 v38; // rax
  const char *v39; // r9
  struct tagRECT v40; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v42[3]; // [rsp+54h] [rbp-C4h] BYREF
  _BYTE v43[24]; // [rsp+60h] [rbp-B8h] BYREF
  int v44; // [rsp+80h] [rbp-98h] BYREF
  struct tagRECT v45; // [rsp+88h] [rbp-90h] BYREF
  struct tagRECT v46; // [rsp+98h] [rbp-80h] BYREF
  struct tagRECT v47; // [rsp+A8h] [rbp-70h] BYREF
  struct tagRECT v48; // [rsp+B8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v40 = 0LL;
  v5 = *(_QWORD *)a3;
  *(_DWORD *)v43 = 0;
  *(_OWORD *)&v43[8] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v5 + 96LL))(v5, &v40);
  try
  {
    winrt::check_hresult((int *)&v41, v6, (__int64)v43);
    v48.left = (int)*(float *)&v40.left;
    v48.top = (int)*(float *)&v40.top;
    v48.right = (int)(float)(*(float *)&v40.left + *(float *)&v40.right);
    v48.bottom = (int)(float)(*(float *)&v40.top + *(float *)&v40.bottom);
    v40 = 0LL;
    v7 = *(_QWORD *)a3;
    *(_DWORD *)v43 = 0;
    *(_OWORD *)&v43[8] = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v7 + 56LL))(v7, &v40);
    winrt::check_hresult((int *)&v41, v8, (__int64)v43);
    v47.left = (int)*(float *)&v40.left;
    v47.top = (int)*(float *)&v40.top;
    v47.right = (int)(float)(*(float *)&v40.left + *(float *)&v40.right);
    v47.bottom = (int)(float)(*(float *)&v40.top + *(float *)&v40.bottom);
    v40 = 0LL;
    v9 = *(_QWORD *)a3;
    *(_DWORD *)v43 = 0;
    *(_OWORD *)&v43[8] = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v9 + 72LL))(v9, &v40);
    winrt::check_hresult((int *)&v41, v10, (__int64)v43);
    v46.left = (int)*(float *)&v40.left;
    v46.top = (int)*(float *)&v40.top;
    v46.right = (int)(float)(*(float *)&v40.left + *(float *)&v40.right);
    v46.bottom = (int)(float)(*(float *)&v40.top + *(float *)&v40.bottom);
    v42[0] = 0;
    v11 = *(_QWORD *)a3;
    *(_DWORD *)v43 = 0;
    *(_OWORD *)&v43[8] = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 64LL))(v11, v42);
    winrt::check_hresult((int *)&v41, v12, (__int64)v43);
    v41 = 0;
    v13 = *(_QWORD *)a3;
    *(_DWORD *)v43 = 0;
    *(_OWORD *)&v43[8] = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 80LL))(v13, &v41);
    winrt::check_hresult(&v44, v14, (__int64)v43);
    v15 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3);
    v16 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
    if ( SnapMigrationHandlerTelemetry::IsEnabled(v17) )
    {
      wil::details::static_lazy<SnapMigrationHandlerTelemetry>::get(
        v18,
        _lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
      v19 = v41;
      v20 = v42[0];
      SnapMigrationHandlerTelemetry::WindowMigrationEvent_(v21, v16, v15, &v47, &v46, v42[0], v41, &v48);
    }
    else
    {
      v20 = v42[0];
      v19 = v41;
    }
    if ( v20 != v19 || !Geometry::operator==(&v47, &v46) )
    {
      v22 = (struct tagRECT *)SnapLayoutHelpers::ComputeMigrationInfo(
                                (__int64)v43,
                                &v48,
                                &v47.left,
                                (unsigned int *)&v46,
                                v19);
      left = v22[1].left;
      v45 = *v22;
      v24 = _mm_srli_si128((__m128i)v45, 8).m128i_u64[0];
      *(float *)&v40.left = (float)v45.left;
      *(float *)&v40.top = (float)v45.top;
      *(float *)&v40.right = (float)((int)v24 - v45.left);
      *(float *)&v40.bottom = (float)(HIDWORD(v24) - v45.top);
      v25 = *(_QWORD *)a3;
      *(_DWORD *)v43 = 0;
      *(_OWORD *)&v43[8] = 0LL;
      v26 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v25 + 104LL))(v25, &v40);
      winrt::check_hresult(&v44, v26, (__int64)v43);
      v27 = *(_QWORD *)a3;
      *(_DWORD *)v43 = 0;
      *(_OWORD *)&v43[8] = 0LL;
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 120LL))(v27, left);
      winrt::check_hresult(&v44, v28, (__int64)v43);
      v29 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
      if ( SnapMigrationHandlerTelemetry::IsEnabled(v30) )
      {
        wil::details::static_lazy<SnapMigrationHandlerTelemetry>::get(
          v31,
          _lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
        SnapMigrationHandlerTelemetry::WindowMigrationAnswer_(v34, v29, &v45);
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
        1u,
        v32,
        v33);
      if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3) == 1 )
      {
        v35 = *((_QWORD *)this + 5);
        v36 = v45;
        v37 = v46;
        v38 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
        v40 = v36;
        *(struct tagRECT *)v43 = v37;
        SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync(v38, left, v43, &v40, v35);
      }
    }
    if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3) )
      winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3);
    winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::ShellContext((__int64 *)a3);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x64,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapmigrationhandler.cpp",
      v39);
  }
}
