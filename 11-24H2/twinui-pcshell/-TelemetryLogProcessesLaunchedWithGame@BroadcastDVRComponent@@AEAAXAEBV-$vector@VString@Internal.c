/*
 * XREFs of ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x18018DEA4
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800A6FF0 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180164DB8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x18018E01C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::TelemetryLogProcessesLaunchedWithGame(__int64 a1, HSTRING **a2)
{
  int v2; // edi
  HSTRING *v3; // rbx
  HSTRING *v4; // rsi
  WCHAR *StringRawBuffer; // rdx
  char **v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  const WCHAR *p_Src; // rax
  const WCHAR *v11; // [rsp+30h] [rbp-78h] BYREF
  __int128 Src; // [rsp+38h] [rbp-70h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  _OWORD v14[2]; // [rsp+58h] [rbp-50h] BYREF
  void *v15[4]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = 0;
  LODWORD(v11) = 0;
  Src = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(Src) = 0;
  v3 = *a2;
  v4 = a2[1];
  try
  {
    while ( v3 != v4 )
    {
      StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(*v3, 0LL);
      v6 = std::wstring::wstring((char **)v15, StringRawBuffer);
      v7 = std::wstring::append(v6, L";", 1uLL);
      v14[0] = *(_OWORD *)v7;
      v14[1] = *((_OWORD *)v7 + 1);
      v7[2] = 0LL;
      v7[3] = 7LL;
      *(_WORD *)v7 = 0;
      v2 |= 1u;
      std::wstring::append(&Src, v14);
      std::wstring::_Tidy_deallocate((void **)v14);
      std::wstring::_Tidy_deallocate(v15);
      ++v3;
    }
    if ( (unsigned int)dword_1808C4060 > 5 && tlgKeywordOn((__int64)&dword_1808C4060, 0x400000000000LL) )
    {
      p_Src = (const WCHAR *)&Src;
      if ( si128.m128i_i64[1] > 7uLL )
        p_Src = (const WCHAR *)Src;
      v11 = p_Src;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v8,
        byte_1807E4D3A,
        0LL,
        v9,
        &v11);
    }
    std::wstring::_Tidy_deallocate((void **)&Src);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D4,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x8007000ELL);
  }
}
