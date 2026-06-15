/*
 * XREFs of ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800469B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$count@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180016430 (--$count@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??$_Erase@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@AEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180045E04 (--$_Erase@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_traits.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180046800 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180046E84 (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 */

__int64 __fastcall CEndpointVolumeStateManager::ReleaseEndpointVolumeReference(
        CEndpointVolumeStateManager *this,
        unsigned __int16 *a2,
        bool *a3,
        bool *a4,
        float *a5,
        bool *a6,
        bool *a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  _QWORD *v8; // rbp
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  float **v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v22; // r9
  signed __int32 v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  const char *v29; // [rsp+28h] [rbp-A0h]
  _BYTE v30[32]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v31[32]; // [rsp+58h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v8 = (_QWORD *)((char *)this + 56);
  *a3 = 0;
  *a4 = 0;
  *a6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  std::wstring::wstring((__int64)v31, a2);
  v13 = std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count<void>(
          v8,
          (__int64)v31,
          v12);
  std::wstring::~wstring((__int64)v31, v14, v15, v16);
  if ( v13 )
  {
    std::wstring::wstring((__int64)v30, a2);
    v17 = (float **)std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at(v8, v30);
    std::wstring::~wstring((__int64)v30, v18, v19, v20);
    if ( (*((_DWORD *)*v17 + 9))-- == 1 )
    {
      *a5 = **v17;
      *a7 = *((_BYTE *)*v17 + 8);
      v22 = _InterlockedCompareExchange((volatile signed __int32 *)*v17 + 3, 1234, 1234) == 0;
      v23 = _InterlockedCompareExchange((volatile signed __int32 *)*v17 + 4, 1234, 1234);
      *a4 = v22;
      *a6 = v23 == 0;
      *a3 = 1;
      std::wstring::wstring((__int64)v30, a2);
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Erase<std::wstring>(
        v8,
        (__int64)v30,
        v24);
      std::wstring::~wstring((__int64)v30, v25, v26, v27);
    }
  }
  else
  {
    wil::details::in1diag3::Log_IfFailedMsg(
      retaddr,
      238LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
      (const char *)0x8000FFFFLL,
      (__int64)"Unexpected release of reference to EndpointVolumeState.",
      v29);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
