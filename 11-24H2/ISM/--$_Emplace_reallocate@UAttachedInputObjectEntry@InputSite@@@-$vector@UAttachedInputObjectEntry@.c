/*
 * XREFs of ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x180037F44
 * Callers:
 *     ??$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x180036E5C (--$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PE.c)
 *     ?push_back@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAX$$QEAUAttachedInputObjectEntry@InputSite@@@Z @ 0x180037E54 (-push_back@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@.c)
 *     ??$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoInputDelegationInputObjectProxy@@@Z @ 0x180056AB8 (--$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy.c)
 *     ??$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoWindowsMessageDeliveryProxy@@@Z @ 0x180056E4C (--$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PE.c)
 *     ??$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoAnimationTargetClientProxy@@@Z @ 0x18005C908 (--$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEA.c)
 *     ??$AttachObject@VBamoDragManagerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoDragManagerClientProxy@@@Z @ 0x18005FDBC (--$AttachObject@VBamoDragManagerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBam.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800383BC (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800383E8 (--$_Destroy_range@V-$allocator@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std.c)
 *     ??$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@QEAU12@0PEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x18006F940 (--$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObject.c)
 */

char *__fastcall std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rax
  char *v13; // r14
  char *v14; // r13
  _QWORD *v15; // rcx
  char *v16; // r10
  char *v17; // rcx
  _QWORD *v18; // r9
  _QWORD *v19; // rdx
  _QWORD *v20; // r8
  char *v21; // rsi
  char *v22; // r12
  char *result; // rax
  char *v24; // [rsp+20h] [rbp-48h]
  char *v25; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  v7 = 0xFFFFFFFFFFFFFFFLL;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<16>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v24 = v12;
  v14 = &v12[v5 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    *(_QWORD *)v14 = *a3;
    v15 = a3 + 1;
    *((_QWORD *)v14 + 1) = 0LL;
    if ( v14 + 8 != (char *)(a3 + 1) )
    {
      *((_QWORD *)v14 + 1) = *v15;
      *v15 = 0LL;
    }
    v25 = &v12[v5 & 0xFFFFFFFFFFFFFFF0uLL];
    v16 = a1[1];
    v17 = *a1;
    if ( a2 == v16 )
    {
      v18 = v12;
      if ( v17 != v16 )
      {
        v19 = v17 + 8;
        v20 = v12 + 8;
        do
        {
          *v18 = *(_QWORD *)v17;
          *v20 = 0LL;
          if ( v20 != v19 )
          {
            *v20 = *v19;
            *v19 = 0LL;
          }
          v18 += 2;
          v20 += 2;
          v17 += 16;
          v19 += 2;
        }
        while ( v17 != v16 );
      }
      std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(v18, v18);
    }
    else
    {
      std::_Uninitialized_move<InputSite::AttachedInputObjectEntry *>(v17, a2, v12);
      v25 = v13;
      std::_Uninitialized_move<InputSite::AttachedInputObjectEntry *>(a2, a1[1], v14 + 16);
    }
    v21 = *a1;
    if ( *a1 )
    {
      v22 = a1[1];
      while ( v21 != v22 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21 + 1);
        v21 += 16;
      }
      std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    *a1 = v13;
    a1[1] = &v13[16 * v8];
    a1[2] = &v13[16 * v7];
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
      v25,
      v14 + 16);
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)(16 * v7));
    throw;
  }
  return result;
}
