/*
 * XREFs of ?SetBootstrapProxy@InputSystemInternalClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18012DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x1800B0E98 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Micro.c)
 *     ??R?$_Func_class@XAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z @ 0x180100960 (--R-$_Func_class@XAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV-$ComPtr@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputSystemInternalClientConnection::SetBootstrapProxy(
        InputSystemInternalClientConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  __int64 (__fastcall *v4)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *); // rbx
  int v5; // eax
  void (__fastcall ***v6)(__int64); // rbx
  __int64 *v7; // r14
  __int64 v8; // rbp
  __int64 i; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  struct Microsoft::Bamo::BamoProxy *v17; // [rsp+68h] [rbp+20h]

  v17 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoProxy *))a2)(a2);
  v15 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *))(*(_QWORD *)a2 + 16LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v5 = v4(a2, &GUID_b7d524a8_0636_f4f6_6f1f_62a7ad59b827, &v15);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalclientconnection.cpp",
      (const char *)(unsigned int)v5,
      v13);
  v6 = (void (__fastcall ***)(__int64))((v15 - 8) & -(__int64)(v15 != 0));
  v7 = (__int64 *)((char *)this + 248);
  if ( *((void (__fastcall ****)(__int64))this + 31) != v6 )
  {
    if ( v6 )
      (**v6)((v15 - 8) & -(__int64)(v15 != 0));
    v16 = *v7;
    *v7 = (__int64)v6;
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(&v16);
  }
  v8 = *((_QWORD *)this + 33);
  for ( i = *((_QWORD *)this + 32); i != v8; i += 64LL )
    std::_Func_class<void,Microsoft::WRL::ComPtr<DataProviderPrincipal> &>::operator()(i);
  v10 = *((_QWORD *)this + 32);
  v11 = *((_QWORD *)this + 33);
  if ( v10 != v11 )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(v10, v11);
    *((_QWORD *)this + 33) = *((_QWORD *)this + 32);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  (*(void (__fastcall **)(struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
