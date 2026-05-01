/*
 * XREFs of ??1?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180228F98
 * Callers:
 *     _wil::MakeOrThrow_Win32AppStateManager__::_1_::dtor$0 @ 0x1806D4D50 (_wil--MakeOrThrow_Win32AppStateManager__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_UwpAppStateManager__::_1_::dtor$0 @ 0x1806D4D7D (_Microsoft--WRL--Details--Make_UwpAppStateManager__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_Win32AppStateManager__::_1_::dtor$0 @ 0x1806D4DCD (_Microsoft--WRL--Details--Make_Win32AppStateManager__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C9360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Win32AppStateManager>::~ComPtr<Win32AppStateManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
