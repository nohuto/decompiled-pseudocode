/*
 * XREFs of ??$Initialize@UICompositionCapabilitiesChangedHandler@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UICompositionCapabilitiesChangedHandler@@@WRL@Microsoft@@@Z @ 0x1801134BC
 * Callers:
 *     ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180113310 (-RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileGitPtr::Initialize<ICompositionCapabilitiesChangedHandler>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int AgileReference; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = 0LL;
  v9 = 0LL;
  AgileReference = 0;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    AgileReference = RoGetAgileReference(0LL, &GUID_e44a983b_30a7_416c_b8a5_04d032bd352d, v3, &v9);
    v4 = v9;
  }
  v6 = 0LL;
  v9 = 0LL;
  v7 = *a1;
  *a1 = v4;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = v9;
  }
  if ( v6 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return AgileReference;
}
