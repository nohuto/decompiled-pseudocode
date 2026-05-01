/*
 * XREFs of ?GetNamedNumber@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@N@Z @ 0x18068EC84
 * Callers:
 *     GetStoredEnterprisePinGeneration @ 0x180690EBC (GetStoredEnterprisePinGeneration.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
double __fastcall winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedNumber(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // r8
  int v7; // eax
  int v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  int v12; // [rsp+48h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-30h]
  double v14; // [rsp+60h] [rbp-20h] BYREF

  v14 = 0.0;
  v3 = *a1;
  if ( v3 )
  {
    v10 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>, &v10);
    v5 = v10;
    v11 = v10;
  }
  else
  {
    v4 = 0;
    v11 = 0LL;
    v5 = 0LL;
  }
  v12 = 0;
  v13 = 0LL;
  winrt::check_hresult(&v9, v4, (__int64)&v12);
  v12 = 0;
  v13 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, double *))(*(_QWORD *)v5 + 80LL))(v5, *a2, v6, &v14);
  winrt::check_hresult(&v9, v7, (__int64)&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return v14;
}
