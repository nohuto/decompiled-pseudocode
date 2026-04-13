/*
 * XREFs of ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800A6D60
 * Callers:
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009E0FC (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004AD18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004AD48 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18005B868 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005BF0C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18005DE84 (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800673B8 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x180088240 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ?reserve@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x1800974C8 (-reserve@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K@Z.c)
 *     ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800A5CDC (-Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$basic_string@_WU-$char_trai.c)
 *     ?ReplaceAll@Details@NotificationManager@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A7168 (-ReplaceAll@Details@NotificationManager@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rcx
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *i; // rax
  _QWORD v15[4]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16[4]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v17[4]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp+7h] BYREF

  v4 = 0;
  std::wstring::wstring((__int64)v16, a1);
  v6 = *(_QWORD **)(a1 + 32);
  v7 = (_QWORD *)*v6;
  while ( v7 != v6 )
  {
    v15[3] = 7LL;
    v15[2] = 0LL;
    LOWORD(v15[0]) = 0;
    v8 = std::char_traits<wchar_t>::length(L"{");
    std::wstring::reserve(v15, v7[6] + v8);
    std::wstring::append(v15, L"{");
    std::wstring::append(v15, v7 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v9 = std::wstring::append(v15, L"}");
    std::wstring::wstring((__int64)v17, (__int64)v9);
    v4 = v4 & 0xFFFFFFF9 | 4;
    std::wstring::_Tidy(v15, 1, 0LL);
    v10 = v17;
    if ( v17[3] >= 8uLL )
      v10 = (_QWORD *)v17[0];
    v11 = v16;
    if ( v16[3] >= 8uLL )
      v11 = (__int64 *)v16[0];
    v12 = (_QWORD *)CreativeFramework::NotificationManager::Details::ReplaceAll(v18, v11, v10);
    std::wstring::operator=(v16, v12);
    std::wstring::_Tidy(v18, 1, 0LL);
    std::wstring::_Tidy(v17, 1, 0LL);
    if ( !*((_BYTE *)v7 + 25) )
    {
      v5 = v7[2];
      if ( *(_BYTE *)(v5 + 25) )
      {
        for ( i = (_QWORD *)v7[1]; !*((_BYTE *)i + 25) && v7 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v7 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v5);
      }
      v7 = i;
    }
  }
  CreativeFramework::NotificationManager::ToastHelpers::Encode(v5, a2, v16);
  std::wstring::_Tidy(v16, 1, 0LL);
  return a2;
}
