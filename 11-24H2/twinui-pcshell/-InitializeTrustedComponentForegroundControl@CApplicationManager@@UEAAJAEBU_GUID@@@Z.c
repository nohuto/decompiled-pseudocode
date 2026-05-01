/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z @ 0x18023B940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18029CC80 (-s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::InitializeTrustedComponentForegroundControl(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  HRESULT Instance; // ebx
  unsigned int v5; // r8d
  struct CApplicationManager::TRUSTED_COMPONENT_REGISTRATION near **i; // r9
  __int64 *ppv; // r14
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  Instance = -2147024891;
  v5 = 0;
  for ( i = &CApplicationManager::s_rgTrustedComponentRegMap;
        *(_QWORD *)*i != *(_QWORD *)&a2->Data1 || *((_QWORD *)*i + 1) != *(_QWORD *)a2->Data4;
        i += 2 )
  {
    if ( ++v5 >= 0xA )
      return (unsigned int)Instance;
  }
  ppv = (__int64 *)(&CApplicationManager::s_rgTrustedComponentRegMap + 2 * v5 + 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(ppv);
  Instance = CoCreateInstance(a2, 0LL, 0x401u, &GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd, (LPVOID *)ppv);
  if ( Instance >= 0 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
    Instance = CTrustedComponentForegroundControl::s_CreateInstance(
                 (struct IImmersiveApplicationManager *)((unsigned __int64)&this[-8] & -(__int64)(this != (const struct _GUID *)280)),
                 this - 8,
                 &v9);
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)*ppv + 24LL))(*ppv, v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  }
  return (unsigned int)Instance;
}
