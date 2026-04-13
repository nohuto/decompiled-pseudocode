/*
 * XREFs of ??0LaunchUriService@Actions@CreativeFramework@@QEAA@QEB_WPEB_W1AEBV?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@0_N@Z @ 0x1800984F4
 * Callers:
 *     ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18009AF90 (-MakeLaunchUriService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Creat.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ??0?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Z @ 0x180066F10 (--0-$com_ptr_t@U-$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::LaunchUriService::LaunchUriService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        LPCWCH lpString2,
        char a7)
{
  __int64 v8; // rax
  wchar_t **i; // rbx
  int v10; // eax

  *(_QWORD *)a1 = &CreativeFramework::Actions::LaunchUriService::`vftable';
  std::wstring::wstring(a1 + 8);
  std::wstring::wstring(a1 + 40);
  std::wstring::wstring(a1 + 72);
  wil::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>(
    (_QWORD *)(a1 + 104),
    *a5);
  *(_BYTE *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 113) = a7;
  if ( *(_QWORD *)(a1 + 56) )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( lpString2[v8] );
    if ( v8 )
    {
      for ( i = &off_1800DD210; i != off_1800DD2B0; i += 2 )
      {
        if ( CompareStringOrdinal(*i, -1, lpString2, -1, 1) == 2 )
        {
          v10 = *((_DWORD *)i + 2);
          goto LABEL_11;
        }
      }
      v10 = 1;
LABEL_11:
      *(_DWORD *)(a1 + 116) = v10;
      *(_BYTE *)(a1 + 112) = 1;
    }
  }
  return a1;
}
