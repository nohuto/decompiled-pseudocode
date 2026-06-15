/*
 * XREFs of ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180151B38
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1801072F0 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18004F608 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180051554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180056E14 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18005700C (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@34@Z @ 0x1800659E4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18006F178 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18009C650 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A11B4 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v13; // rdx
  unsigned int v14; // esi
  char *v15; // rbx
  bool v16; // r12
  char *v17; // rsi
  __int64 i; // rbx
  const unsigned __int16 *v19; // rax
  int v20; // eax
  unsigned int v21; // r13d
  bool v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r13d
  bool v27; // [rsp+40h] [rbp-49h] BYREF
  bool v28[7]; // [rsp+41h] [rbp-48h] BYREF
  __int128 v29; // [rsp+48h] [rbp-41h] BYREF
  __int64 v30; // [rsp+58h] [rbp-31h]
  const WCHAR *v31; // [rsp+60h] [rbp-29h] BYREF
  const WCHAR *v32; // [rsp+68h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+70h] [rbp-19h] BYREF
  const unsigned __int16 *v34; // [rsp+90h] [rbp+7h]
  int v35; // [rsp+98h] [rbp+Fh]
  int v36; // [rsp+9Ch] [rbp+13h]
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
    v9 = 2258LL;
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
    v9 = 2259LL;
    goto LABEL_5;
  }
  v11 = AtmosCheck::MapSubtypeToCommonTechIndex(this, v2);
  if ( v11 == -1 )
  {
    v8 = -2147024809;
    v9 = 2264LL;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 72 * v11 + 272) )
  {
    v8 = -2147024809;
    v9 = 2265LL;
    goto LABEL_5;
  }
  v29 = 0LL;
  v30 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64)&v29);
  v14 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    v16 = 0;
    v17 = (char *)v29;
    for ( i = v29; i != *((_QWORD *)&v29 + 1); i += 32LL )
    {
      v27 = 0;
      v19 = (const unsigned __int16 *)std::wstring::c_str(i, v13);
      v20 = AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(this, v19, v2, &v27);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E3,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v20);
        if ( v17 )
        {
          std::_Destroy_range<std::allocator<std::wstring>>((__int64)v17, *((__int64 *)&v29 + 1));
          std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)((v30 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFE0uLL));
        }
        return v21;
      }
      v22 = v27;
      if ( (unsigned int)CallbackContext > 5 )
      {
        v31 = (const WCHAR *)std::wstring::c_str(i, v13);
        v28[0] = v22;
        v32 = v2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
          v23,
          byte_1801B3296,
          v24,
          v25,
          &v32,
          (__int64)v28,
          &v31,
          (__int64)&v27);
      }
      v16 = v16 || v22;
    }
    if ( v16 )
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
            v26 = 2 * v4 + 2;
          }
          else
          {
            v2 = &LocaleName;
            v26 = 2;
          }
          v34 = v2;
          v35 = v26;
          v36 = 0;
          tlgWriteTransfer_EventWriteTransfer((__int64)&CallbackContext, byte_1801B2AA7, 0LL, 0LL, 3u, &v33);
        }
        (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
      }
    }
    if ( v17 )
    {
      std::_Destroy_range<std::allocator<std::wstring>>((__int64)v17, *((__int64 *)&v29 + 1));
      std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)((v30 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8DD,
    (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)(unsigned int)CurrentEndpointsUnderLock);
  v15 = (char *)v29;
  if ( (_QWORD)v29 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v29, *((__int64 *)&v29 + 1));
    std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)((v30 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFE0uLL));
  }
  return v14;
}
