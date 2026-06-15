/*
 * XREFs of ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x1801488E4
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x1800833AC (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800540F8 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18009FD50 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180148A3C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckForAllEndpoints(AtmosCheck *this, bool *a2)
{
  bool v4; // si
  int CurrentEndpointsUnderLock; // eax
  unsigned int v6; // edi
  char *v7; // rbx
  char *v9; // rdi
  __int64 i; // rbx
  const unsigned __int16 *v11; // rax
  int v12; // eax
  unsigned int v13; // r14d
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  bool v17; // [rsp+80h] [rbp+40h] BYREF

  v4 = 0;
  v14 = 0LL;
  v15 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64)&v14);
  v6 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    v9 = (char *)v14;
    for ( i = v14; i != *((_QWORD *)&v14 + 1); i += 32LL )
    {
      v17 = 0;
      v11 = (const unsigned __int16 *)std::wstring::c_str(i);
      v12 = AtmosCheck::PerformLicenseCheckForEndpoint(this, v11, &v17);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8B5,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v12);
        if ( v9 )
        {
          std::_Destroy_range<std::allocator<std::wstring>>((__int64)v9, *((__int64 *)&v14 + 1));
          std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)((v15 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0uLL));
        }
        return v13;
      }
      if ( v4 || v17 )
        v4 = 1;
    }
    if ( a2 )
      *a2 = v4;
    if ( v9 )
    {
      std::_Destroy_range<std::allocator<std::wstring>>((__int64)v9, *((__int64 *)&v14 + 1));
      std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)((v15 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8AF,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)CurrentEndpointsUnderLock);
    v7 = (char *)v14;
    if ( (_QWORD)v14 )
    {
      std::_Destroy_range<std::allocator<std::wstring>>(v14, *((__int64 *)&v14 + 1));
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)((v15 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    return v6;
  }
}
