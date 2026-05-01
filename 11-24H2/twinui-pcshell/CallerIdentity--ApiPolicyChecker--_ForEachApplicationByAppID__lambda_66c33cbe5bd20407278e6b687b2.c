/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b296685___ @ 0x18067935C
 * Callers:
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1806797E0 (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180679100 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b296685___(
        struct IUnknown *this,
        _QWORD *a2)
{
  struct IObjectArray **v4; // r8
  int AllApplicationsByAppID; // ebx
  bool v6; // r14
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v11[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  AllApplicationsByAppID = CallerIdentity::FindAllApplicationsByAppID(this, (const unsigned __int16 *)&v13, v4);
  if ( AllApplicationsByAppID >= 0 )
  {
    v12 = 0;
    v6 = 1;
    v7 = 0;
    for ( AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(
                                     v13,
                                     &v12); AllApplicationsByAppID >= 0; ++v7 )
    {
      if ( !v6 || v7 >= v12 )
        break;
      v8 = v13;
      v11[0] = 0LL;
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v13 + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
      AllApplicationsByAppID = v9(v8, v7, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v11);
      if ( AllApplicationsByAppID >= 0 )
      {
        AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11[0] + 168LL))(v11[0], *a2);
        if ( AllApplicationsByAppID >= 0 )
          v6 = *(_DWORD *)*a2 == 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return (unsigned int)AllApplicationsByAppID;
}
