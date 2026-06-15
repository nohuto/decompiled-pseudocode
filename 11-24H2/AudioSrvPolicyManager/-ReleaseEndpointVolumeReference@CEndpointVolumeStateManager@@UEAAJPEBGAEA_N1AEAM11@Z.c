/*
 * XREFs of ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180044190
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009830 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015760 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$count@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180016650 (--$count@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ??$_Erase@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@AEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800435E4 (--$_Erase@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_traits.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180043FE0 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180044664 (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 */

__int64 __fastcall CEndpointVolumeStateManager::ReleaseEndpointVolumeReference(
        CEndpointVolumeStateManager *this,
        const unsigned __int16 *a2,
        bool *a3,
        bool *a4,
        float *a5,
        bool *a6,
        bool *a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  _QWORD *v8; // rbp
  __int64 v12; // rbx
  float **v13; // rbx
  bool v15; // r9
  signed __int32 v16; // eax
  const char *v18; // [rsp+28h] [rbp-A0h]
  _BYTE v19[32]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v20[32]; // [rsp+58h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v8 = (_QWORD *)((char *)this + 56);
  *a3 = 0;
  *a4 = 0;
  *a6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  std::wstring::wstring((__int64)v20, (__int64)a2);
  v12 = std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count<void>(
          v8,
          (__int64)v20);
  std::wstring::~wstring((__int64)v20);
  if ( v12 )
  {
    std::wstring::wstring((__int64)v19, (__int64)a2);
    v13 = (float **)std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at(v8, v19);
    std::wstring::~wstring((__int64)v19);
    if ( (*((_DWORD *)*v13 + 9))-- == 1 )
    {
      *a5 = **v13;
      *a7 = *((_BYTE *)*v13 + 8);
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)*v13 + 3, 1234, 1234) == 0;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)*v13 + 4, 1234, 1234);
      *a4 = v15;
      *a6 = v16 == 0;
      *a3 = 1;
      std::wstring::wstring((__int64)v19, (__int64)a2);
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Erase<std::wstring>(
        v8,
        (__int64)v19);
      std::wstring::~wstring((__int64)v19);
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
      v18);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
