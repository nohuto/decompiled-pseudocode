/*
 * XREFs of _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18004E6AC
 * Callers:
 *     ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180053700 (-IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEve.c)
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180053A70 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180057930 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004AD18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004AD48 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     _anonymous_namespace_::SplitString @ 0x180057CE8 (_anonymous_namespace_--SplitString.c)
 *     ?_Destroy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@0@Z @ 0x180059C60 (-_Destroy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall anonymous_namespace_::DecodeBatchIdFromCreativeId(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bl
  void *v9; // [rsp+28h] [rbp-31h] BYREF
  void *v10; // [rsp+30h] [rbp-29h]
  __int64 v11; // [rsp+40h] [rbp-19h]
  _BYTE v12[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE v14[32]; // [rsp+88h] [rbp+2Fh] BYREF

  v11 = a1;
  std::wstring::wstring((__int64)v12);
  anonymous_namespace_::SplitString(&v9, v12, L"`");
  LOBYTE(v2) = 1;
  std::wstring::_Tidy(v12, v2, 0LL);
  if ( v9 == v10 )
  {
    v3 = std::wstring::wstring((__int64)v13);
    v4 = 2;
  }
  else
  {
    v3 = std::wstring::wstring((__int64)v14, (__int64)v9);
    v4 = 1;
  }
  std::wstring::wstring(a1, v3);
  v7 = v4 | 4;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    LOBYTE(v5) = 1;
    std::wstring::_Tidy(v13, v5, 0LL);
  }
  if ( (v7 & 1) != 0 )
  {
    LOBYTE(v5) = 1;
    std::wstring::_Tidy(v14, v5, 0LL);
  }
  if ( v9 )
  {
    std::vector<std::wstring>::_Destroy(v6, v9, v10);
    operator delete(v9);
  }
  return a1;
}
