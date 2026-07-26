/*
 * XREFs of ndisIfUpdateExternalInterface @ 0x1400CF9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400CF8F0 (--1-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1-Re.c)
 *     ?acquire_kspin_lock@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@@1@PEA_K@Z @ 0x1400CF954 (-acquire_kspin_lock@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEB.c)
 *     ndisIfUpdateSingleField @ 0x1400CFDB0 (ndisIfUpdateSingleField.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAAXUkspin_lock_saved_irql@23@@Z @ 0x1400CFE54 (-reset@-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x14015C460 (-ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisIfUpdateExternalInterface(_QWORD *P)
{
  struct _NDIS_IF_BLOCK *v1; // rbx
  __int128 *v3; // rdi
  __int128 v5; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v6; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v7; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v8[224]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v9[516]; // [rsp+130h] [rbp+30h] BYREF
  int v10; // [rsp+334h] [rbp+234h] BYREF
  _OWORD v11[2]; // [rsp+338h] [rbp+238h] BYREF
  __int16 v12; // [rsp+358h] [rbp+258h]
  _OWORD v13[2]; // [rsp+35Ah] [rbp+25Ah] BYREF
  __int16 v14; // [rsp+37Ah] [rbp+27Ah]

  v1 = (struct _NDIS_IF_BLOCK *)P[4];
  wil::acquire_kspin_lock(&v6);
  *(_QWORD *)&v5 = 0LL;
  BYTE8(v5) = 0;
  v1->IsUpdatePending = 0;
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::reset(
    &v6,
    &v5);
  memset(v8, 0, 0xD8uLL);
  if ( !ndisIfQueryProvider(v1, 0x10287u, 0xD8u, v8) )
  {
    ndisIfUpdateSingleField(v1, v8, 536LL, 4LL);
    ndisIfUpdateSingleField(v1, &v8[4], 540LL, 4LL);
    ndisIfUpdateSingleField(v1, &v8[8], 644LL, 4LL);
    ndisIfUpdateSingleField(v1, &v8[12], 648LL, 4LL);
    ndisIfUpdateSingleField(v1, &v8[16], 544LL, 4LL);
    ndisIfUpdateSingleField(v1, &v8[20], 640LL, 1LL);
    ndisIfUpdateSingleField(v1, &v8[21], 641LL, 1LL);
    ndisIfUpdateSingleField(v1, &v8[24], 624LL, 8LL);
    ndisIfUpdateSingleField(v1, &v8[32], 632LL, 8LL);
  }
  memset(v9, 0, sizeof(v9));
  v10 = 0;
  v12 = 0;
  v14 = 0;
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, sizeof(v13));
  if ( !ndisIfQueryProvider(v1, 0x10289u, 0x204u, v9) )
    ndisIfUpdateSingleField(v1, v9, 20LL, 516LL);
  if ( !ndisIfQueryProvider(v1, 0x10288u, 4u, &v10) )
    ndisIfUpdateSingleField(v1, &v10, 616LL, 4LL);
  if ( !ndisIfQueryProvider(v1, 0x1010102u, 0x22u, v11) )
    ndisIfUpdateSingleField(v1, v11, 548LL, 34LL);
  if ( !ndisIfQueryProvider(v1, 0x1010101u, 0x22u, v13) )
    ndisIfUpdateSingleField(v1, v13, 582LL, 34LL);
  v3 = wil::acquire_kspin_lock(&v7);
  if ( &v6 != v3 )
  {
    v5 = *v3;
    wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::reset(
      &v6,
      &v5);
    *(_QWORD *)&v5 = 0LL;
    BYTE8(v5) = 0;
    *v3 = v5;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v7);
  IFBLOCK_DECREMENT_REF((char *)v1, 0x11u);
  *(_QWORD *)&v5 = 0LL;
  BYTE8(v5) = 0;
  v7 = v5;
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::reset(
    &v6,
    &v7);
  ExFreePoolWithTag(P, 0);
  return wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v6);
}
