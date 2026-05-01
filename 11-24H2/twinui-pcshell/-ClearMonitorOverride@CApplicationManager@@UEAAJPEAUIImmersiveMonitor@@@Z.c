/*
 * XREFs of ?ClearMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802E4740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801C18B4 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ClearMonitorOverride(CApplicationManager *this, struct IImmersiveMonitor *a2)
{
  PSRWLOCK v4; // rcx
  HWND v5; // rdx
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( a2 )
  {
    LODWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4[6]);
  }
  else
  {
    HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 0;
  }
  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  CApplicationManager::_IWMFromWindow(
    (CApplicationManager *)((char *)this - 184),
    v5,
    &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
    &v7);
  (*(void (__fastcall **)(void *, __int64, _QWORD, struct IImmersiveMonitor *))(*(_QWORD *)v7 + 24LL))(
    v7,
    2LL,
    *((unsigned int *)this + 194),
    a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
