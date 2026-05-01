/*
 * XREFs of ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x18028F698
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x180057378 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DF1B0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x1800490A8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C577C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18010EB48 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18028F958 (-GetPinnablePidl@@YA-AV-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x18028FA38 (--$make_shared@VPinOperationContext@@$$V@std@@YA-AV-$shared_ptr@VPinOperationContext@@@0@XZ.c)
 *     ??$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@SAX$$QEAPEBG000AEAW4PinOperationType@@@Z @ 0x18028FAB8 (--$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD **__fastcall PinOperationContext::Create(_QWORD **a1, _QWORD *a2, winrt::hstring *a3, winrt::hstring *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  const unsigned __int16 *v11; // rcx
  __int64 v12; // rax
  unsigned __int16 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // r11
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  __int64 v19; // r11
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rcx
  void *v24; // rax
  __int64 *PinnablePidl; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rax
  void *v28; // rcx
  void *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  std::_Ref_count_base *v35; // rcx
  __int128 v37; // [rsp+30h] [rbp-39h] BYREF
  _QWORD **v38; // [rsp+40h] [rbp-29h] BYREF
  __int64 v39; // [rsp+48h] [rbp-21h]
  int v40; // [rsp+50h] [rbp-19h]
  LPVOID pv[2]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v42; // [rsp+70h] [rbp+7h] BYREF
  _QWORD *v43; // [rsp+80h] [rbp+17h] BYREF

  v38 = a1;
  v43 = a2;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinOperationContext,>();
  v40 = 1;
  std::shared_ptr<FlyoutView>::operator=(*a1, a2);
  if ( *(_QWORD *)a3 )
  {
    v11 = winrt::hstring::c_str(a3);
    *(_QWORD *)&v37 = v11;
    v9 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    *((_QWORD *)&v37 + 1) = v12;
  }
  else
  {
    v8 = *(_QWORD *)(*a2 + 24LL);
    v9 = -1LL;
    if ( v8 )
    {
      *(_QWORD *)&v37 = *(_QWORD *)(*a2 + 24LL);
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)(v8 + 2 * v10) );
      *((_QWORD *)&v37 + 1) = v10;
    }
    else
    {
      v37 = 0uLL;
    }
  }
  std::wstring::assign((void **)*a1 + 3, (void *)v37, *((unsigned __int64 *)&v37 + 1));
  v13 = (unsigned __int16 *)winrt::hstring::c_str(a4);
  std::wstring::operator=((void **)*a1 + 7, v13);
  v14 = *(_QWORD *)(*a2 + 24LL);
  if ( v14 )
  {
    *(_QWORD *)&v37 = *(_QWORD *)(*a2 + 24LL);
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v14 + 2 * v15) );
    *((_QWORD *)&v37 + 1) = v15;
  }
  else
  {
    v37 = 0uLL;
  }
  v16 = *a1;
  v17 = (__int64)(*a1 + 3);
  if ( (*a1)[6] > 7uLL )
    v17 = v16[3];
  v18 = std::_Traits_equal<std::char_traits<unsigned short>>(v17, v16[5], (_WORD *)v37, *((__int64 *)&v37 + 1));
  *(_DWORD *)(v19 + 16) = v18 ^ 1;
  v20 = *a1;
  v21 = (__int64)(*a1 + 7);
  if ( (*a1)[10] > 7uLL )
    v21 = v20[7];
  v22 = v20[9];
  *(_QWORD *)&v37 = v21;
  *((_QWORD *)&v37 + 1) = v22;
  v23 = v20 + 3;
  if ( v20[6] > 7uLL )
    v23 = (void *)v20[3];
  v24 = (void *)v20[5];
  pv[0] = v23;
  pv[1] = v24;
  v42 = *(_OWORD *)pv;
  PinnablePidl = (__int64 *)GetPinnablePidl(pv, &v42, &v37);
  v26 = *a1;
  v27 = *PinnablePidl;
  *PinnablePidl = 0LL;
  v28 = (void *)v26[11];
  v26[11] = v27;
  if ( v28 )
    CoTaskMemFree(v28);
  v29 = pv[0];
  pv[0] = 0LL;
  if ( v29 )
    CoTaskMemFree(v29);
  pv[0] = (LPVOID)winrt::hstring::c_str(a4);
  *(_QWORD *)&v37 = winrt::hstring::c_str(a3);
  v31 = *a2;
  v32 = *(_QWORD *)(*a2 + 24LL);
  if ( v32 )
  {
    v38 = *(_QWORD ***)(*a2 + 24LL);
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v39 = v33;
  }
  else
  {
    v38 = 0LL;
    v39 = 0LL;
  }
  v43 = v38;
  v34 = *(_QWORD *)(v31 + 32);
  if ( v34 )
  {
    v38 = *(_QWORD ***)(v31 + 32);
    do
      ++v9;
    while ( *(_WORD *)(v34 + 2 * v9) );
    v39 = v9;
  }
  else
  {
    v38 = 0LL;
    v39 = 0LL;
  }
  PinManagerTelemetry::OperationContextCreatedStandard<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,enum PinOperationType &>(
    (unsigned int)&v38,
    (unsigned int)&v43,
    (unsigned int)&v37,
    (unsigned int)pv,
    v30);
  v35 = (std::_Ref_count_base *)a2[1];
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  return a1;
}
