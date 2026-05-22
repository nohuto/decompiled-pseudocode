/*
 * XREFs of ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x1800F113C
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800F2E80 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x18004CD58 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReceiveCursorPosCallback@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@I@Z @ 0x1800F1BC0 (-ReceiveCursorPosCallback@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@I@Z.c)
 *     ?ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F1D20 (-ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800F2DC8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Win32kInterop::ProcessCursorPosMessage(__int64 a1, __int64 a2, __int64 a3)
{
  Win32kInterop *v4; // rsi
  __int64 v5; // r9
  char v6; // di
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // rdx
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = Win32kInterop::s_pInterop;
  InputETW::Win32kInterop::ReceivedCursorPosCallback(*(_DWORD *)(a3 + 8));
  InputTraceLogging::ISM::ReceiveCursorPosCallback(
    *(_QWORD *)(a3 + 16),
    (const struct tagPOINT *)a3,
    *(_DWORD *)(a3 + 8));
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl)
    && IsEdition(8778LL) )
  {
    v6 = 1;
  }
  else
  {
    v7 = *(_DWORD *)(a3 + 8);
    v6 = 0;
    if ( v7 )
    {
      LOBYTE(v8) = Win32kInterop::IsDeviceAttached(v4, v7, 1);
      if ( !(_BYTE)v8 )
        return v8;
    }
  }
  v9 = *(unsigned int *)(a3 + 8);
  LOBYTE(v5) = !(_DWORD)v9 || v6;
  v11 = *(_DWORD *)a3;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)v4 + 54) + 80LL))(
         *((_QWORD *)v4 + 54),
         v9,
         1LL,
         v5);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x461,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v8,
      v11);
  return v8;
}
