/*
 * XREFs of ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D81E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180078518 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D28C8 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D2DF4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x1800D59D4 (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendDeviceUpdate(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct MPCSourceDeviceInfo *a3)
{
  __int64 v6; // rcx
  struct DeviceInfo *v7; // rbx
  int DeviceInfo; // eax
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  unsigned int v12; // edi
  __int64 v13; // rcx
  RawInputProvidersTracing *v14; // rcx
  struct DeviceInfo *v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+48h] [rbp+10h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v17 = a2;
  v16 = 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 2912,
    (__int64)&v18,
    &v17);
  if ( v18 == *((_QWORD *)this + 365) )
  {
    DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v16);
    v7 = v16;
    if ( DeviceInfo < 0 )
    {
LABEL_8:
      v12 = -2147483638;
      goto LABEL_9;
    }
  }
  else
  {
    v7 = *(struct DeviceInfo **)(v18 + 24);
  }
  if ( !v7 )
    goto LABEL_8;
  v9 = 7LL;
  v10 = (_OWORD *)((char *)v7 + 596);
  do
  {
    *v10 = *(_OWORD *)a3;
    v10[1] = *((_OWORD *)a3 + 1);
    v10[2] = *((_OWORD *)a3 + 2);
    v10[3] = *((_OWORD *)a3 + 3);
    v10[4] = *((_OWORD *)a3 + 4);
    v10[5] = *((_OWORD *)a3 + 5);
    v10[6] = *((_OWORD *)a3 + 6);
    v10 += 8;
    v11 = *((_OWORD *)a3 + 7);
    a3 = (const struct MPCSourceDeviceInfo *)((char *)a3 + 128);
    *(v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  *v10 = *(_OWORD *)a3;
  v10[1] = *((_OWORD *)a3 + 1);
  v10[2] = *((_OWORD *)a3 + 2);
  *((_QWORD *)v10 + 6) = *((_QWORD *)a3 + 6);
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 2) + 48LL))(
          *((_QWORD *)this + 2),
          v7);
LABEL_9:
  if ( RawInputProvidersTracing::IsEnabled(v6) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v13,
      (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::ControllerDeviceUpdate_(v14, v12, a2, v7);
  }
  return v12;
}
