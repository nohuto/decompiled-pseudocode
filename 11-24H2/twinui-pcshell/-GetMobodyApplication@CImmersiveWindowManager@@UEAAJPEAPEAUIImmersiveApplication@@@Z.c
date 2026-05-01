/*
 * XREFs of ?GetMobodyApplication@CImmersiveWindowManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1802F0C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::GetMobodyApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveApplication **a2)
{
  __int64 (__fastcall *v4)(char *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplication **)); // rbx
  int v5; // ebx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = 0LL;
  v4 = *(__int64 (__fastcall **)(char *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplication **)))(*((_QWORD *)this + 2) + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  v5 = v4((char *)this + 16, &v7);
  if ( v5 >= 0 )
    v5 = (**v7)(v7, &GUID_8b14e88b_5663_4caf_b196_c31479262831, a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v5;
}
