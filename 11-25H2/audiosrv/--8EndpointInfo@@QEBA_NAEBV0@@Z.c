/*
 * XREFs of ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800E6A38
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800E77D8 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800E86D0 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800E8FD0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EA384 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EA4AC (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x180157388 (--8StreamResourceConsumer@@QEAA_NAEBV0@@Z.c)
 *     ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x1801597F0 (-ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?IdInVariant@EndpointInfo@@QEBA_NPEBGAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x1800E8DB8 (-IdInVariant@EndpointInfo@@QEBA_NPEBGAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVar.c)
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x1800EA994 (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 */

char __fastcall EndpointInfo::operator==(__int64 a1, __int64 a2)
{
  const unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  const unsigned __int16 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 **v9; // rsi
  __int64 **v10; // rbp
  __int64 v11; // r14
  __int64 v12; // r15
  const unsigned __int16 *v13; // rax
  __int64 v14; // r9
  const unsigned __int16 *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 **v20; // rsi
  __int64 **v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // r14
  const unsigned __int16 *v24; // rax
  __int64 v25; // r9
  const unsigned __int16 *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx

  if ( *(_DWORD *)(a1 + 96) == *(_DWORD *)(a2 + 96) )
  {
    std::wstring::c_str(a2 + 64);
    v4 = (const unsigned __int16 *)std::wstring::c_str(a1 + 64);
    if ( SimpleWildcardStringCompare(v4, *(_QWORD *)(a1 + 80), v6, *(_QWORD *)(v5 + 80)) )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( *(_QWORD *)(a2 + 16) )
        {
          std::wstring::c_str(a2);
          v7 = std::wstring::c_str(a1);
          if ( !(unsigned int)_o__wcsicmp(v7) )
            return 1;
        }
      }
      if ( *(_QWORD *)(a1 + 48) )
      {
        if ( *(_QWORD *)(a2 + 48) )
        {
          std::wstring::c_str(a2 + 32);
          v8 = std::wstring::c_str(a1 + 32);
          if ( !(unsigned int)_o__wcsicmp(v8) )
            return 1;
        }
      }
    }
  }
  v9 = *(__int64 ***)(a2 + 104);
  v10 = *(__int64 ***)(a2 + 112);
  while ( v9 != v10 )
  {
    v11 = **v9;
    v12 = (*v9)[1];
    while ( v11 != v12 )
    {
      if ( *(_DWORD *)(a1 + 96) == *(_DWORD *)(*(_QWORD *)v11 + 68LL) )
      {
        std::wstring::c_str(*(_QWORD *)v11 + 32LL);
        v13 = (const unsigned __int16 *)std::wstring::c_str(a1 + 64);
        if ( SimpleWildcardStringCompare(v13, *(_QWORD *)(a1 + 80), v15, *(_QWORD *)(v14 + 48)) )
        {
          v16 = std::wstring::c_str(a1);
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v17, v16) )
            return 1;
          v18 = std::wstring::c_str(a1 + 32);
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v19, v18) )
            return 1;
        }
      }
      v11 += 8LL;
    }
    ++v9;
  }
  v20 = *(__int64 ***)(a1 + 104);
  v21 = *(__int64 ***)(a1 + 112);
  while ( v20 != v21 )
  {
    v22 = **v20;
    v23 = (*v20)[1];
    while ( v22 != v23 )
    {
      if ( *(_DWORD *)(a2 + 96) == *(_DWORD *)(*(_QWORD *)v22 + 68LL) )
      {
        std::wstring::c_str(*(_QWORD *)v22 + 32LL);
        v24 = (const unsigned __int16 *)std::wstring::c_str(a2 + 64);
        if ( SimpleWildcardStringCompare(v24, *(_QWORD *)(a2 + 80), v26, *(_QWORD *)(v25 + 48)) )
        {
          v27 = std::wstring::c_str(a2);
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v28, v27) )
            return 1;
          v29 = std::wstring::c_str(a2 + 32);
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v30, v29) )
            return 1;
        }
      }
      v22 += 8LL;
    }
    ++v20;
  }
  return 0;
}
