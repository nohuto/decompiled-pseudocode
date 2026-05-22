/*
 * XREFs of ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x1800D7770
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D28C8 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D2DF4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D49A8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$shared_ptr@VGestureHandler@@@std@@@std@.c)
 *     ?TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800D95D8 (-TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceRemoved(SpatialRimDeviceCollection *this, unsigned int a2)
{
  __int64 *v4; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  RawInputProvidersTracing *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v18; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 2912,
    (__int64)&v18,
    &v19);
  v4 = v18;
  if ( v18 == *((__int64 **)this + 365) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x368,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2), v18[3]);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v9 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
             v7,
             (__int64)(v4 + 2));
      v10 = *((_QWORD *)this + 367);
      v11 = 2 * (*((_QWORD *)this + 370) & v9);
      if ( *(__int64 **)(v10 + 16 * (*((_QWORD *)this + 370) & v9) + 8) == v4 )
      {
        if ( *(__int64 **)(v10 + 16 * (*((_QWORD *)this + 370) & v9)) == v4 )
        {
          v12 = *((_QWORD *)this + 365);
          *(_QWORD *)(v10 + 8 * v11) = v12;
        }
        else
        {
          v12 = v4[1];
        }
        *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
      }
      else if ( *(__int64 **)(v10 + 16 * (*((_QWORD *)this + 370) & v9)) == v4 )
      {
        *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 370) & v9)) = *v4;
      }
      v13 = *v4;
      --*((_QWORD *)this + 366);
      *(_QWORD *)v4[1] = v13;
      *(_QWORD *)(v13 + 8) = v4[1];
      std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>,void *>>>(
        v13,
        (__int64)v4);
      if ( RawInputProvidersTracing::IsEnabled(v14) )
      {
        wil::details::static_lazy<RawInputProvidersTracing>::get(
          v15,
          (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
        RawInputProvidersTracing::TelemetryDdiDevice_Removed_(v16, a2);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v6);
      return v8;
    }
  }
}
