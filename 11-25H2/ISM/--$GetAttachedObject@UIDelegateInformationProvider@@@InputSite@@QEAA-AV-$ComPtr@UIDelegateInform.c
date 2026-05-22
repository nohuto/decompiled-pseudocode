/*
 * XREFs of ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180061BF4
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013140 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x180025C64 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetDelegateSourceProcessId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x180061940 (-GetDelegateSourceProcessId@DWMFocusedInputTarget@@UEAAJPEAK@Z.c)
 *     ?GetDelegateInputMode@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x1800619F0 (-GetDelegateInputMode@DWMFocusedInputTarget@@UEAAJPEAK@Z.c)
 *     ?GetDelegateInputMode@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x180061AA0 (-GetDelegateInputMode@DWMLegacyInputTarget@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceProcessId@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x180061B50 (-GetDelegateSourceProcessId@DWMLegacyInputTarget@@UEAAJPEAK@Z.c)
 *     ?HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z @ 0x1800AEE1C (-HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AFD6C (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?GetDelegateSourceViewId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x180198C20 (-GetDelegateSourceViewId@DWMFocusedInputTarget@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceViewId@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x1801991D0 (-GetDelegateSourceViewId@DWMLegacyInputTarget@@UEAAJPEAK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSite::GetAttachedObject<IDelegateInformationProvider>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 488);
  v4 = *(_QWORD *)(a1 + 496);
  while ( v3 != v4 )
  {
    v5 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 8);
    v6 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
    if ( v6(v5, &GUID_f6f9433e_5957_4930_a4c4_4da30644521c, a2) >= 0 )
      break;
    v3 += 16LL;
  }
  return a2;
}
