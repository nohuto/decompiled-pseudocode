/*
 * XREFs of ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18004F640
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x18007069C (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18000D8EC (--$find@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18004F608 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18009C650 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18009C798 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AtmosCheck::CheckInstalledAppServicesAvailable(AtmosCheck *this)
{
  char v2; // r14
  __int64 v3; // rdx
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  _BYTE *v8; // r8
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]

  v2 = 1;
  v10 = 0LL;
  v11 = 0LL;
  if ( (int)AtmosCheck::GetCurrentEndpointsUnderLock(this, &v10) >= 0 )
  {
    for ( i = v10; i != *((_QWORD *)&v10 + 1); i += 32LL )
    {
      v5 = std::wstring::c_str(i, v3);
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v6 = -1LL;
      do
        ++v6;
      while ( *(_WORD *)(v5 + 2 * v6) );
      std::wstring::_Construct<1,unsigned short const *>(&v13, v5);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find<void>(
        (_QWORD *)this + 97,
        &v12,
        (__int64)&v13);
      std::wstring::_Tidy_deallocate((__int64)&v13, v7);
      if ( v2 && v12 != *((_QWORD *)this + 98) )
      {
        v3 = 0LL;
        v8 = (char *)this + 272;
        while ( v3 < 224 )
        {
          if ( *v8 && *(int *)(v3 + *(_QWORD *)(v12 + 48) + 8) < 0 )
          {
            v2 = 0;
            break;
          }
          v8 += 72;
          v3 += 32LL;
        }
      }
    }
  }
  if ( (_QWORD)v10 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v10, *((__int64 *)&v10 + 1));
    std::_Deallocate<16,0>((char *)v10, (const struct std::nothrow_t *)((v11 - v10) & 0xFFFFFFFFFFFFFFE0uLL));
  }
  return v2;
}
