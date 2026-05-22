/*
 * XREFs of ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x1800D0540
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180032A18 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyInputInfo@@@Z @ 0x1800CC184 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyIn.c)
 *     ?AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z @ 0x1800D0208 (-AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x1800D0258 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D038C (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D0ACC (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D0B10 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceRemoval(AugmentedInputDeviceCollection *this, int a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  RawInputProvidersTracing *v7; // rcx
  unsigned int v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+48h] [rbp-B8h]
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+78h] [rbp-88h]

  memset_0(v13, 0, 0xBC0uLL);
  v14 = 3008;
  *(_QWORD *)v9 = 0LL;
  v10 = 0;
  if ( (int)AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(this, a2, (struct AugmentedInputCacheState *)v9) >= 0
    && (int)MPCInputInfoHelper::PopulateAugmentedInput(5, a2, v9[0], SHIWORD(v9[1]), v10, SHIWORD(v10), (__int64)v13) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v13);
  }
  v11 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (char *)this + 2760,
    &v12,
    &v11);
  if ( v12 != *((__int64 **)this + 345) )
  {
    v5 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
           (__int64 **)this + 345,
           v12);
    std::_Deallocate<16,0>((char *)v5, (const struct std::nothrow_t *)0x30);
  }
  if ( RawInputProvidersTracing::IsEnabled(v4) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v6,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::AugmentedInputDevice_DeviceRemoved_(v7, v9[0]);
  }
  return 0LL;
}
