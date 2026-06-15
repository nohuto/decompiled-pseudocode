/*
 * XREFs of ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x1801515D4
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x18007069C (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18004F608 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18009C650 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015172C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckForAllEndpoints(AtmosCheck *this, bool *a2)
{
  bool v4; // si
  int CurrentEndpointsUnderLock; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  char *v8; // rbx
  char *v10; // rdi
  __int64 i; // rbx
  const unsigned __int16 *v12; // rax
  int v13; // eax
  unsigned int v14; // r14d
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  bool v18; // [rsp+80h] [rbp+40h] BYREF

  v4 = 0;
  v15 = 0LL;
  v16 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64)&v15);
  v7 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    v10 = (char *)v15;
    for ( i = v15; i != *((_QWORD *)&v15 + 1); i += 32LL )
    {
      v18 = 0;
      v12 = (const unsigned __int16 *)std::wstring::c_str(i, v6);
      v13 = AtmosCheck::PerformLicenseCheckForEndpoint(this, v12, &v18);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8B9,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v13);
        if ( v10 )
        {
          std::_Destroy_range<std::allocator<std::wstring>>((__int64)v10, *((__int64 *)&v15 + 1));
          std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v16 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFE0uLL));
        }
        return v14;
      }
      if ( v4 || v18 )
        v4 = 1;
    }
    if ( a2 )
      *a2 = v4;
    if ( v10 )
    {
      std::_Destroy_range<std::allocator<std::wstring>>((__int64)v10, *((__int64 *)&v15 + 1));
      std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v16 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B3,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)CurrentEndpointsUnderLock);
    v8 = (char *)v15;
    if ( (_QWORD)v15 )
    {
      std::_Destroy_range<std::allocator<std::wstring>>(v15, *((__int64 *)&v15 + 1));
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)((v16 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    return v7;
  }
}
