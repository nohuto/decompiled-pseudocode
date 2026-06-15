/*
 * XREFs of ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x1800FCA14
 * Callers:
 *     ?ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z @ 0x1800FC77C (-ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UISubmixProxy@@@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUISubmixProxy@@@Z @ 0x18008503C (--$copy_to@UISubmixProxy@@@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     ??1?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x180087958 (--1-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1800C89FC (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GU.c)
 *     _lambda_7bd01830768c98478d4966415188fc2a_::operator() @ 0x1800FC550 (_lambda_7bd01830768c98478d4966415188fc2a_--operator().c)
 *     ?GetMulticastProvider@CMulticastSessionManager@@AEAAJAEBU_GUID@@PEAPEAUIMulticastProvider@@@Z @ 0x1800FCF50 (-GetMulticastProvider@CMulticastSessionManager@@AEAAJAEBU_GUID@@PEAPEAUIMulticastProvider@@@Z.c)
 *     ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C770 (-GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CMulticastSessionManager::GetCompatibleMulticastProvider(
        CMulticastSessionManager *this,
        __int64 *a2,
        struct IMulticastProvider **a3)
{
  __int64 *v4; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  const struct _GUID *v9; // r14
  __int64 v10; // rcx
  int PropertyStoreProperty; // eax
  unsigned int v12; // edi
  __int64 i; // rdi
  HRESULT v14; // eax
  unsigned int v15; // esi
  struct _GUID *v16; // r9
  bool v17; // zf
  struct _GUID *j; // rdx
  struct _GUID *v19; // rdx
  int MulticastProvider; // eax
  unsigned int v21; // ebx
  int v22[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-98h]
  int *v24; // [rsp+38h] [rbp-90h] BYREF
  __m128i v25; // [rsp+40h] [rbp-88h] BYREF
  __int64 v26; // [rsp+50h] [rbp-78h]
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-70h] BYREF
  __int64 *v28; // [rsp+70h] [rbp-58h]
  GUID pclsid; // [rsp+78h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v4 = a2;
  v28 = a2;
  if ( *((_BYTE *)this + 32) )
    return wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::copy_to<ISubmixProxy>(
             (__int64 *)(*((_QWORD *)this + 3) + 8LL),
             a3);
  v25 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v8 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v9 = 0LL;
  while ( 1 )
  {
    v10 = *v4;
    if ( (unsigned int)v7 >= (unsigned __int64)((v4[1] - *v4) >> 3) )
      break;
    memset(&pvar, 0, sizeof(pvar));
    PropertyStoreProperty = CEndpointCharacteristics::GetPropertyStoreProperty(
                              *(CEndpointCharacteristics **)(v10 + 8 * v7),
                              &PKEY_Multicast_CompatibleProviders,
                              &pvar);
    v12 = PropertyStoreProperty;
    if ( PropertyStoreProperty < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)(unsigned int)PropertyStoreProperty);
      PropVariantClear((PROPVARIANT *)&pvar);
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
      return v12;
    }
    if ( pvar.vt == 4127 )
    {
      *(_OWORD *)v22 = 0LL;
      v23 = 0LL;
      for ( i = 0LL; (unsigned int)i < pvar.lVal; i = (unsigned int)(i + 1) )
      {
        pclsid = 0LL;
        v14 = CLSIDFromString(*(LPCOLESTR *)&pvar.bstrblobVal.pData[8 * i], &pclsid);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1AB,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
            (const char *)(unsigned int)v14);
          std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)v22);
          PropVariantClear((PROPVARIANT *)&pvar);
          std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
          return v15;
        }
        if ( *(_QWORD *)&v22[2] == v23 )
        {
          std::vector<_GUID>::_Emplace_reallocate<_GUID const &>((__int64)v22, *(char **)&v22[2], (__int64)&pclsid);
        }
        else
        {
          **(_OWORD **)&v22[2] = pclsid;
          *(_QWORD *)&v22[2] += 16LL;
        }
      }
      if ( (_DWORD)v7 )
      {
        *(_QWORD *)&pclsid.Data1 = v22;
        v24 = v22;
        v16 = (struct _GUID *)v9;
        if ( v9 != (const struct _GUID *)v8 )
        {
          do
          {
            if ( lambda_7bd01830768c98478d4966415188fc2a_::operator()((_QWORD **)&v24, v16) )
              break;
            ++v16;
          }
          while ( v16 != (struct _GUID *)v8 );
        }
        v17 = v16 == (struct _GUID *)v8;
        if ( v16 != (struct _GUID *)v8 )
        {
          for ( j = v16 + 1; j != (struct _GUID *)v8; j = v19 + 1 )
          {
            if ( !lambda_7bd01830768c98478d4966415188fc2a_::operator()(&pclsid, j) )
              *v16++ = *v19;
          }
          v17 = v16 == (struct _GUID *)v8;
        }
        if ( !v17 )
          v8 = (__int64)v16;
        v25.m128i_i64[1] = v8;
      }
      else
      {
        std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
        v25 = *(__m128i *)v22;
        v26 = v23;
        *(_OWORD *)v22 = 0LL;
        v23 = 0LL;
        v8 = _mm_srli_si128(v25, 8).m128i_u64[0];
        v9 = (const struct _GUID *)v25.m128i_i64[0];
      }
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)v22);
    }
    if ( v9 == (const struct _GUID *)v8 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C3,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)0x80070490LL);
      PropVariantClear((PROPVARIANT *)&pvar);
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
      return 2147943568LL;
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    v7 = (unsigned int)(v7 + 1);
    v4 = v28;
  }
  if ( v8 - (_QWORD)v9 == 16 )
  {
    MulticastProvider = CMulticastSessionManager::GetMulticastProvider(this, v9, a3);
    v21 = MulticastProvider;
    if ( MulticastProvider >= 0 )
    {
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CD,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)(unsigned int)MulticastProvider);
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
      return v21;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)0x80004001LL);
    std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
    return 2147500033LL;
  }
}
