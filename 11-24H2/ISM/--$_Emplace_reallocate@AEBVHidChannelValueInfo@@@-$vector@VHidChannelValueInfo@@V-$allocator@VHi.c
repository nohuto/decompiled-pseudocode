/*
 * XREFs of ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x180070208
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FB80 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EDF30 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x1800703AC (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAVHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@YAPEAVHidChannelValueInfo@@QEAV1@0PEAV1@AEAV?$allocator@VHidChannelValueInfo@@@0@@Z @ 0x18009C22C (--$_Uninitialized_move@PEAVHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@Y.c)
 */

char *__fastcall std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
        char **a1,
        char *a2,
        __int64 a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  char *v15; // r14
  char *v16; // rdx
  char *v17; // r8
  char *v18; // rcx
  char *result; // rax
  char *v20; // [rsp+58h] [rbp+10h]

  v6 = (a2 - *a1) / 72;
  v7 = 0x8E38E38E38E38E39uLL * ((a1[1] - *a1) >> 3);
  v8 = 0x38E38E38E38E38ELL;
  if ( v7 == 0x38E38E38E38E38ELL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = 0x8E38E38E38E38E39uLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x38E38E38E38E38ELL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<72>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v20 = v13;
  try
  {
    v15 = &v13[72 * v6];
    *(_OWORD *)v15 = *(_OWORD *)a3;
    *((_OWORD *)v15 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)v15 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)v15 + 3) = *(_OWORD *)(a3 + 48);
    *((_QWORD *)v15 + 8) = *(_QWORD *)(a3 + 64);
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<HidChannelValueInfo *>(v18, a2, v13);
      v17 = v15 + 72;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<HidChannelValueInfo *>(v18, v16, v17);
    if ( *a1 )
      std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3)));
    *a1 = v14;
    a1[1] = &v14[72 * v9];
    a1[2] = &v14[72 * v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(72 * v8));
    throw;
  }
  return result;
}
