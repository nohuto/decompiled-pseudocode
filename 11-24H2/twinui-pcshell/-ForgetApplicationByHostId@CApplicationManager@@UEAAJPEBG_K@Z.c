/*
 * XREFs of ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1802E5620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180016D88 (--$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersive.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180090E44 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18016A9B8 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ForgetApplicationByHostId(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  char v6; // di
  CApplicationManager *v7; // rbx
  struct IImmersiveApplicationInternal *v9; // [rsp+50h] [rbp+30h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp+40h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp+48h] BYREF

  v10 = a3;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0;
  v9 = 0LL;
  v7 = (CApplicationManager *)((char *)this - 152);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  v11 = a3;
  if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>((__int64)v7, (int)&v11, &v9) >= 0 )
  {
    v6 = 1;
    v11 = a3;
    do
    {
      CApplicationManager::_ForgetApplicationNoLock(v7, v9, 2u);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
    }
    while ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>((__int64)v7, (int)&v11, &v9) >= 0 );
  }
  CApplicationManager::_DeleteApplicationData(v7, a2, &v10);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  return v6 == 0 ? 0x80070490 : 0;
}
