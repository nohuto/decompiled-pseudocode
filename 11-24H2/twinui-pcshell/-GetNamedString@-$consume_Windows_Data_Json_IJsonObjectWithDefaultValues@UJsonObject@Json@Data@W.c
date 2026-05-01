/*
 * XREFs of ?GetNamedString@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x18023C3D0
 * Callers:
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x1800C4F14 (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 *     GetStoredEnterprisePinGeneration @ 0x180690EBC (GetStoredEnterprisePinGeneration.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+48h] [rbp-18h] BYREF
  __int128 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+80h] [rbp+20h] BYREF
  _QWORD *v17; // [rsp+88h] [rbp+28h] BYREF

  v17 = a2;
  v13 = 0LL;
  v7 = *a1;
  if ( v7 )
  {
    v16 = 0LL;
    v8 = (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>, &v16);
    v9 = v16;
    v12 = v16;
  }
  else
  {
    v8 = 0;
    v12 = 0LL;
    v9 = 0LL;
  }
  v14 = 0;
  v15 = 0LL;
  winrt::check_hresult(&v17, v8, &v14);
  v14 = 0;
  v15 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v9 + 64LL))(v9, *a3, *a4, &v13);
  winrt::check_hresult(&v17, v10, &v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  *a2 = v13;
  return a2;
}
