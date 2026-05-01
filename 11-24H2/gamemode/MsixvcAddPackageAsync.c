/*
 * XREFs of MsixvcAddPackageAsync @ 0x180007840
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180002210 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005C04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000702C (--$ActivateInstance@V-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800070E4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MsixvcAddPackageAsync(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  HRESULT v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v17 = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(
         L"Windows.Management.Deployment.Internal.PackageManagerInternal",
         0x3Du,
         &hstringHeader,
         &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    JUMPOUT(0x1800079B1LL);
  }
  v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>>(
          (__int64)string,
          &v17);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v10);
    string = 0LL;
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v11;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64, __int64, __int64))(*(_QWORD *)v17 + 184LL))(
          v17,
          a1,
          0LL,
          a2,
          3,
          a3,
          a4,
          a5);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v14);
    string = 0LL;
    v15 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v11;
  }
  string = 0LL;
  v16 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0LL;
}
