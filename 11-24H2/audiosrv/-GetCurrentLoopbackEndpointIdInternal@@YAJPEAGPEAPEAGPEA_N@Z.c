/*
 * XREFs of ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z @ 0x1800F661C
 * Callers:
 *     ?GetCurrentLoopbackEndpointId@CSharedStreamGroupProxy@@IEAAJPEAPEAGPEA_N@Z @ 0x1800F65D8 (-GetCurrentLoopbackEndpointId@CSharedStreamGroupProxy@@IEAAJPEAPEAGPEA_N@Z.c)
 *     ?IsLooseMatch@@YA_NQEAG0@Z @ 0x1800F7910 (-IsLooseMatch@@YA_NQEAG0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180029154 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004E1FC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800F36C8 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ?GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAGPEA_N@Z @ 0x1800F6200 (-GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002.c)
 *     ?IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z @ 0x1800F7A10 (-IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetCurrentLoopbackEndpointIdInternal(unsigned __int16 *a1, unsigned __int16 **a2, bool *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // ebx
  int ActiveRenderEndpointWithFallbackToDefault; // ebx
  __int64 v13; // rdx
  _BYTE v15[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0;
  if ( IsValidAECLoopbackSelectionMode(a1) )
  {
    std::wstring::wstring((__int64)v16, (__int64)a1);
    v9 = *(_DWORD *)(*(_QWORD *)std::map<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE>::_Try_emplace<std::wstring,>(
                                  v8,
                                  (__int64)v15,
                                  (__int64)v16)
                   + 64LL);
    std::wstring::_Tidy_deallocate((__int64)v16, v10);
    v11 = v9 - 2;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        ActiveRenderEndpointWithFallbackToDefault = GetActiveRenderEndpointWithFallbackToDefault(0, a2, a3);
        if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
        {
          v13 = 1731LL;
LABEL_8:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)ActiveRenderEndpointWithFallbackToDefault);
          return (unsigned int)ActiveRenderEndpointWithFallbackToDefault;
        }
      }
    }
    else
    {
      ActiveRenderEndpointWithFallbackToDefault = GetActiveRenderEndpointWithFallbackToDefault(2u, a2, a3);
      if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
      {
        v13 = 1726LL;
        goto LABEL_8;
      }
    }
  }
  else if ( a1 )
  {
    ActiveRenderEndpointWithFallbackToDefault = _AllocString<CTCoAllocPolicy>(v7, v6, a1, a2);
    if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
    {
      v13 = 1741LL;
      goto LABEL_8;
    }
    *a3 = 1;
  }
  return 0LL;
}
