/*
 * XREFs of ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180148E48
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x180101B20 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 * Callees:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x1800097E4 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x1800099DC (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800540F8 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18005FAE4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@34@Z @ 0x180075530 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180081980 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18009FD50 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A5154 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::RefreshLicenseStatus(AtmosCheck *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11; // eax
  int CurrentEndpointsUnderLock; // eax
  unsigned int v13; // esi
  char *v14; // rbx
  bool v15; // r12
  char *v16; // rsi
  __int64 i; // rbx
  const unsigned __int16 *v18; // rax
  int v19; // eax
  unsigned int v20; // r13d
  bool v21; // r13
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r13d
  bool v26; // [rsp+40h] [rbp-49h] BYREF
  bool v27[7]; // [rsp+41h] [rbp-48h] BYREF
  __int128 v28; // [rsp+48h] [rbp-41h] BYREF
  __int64 v29; // [rsp+58h] [rbp-31h]
  const WCHAR *v30; // [rsp+60h] [rbp-29h] BYREF
  const WCHAR *v31; // [rsp+68h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+70h] [rbp-19h] BYREF
  const unsigned __int16 *v33; // [rsp+90h] [rbp+7h]
  int v34; // [rsp+98h] [rbp+Fh]
  int v35; // [rsp+9Ch] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = a2;
  v4 = -1LL;
  if ( CompareStringOrdinal(a2, -1, L"{00000000-0000-0000-0000-000000000000}", -1, 1) == 2 )
  {
    AtmosCheck::RefreshPlatformLicenses(this, v5, v6, v7);
    return 0LL;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    v8 = -2147418113;
    v9 = 2254LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !*((_BYTE *)this + 217) )
  {
    v8 = -2147467259;
    v9 = 2255LL;
    goto LABEL_5;
  }
  v11 = AtmosCheck::MapSubtypeToCommonTechIndex(this, v2);
  if ( v11 == -1 )
  {
    v8 = -2147024809;
    v9 = 2260LL;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 48 * v11 + 272) )
  {
    v8 = -2147024809;
    v9 = 2261LL;
    goto LABEL_5;
  }
  v28 = 0LL;
  v29 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64)&v28);
  v13 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    v15 = 0;
    v16 = (char *)v28;
    for ( i = v28; i != *((_QWORD *)&v28 + 1); i += 32LL )
    {
      v26 = 0;
      v18 = (const unsigned __int16 *)std::wstring::c_str(i);
      v19 = AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(this, v18, v2, &v26);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8DF,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v19);
        if ( v16 )
        {
          std::_Destroy_range<std::allocator<std::wstring>>((__int64)v16, *((__int64 *)&v28 + 1));
          std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)((v29 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFE0uLL));
        }
        return v20;
      }
      v21 = v26;
      if ( (unsigned int)CallbackContext > 5 )
      {
        v30 = (const WCHAR *)std::wstring::c_str(i);
        v27[0] = v21;
        v31 = v2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
          v22,
          byte_1801A8271,
          v23,
          v24,
          &v31,
          (__int64)v27,
          &v30,
          (__int64)&v26);
      }
      v15 = v15 || v21;
    }
    if ( v15 )
    {
      AtmosCheck::UpdateLicenseRefreshTimer(this);
      if ( *((_QWORD *)this + 5) )
      {
        if ( (unsigned int)CallbackContext > 5 )
        {
          if ( v2 )
          {
            do
              ++v4;
            while ( v2[v4] );
            v25 = 2 * v4 + 2;
          }
          else
          {
            v2 = &LocaleName;
            v25 = 2;
          }
          v33 = v2;
          v34 = v25;
          v35 = 0;
          tlgWriteTransfer_EventWriteTransfer((__int64)&CallbackContext, byte_1801A7ABC, 0LL, 0LL, 3u, &v32);
        }
        (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
      }
    }
    if ( v16 )
    {
      std::_Destroy_range<std::allocator<std::wstring>>((__int64)v16, *((__int64 *)&v28 + 1));
      std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)((v29 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D9,
    (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)(unsigned int)CurrentEndpointsUnderLock);
  v14 = (char *)v28;
  if ( (_QWORD)v28 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v28, *((__int64 *)&v28 + 1));
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)((v29 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFE0uLL));
  }
  return v13;
}
