/*
 * XREFs of ?SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z @ 0x1802F3030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z @ 0x1802BA0C8 (-SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z.c)
 *     ??$FindEx@VCClassicWindowFinderByAppID@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByAppID@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802F1EF8 (--$FindEx@VCClassicWindowFinderByAppID@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::SwitchToThisApp(CClassicWindowManager *this, const unsigned __int16 *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  HWND v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-28h]
  const unsigned __int16 *v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+70h] [rbp+28h] BYREF
  CApplicationManagerUtility *v11; // [rsp+78h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+38h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  v11 = 0LL;
  v10 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = a2;
  while ( 1 )
  {
    v13 = 0LL;
    v12 = 0LL;
    v4 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByAppID>(
           (_QWORD *)this + 13,
           &v9,
           &v12,
           &v13,
           v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    if ( v4 < 0 )
      break;
    v5 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v13);
    v4 = (*(__int64 (__fastcall **)(__int64, CApplicationManagerUtility **, int *))(*(_QWORD *)v5 + 40LL))(
           v5,
           &v11,
           &v10);
    if ( v4 < 0 || v10 )
      break;
    (*(void (__fastcall **)(char *, CApplicationManagerUtility *))(*((_QWORD *)this - 2) + 72LL))(
      (char *)this - 16,
      v11);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
    CApplicationManagerUtility::SwitchToThisWindow(v11, v6);
  return (unsigned int)v4;
}
