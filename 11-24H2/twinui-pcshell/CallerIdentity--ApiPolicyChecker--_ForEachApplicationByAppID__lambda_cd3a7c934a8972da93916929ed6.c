/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x180679458
 * Callers:
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x180679848 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_cd3a7c934a8972da93916929ed6f73f0_::operator() @ 0x1801E8CC0 (_lambda_cd3a7c934a8972da93916929ed6f73f0_--operator().c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180679100 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___(
        struct IUnknown *this,
        bool **a2)
{
  struct IObjectArray **v4; // r8
  int AllApplicationsByAppID; // ebx
  char v6; // r14
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 **); // rdi
  int v10; // eax
  unsigned __int16 v12[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-8h] BYREF
  char v14; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+48h] BYREF

  *(_QWORD *)v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
  AllApplicationsByAppID = CallerIdentity::FindAllApplicationsByAppID(this, v12, v4);
  if ( AllApplicationsByAppID >= 0 )
  {
    v15 = 0;
    v6 = 1;
    v14 = 1;
    v7 = 0;
    for ( AllApplicationsByAppID = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v12 + 24LL))(
                                     *(_QWORD *)v12,
                                     &v15); AllApplicationsByAppID >= 0; ++v7 )
    {
      if ( !v6 || v7 >= v15 )
        break;
      v8 = *(_QWORD *)v12;
      v13 = 0LL;
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 **))(**(_QWORD **)v12 + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
      AllApplicationsByAppID = v9(v8, v7, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v13);
      if ( AllApplicationsByAppID >= 0 )
      {
        v10 = lambda_cd3a7c934a8972da93916929ed6f73f0_::operator()(a2, v13, (bool *)&v14);
        v6 = v14;
        AllApplicationsByAppID = v10;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
  return (unsigned int)AllApplicationsByAppID;
}
