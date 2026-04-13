/*
 * XREFs of ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180085184
 * Callers:
 *     _lambda_06e77e5296b311cd39e114a3c1771c51_::operator() @ 0x180083BA8 (_lambda_06e77e5296b311cd39e114a3c1771c51_--operator().c)
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086050 (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004780 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004AB48 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004C3D4 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x1800801F4 (-DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 *     ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x180081C68 (-ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentTri.c)
 *     ?_Destroy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@0@Z @ 0x180087BE8 (-_Destroy@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator.c)
 *     ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x1800B3138 (-SplitString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$vector@V-$basic_string@_WU-$char.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char *v4; // rbx
  char *v5; // r14
  unsigned int v6; // r8d
  const WCHAR *v7; // rax
  HSTRING_HEADER *v8; // rax
  const WCHAR *v9; // rcx
  int v10; // esi
  const WCHAR *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  HSTRING string; // [rsp+30h] [rbp-79h] BYREF
  int v18; // [rsp+38h] [rbp-71h] BYREF
  const WCHAR *v19; // [rsp+40h] [rbp-69h] BYREF
  __int128 v20; // [rsp+48h] [rbp-61h] BYREF
  __int64 v21; // [rsp+58h] [rbp-51h]
  HSTRING v22; // [rsp+60h] [rbp-49h] BYREF
  char *v23; // [rsp+68h] [rbp-41h] BYREF
  char *v24; // [rsp+70h] [rbp-39h]
  __int64 v25; // [rsp+80h] [rbp-29h]
  _QWORD v26[4]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v27[4]; // [rsp+A8h] [rbp-1h] BYREF
  HSTRING_HEADER v28; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+E0h] [rbp+37h]

  v25 = a2;
  std::wstring::wstring((__int64)v27);
  CreativeFramework::CommonHelper::StringUtils::SplitString(&v23, v27, L"|");
  std::wstring::_Tidy(v27, 1, 0LL);
  v4 = v23;
  v5 = v24;
  while ( v4 != v5 )
  {
    std::wstring::wstring((__int64)v26, (__int64)v4);
    CreativeFramework::CommonHelper::StringUtils::SplitString(&v20, v26, L";");
    v7 = (const WCHAR *)v20;
    if ( *(_QWORD *)(v20 + 24) >= 8uLL )
      v7 = *(const WCHAR **)v20;
    v19 = v7;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, &v19, v6);
    Windows::Services::TargetedContent::Internal::DecodeBase64String(&string, (__int64)v8[1].Reserved.Reserved1);
    v29 = 0LL;
    v9 = (const WCHAR *)(v20 + 32);
    if ( *(_QWORD *)(v20 + 56) >= 8uLL )
      v9 = *(const WCHAR **)v9;
    v10 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(v9);
    v11 = (const WCHAR *)(v20 + 64);
    if ( *(_QWORD *)(v20 + 88) >= 8uLL )
      v11 = *(const WCHAR **)v11;
    v12 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(v11);
    v22 = string;
    v18 = v12;
    LODWORD(v19) = v10;
    v13 = *(_QWORD *)(a2 + 24);
    if ( !v13 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, HSTRING *, const WCHAR **, int *))(*(_QWORD *)v13 + 16LL))(
            v13,
            &v22,
            &v19,
            &v18) )
    {
      WindowsDeleteString(string);
      string = 0LL;
      if ( (_QWORD)v20 )
      {
        std::vector<std::wstring>::_Destroy(v15, v20, *((_QWORD *)&v20 + 1));
        operator delete((void *)v20);
        v20 = 0LL;
        v21 = 0LL;
      }
      std::wstring::_Tidy(v26, 1, 0LL);
      break;
    }
    WindowsDeleteString(string);
    string = 0LL;
    if ( (_QWORD)v20 )
    {
      std::vector<std::wstring>::_Destroy(v14, v20, *((_QWORD *)&v20 + 1));
      operator delete((void *)v20);
    }
    std::wstring::_Tidy(v26, 1, 0LL);
    v4 += 32;
  }
  if ( v23 )
  {
    std::vector<std::wstring>::_Destroy(v3, v23, v24);
    operator delete(v23);
  }
  return std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(a2);
}
