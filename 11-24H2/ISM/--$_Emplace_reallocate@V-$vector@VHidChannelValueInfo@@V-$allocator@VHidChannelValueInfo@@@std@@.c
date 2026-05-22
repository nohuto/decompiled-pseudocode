/*
 * XREFs of ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E8734
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FB80 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180054DB0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800953CC (--$_Destroy_range@V-$allocator@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo.c)
 *     ??$_Uninitialized_move@PEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@YAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800E97D0 (--$_Uninitialized_move@PEAV-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@st.c)
 */

char *__fastcall std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  char *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  char *v20; // r8
  __int64 v21; // rcx
  char *result; // rax
  char *v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  v8 = 0xAAAAAAAAAAAAAAALL;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v23 = v13;
  v15 = &v13[24 * v6];
  try
  {
    v16 = a3[2];
    a3[2] = 0LL;
    v17 = a3[1];
    a3[1] = 0LL;
    v18 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v15 = v18;
    *((_QWORD *)v15 + 1) = v17;
    *((_QWORD *)v15 + 2) = v16;
    v24 = (__int64)v15;
    v19 = a1[1];
    v20 = v14;
    v21 = *a1;
    if ( a2 != v19 )
    {
      std::_Uninitialized_move<std::vector<HidChannelValueInfo> *,std::allocator<std::vector<HidChannelValueInfo>>>(
        v21,
        a2,
        v14);
      v24 = (__int64)v14;
      v20 = v15 + 24;
      v19 = a1[1];
      v21 = a2;
    }
    std::_Uninitialized_move<std::vector<HidChannelValueInfo> *,std::allocator<std::vector<HidChannelValueInfo>>>(
      v21,
      v19,
      v20);
    if ( *a1 )
    {
      std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(*a1, a1[1]);
      std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3)));
    }
    *a1 = (__int64)v14;
    a1[1] = (__int64)&v14[24 * v9];
    a1[2] = (__int64)&v14[24 * v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(v24, (__int64)(v15 + 24));
    std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(24 * v8));
    throw;
  }
  return result;
}
