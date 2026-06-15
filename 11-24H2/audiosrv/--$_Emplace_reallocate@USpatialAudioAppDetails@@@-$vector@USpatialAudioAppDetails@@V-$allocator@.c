/*
 * XREFs of ??$_Emplace_reallocate@USpatialAudioAppDetails@@@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@AEAAPEAUSpatialAudioAppDetails@@QEAU2@$$QEAU2@@Z @ 0x18014F2BC
 * Callers:
 *     ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18008E228 (-ProcessSpatialAudioFormatElement@@YAJV-$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@w.c)
 *     ?push_back@?$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V?$allocator@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@std@@@std@@QEAAX$$QEAUSpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@Z @ 0x18015F910 (-push_back@-$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V-$allocator@USpati.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18005CC90 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAUSpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAPEAUSpatialAudioAppDetails@@QEAU1@0PEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18014F518 (--$_Uninitialized_move@PEAUSpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@std@@@.c)
 *     ?_Change_array@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@AEAAXQEAUSpatialAudioAppDetails@@_K1@Z @ 0x18015F594 (-_Change_array@-$vector@USpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@std@@@st.c)
 */

char *__fastcall std::vector<SpatialAudioAppDetails>::_Emplace_reallocate<SpatialAudioAppDetails>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  SpatialAudioAppDetails *v13; // rax
  SpatialAudioAppDetails *v14; // rdi
  char *v15; // r14
  __int64 v16; // rdx
  SpatialAudioAppDetails *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  __int64 v20; // rcx
  SpatialAudioAppDetails *v21; // [rsp+20h] [rbp-48h]
  char *v22; // [rsp+20h] [rbp-48h]
  SpatialAudioAppDetails *v23; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = (SpatialAudioAppDetails *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  v15 = (char *)v13 + (v6 & 0xFFFFFFFFFFFFFFF0uLL);
  try
  {
    *(_QWORD *)v15 = *a3;
    *a3 = 0LL;
    *((_QWORD *)v15 + 1) = a3[1];
    a3[1] = 0LL;
    v23 = (SpatialAudioAppDetails *)v15;
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<SpatialAudioAppDetails *>(v18, a2, v13);
      v23 = v14;
      v17 = (SpatialAudioAppDetails *)(v15 + 16);
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<SpatialAudioAppDetails *>(v18, v16, v17);
    std::vector<SpatialAudioAppDetails>::_Change_array(a1, v14, v9, v8, v21);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(v23, (SpatialAudioAppDetails *)(v15 + 16));
    std::allocator<winrt::guid>::deallocate(v20, v22, v8);
    throw;
  }
  return result;
}
