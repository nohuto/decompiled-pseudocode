/*
 * XREFs of ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D3840
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F0C0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D28C8 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D2DF4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x1800D3590 (-AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z.c)
 *     ?AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z @ 0x1800D364C (-AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z.c)
 *     ?GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z @ 0x1800D3768 (-GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3F1C (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceAttach(
        AugmentedInputDeviceCollection *this,
        int a2,
        struct DeviceInfo **a3)
{
  int DeviceProductInfo; // ebx
  __int64 v7; // rdx
  struct DeviceInfo *v9; // rsi
  unsigned __int16 v10; // r12
  unsigned __int16 v11; // r13
  __int16 v12; // r15
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rcx
  RawInputProvidersTracing *v16; // rcx
  unsigned __int16 v17[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v18; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v21; // [rsp+88h] [rbp+48h] BYREF

  v18 = 0;
  v17[0] = 0;
  LOWORD(v21) = 0;
  DeviceProductInfo = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( DeviceProductInfo < 0 )
  {
    v7 = 103LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)DeviceProductInfo);
    return (unsigned int)DeviceProductInfo;
  }
  v9 = *a3;
  DeviceProductInfo = AugmentedInputDeviceCollection::GetDeviceProductInfo(
                        this,
                        a2,
                        &v18,
                        v17,
                        (unsigned __int16 *)&v21);
  if ( DeviceProductInfo < 0 )
  {
    v7 = 107LL;
    goto LABEL_3;
  }
  v10 = v17[0];
  v11 = v18;
  v12 = v21;
  DeviceProductInfo = AugmentedInputDeviceCollection::AddDeviceToCache(this, a2, v18, v17[0], v21);
  if ( DeviceProductInfo < 0 )
  {
    v7 = 108LL;
    goto LABEL_3;
  }
  v21 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (char *)this + 2760,
    &v19,
    &v21);
  if ( v19 == *((_QWORD *)this + 345) )
  {
    DeviceProductInfo = -2147467259;
    v7 = 109LL;
    goto LABEL_3;
  }
  v14 = *(_DWORD *)(v19 + 32);
  *((_WORD *)v9 + 303) = 0;
  *((_DWORD *)v9 + 149) = v14;
  *((_WORD *)v9 + 300) = v11;
  *((_WORD *)v9 + 301) = v10;
  *((_WORD *)v9 + 302) = v12;
  if ( RawInputProvidersTracing::IsEnabled(v13) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v15,
      (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::AugmentedInputDevice_DeviceAttached_(v16, v14, *((_BYTE *)this + 2776));
  }
  return 0LL;
}
