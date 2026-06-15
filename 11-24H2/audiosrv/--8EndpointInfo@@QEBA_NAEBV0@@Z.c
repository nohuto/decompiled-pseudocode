/*
 * XREFs of ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800EAE84
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800ED3A8 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800EDCA8 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EF23C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EF364 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x180160138 (--8StreamResourceConsumer@@QEAA_NAEBV0@@Z.c)
 *     ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x1801625A0 (-ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?IdInVariant@EndpointInfo@@QEBA_NPEBGAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x1800EDA90 (-IdInVariant@EndpointInfo@@QEBA_NPEBGAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVar.c)
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x1800EF84C (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 */

char __fastcall EndpointInfo::operator==(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  const unsigned __int16 *v5; // rax
  __int64 v6; // rdx
  const unsigned __int16 *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 **v14; // rsi
  __int64 **v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdx
  const unsigned __int16 *v19; // rax
  __int64 v20; // r9
  const unsigned __int16 *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 **v27; // rsi
  __int64 **v28; // rbp
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rdx
  const unsigned __int16 *v32; // rax
  __int64 v33; // r9
  const unsigned __int16 *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx

  if ( *(_DWORD *)(a1 + 96) == *(_DWORD *)(a2 + 96) )
  {
    std::wstring::c_str(a2 + 64, a2);
    v5 = (const unsigned __int16 *)std::wstring::c_str(a1 + 64, v4);
    if ( SimpleWildcardStringCompare(v5, *(_QWORD *)(a1 + 80), v7, *(_QWORD *)(v6 + 80)) )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( *(_QWORD *)(a2 + 16) )
        {
          v8 = std::wstring::c_str(a2, a2);
          v9 = std::wstring::c_str(a1, v8);
          if ( !(unsigned int)_o__wcsicmp(v9, v10) )
            return 1;
        }
      }
      if ( *(_QWORD *)(a1 + 48) )
      {
        if ( *(_QWORD *)(a2 + 48) )
        {
          v11 = std::wstring::c_str(a2 + 32, a2);
          v12 = std::wstring::c_str(a1 + 32, v11);
          if ( !(unsigned int)_o__wcsicmp(v12, v13) )
            return 1;
        }
      }
    }
  }
  v14 = *(__int64 ***)(a2 + 104);
  v15 = *(__int64 ***)(a2 + 112);
  while ( v14 != v15 )
  {
    v16 = **v14;
    v17 = (*v14)[1];
    while ( v16 != v17 )
    {
      if ( *(_DWORD *)(a1 + 96) == *(_DWORD *)(*(_QWORD *)v16 + 68LL) )
      {
        std::wstring::c_str(*(_QWORD *)v16 + 32LL, a2);
        v19 = (const unsigned __int16 *)std::wstring::c_str(a1 + 64, v18);
        if ( SimpleWildcardStringCompare(v19, *(_QWORD *)(a1 + 80), v21, *(_QWORD *)(v20 + 48)) )
        {
          v22 = std::wstring::c_str(a1, a2);
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v23, v22) )
            return 1;
          v25 = std::wstring::c_str(a1 + 32, v24);
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v26, v25) )
            return 1;
        }
      }
      v16 += 8LL;
    }
    ++v14;
  }
  v27 = *(__int64 ***)(a1 + 104);
  v28 = *(__int64 ***)(a1 + 112);
  while ( v27 != v28 )
  {
    v29 = **v27;
    v30 = (*v27)[1];
    while ( v29 != v30 )
    {
      if ( *(_DWORD *)(a2 + 96) == *(_DWORD *)(*(_QWORD *)v29 + 68LL) )
      {
        std::wstring::c_str(*(_QWORD *)v29 + 32LL, a2);
        v32 = (const unsigned __int16 *)std::wstring::c_str(a2 + 64, v31);
        if ( SimpleWildcardStringCompare(v32, *(_QWORD *)(a2 + 80), v34, *(_QWORD *)(v33 + 48)) )
        {
          v35 = std::wstring::c_str(a2, a2);
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v36, v35) )
            return 1;
          v38 = std::wstring::c_str(a2 + 32, v37);
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v39, v38) )
            return 1;
        }
      }
      v29 += 8LL;
    }
    ++v27;
  }
  return 0;
}
