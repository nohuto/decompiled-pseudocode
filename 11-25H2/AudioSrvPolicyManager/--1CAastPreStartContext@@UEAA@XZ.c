/*
 * XREFs of ??1CAastPreStartContext@@UEAA@XZ @ 0x18003ECEC
 * Callers:
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x18003EE20 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180004110 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x18000DBB0 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013510 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18003BBE0 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18003C0E4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 */

void __fastcall CAastPreStartContext::~CAastPreStartContext(
        CAastPreStartContext *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  const unsigned __int16 *v9; // rax
  int v10; // eax
  const unsigned __int16 *v11; // rax
  int v12; // edx
  CApplicationManager *v13; // rcx
  int v14; // r8d
  int v15; // r9d
  int updated; // eax
  float v17; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  bool v20; // [rsp+70h] [rbp+20h] BYREF
  bool v21; // [rsp+78h] [rbp+28h] BYREF
  bool v22; // [rsp+80h] [rbp+30h] BYREF
  bool v23; // [rsp+88h] [rbp+38h] BYREF

  *(_QWORD *)this = &CAastPreStartContext::`vftable';
  v5 = (char *)this + 24;
  if ( *((_BYTE *)this + 16) )
  {
    CWindowsPolicyManager::Lock((__int64)this, &v18);
    v17 = 0.0;
    v20 = 0;
    v22 = 0;
    v21 = 0;
    v23 = 0;
    v9 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)v5, v6, v7, v8);
    v10 = CApplicationManager::RevertEndpointVolumeOverride(
            (struct _RTL_CRITICAL_SECTION *)&v22,
            v9,
            *((_DWORD *)this + 5),
            &v20,
            &v22,
            &v17,
            &v21,
            &v23);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        127LL,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v10);
    if ( v20 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)this + 5), 3u);
    if ( v22 || v21 )
    {
      v11 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(
                                        (__int64)v5,
                                        v23,
                                        v22,
                                        v21);
      updated = CApplicationManager::UpdateEndpointVolume(v13, v11, v14, v17, v15, v12);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          137LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)updated);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  }
  std::wstring::~wstring((__int64)v5, a2, a3, a4);
  *((_DWORD *)this + 3) = -1073741823;
}
