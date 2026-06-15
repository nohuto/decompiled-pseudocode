/*
 * XREFs of ??1CAastPreStartContext@@UEAA@XZ @ 0x18003C4CC
 * Callers:
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x18003C600 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x180008B40 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18000CE00 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015760 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800393B8 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800398BC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 */

void __fastcall CAastPreStartContext::~CAastPreStartContext(CAastPreStartContext *this)
{
  char *v2; // rdi
  const unsigned __int16 *v3; // rax
  int v4; // eax
  const unsigned __int16 *v5; // rax
  int v6; // edx
  CApplicationManager *v7; // rcx
  int v8; // r8d
  int v9; // r9d
  int updated; // eax
  float v11; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  bool v14; // [rsp+70h] [rbp+20h] BYREF
  bool v15; // [rsp+78h] [rbp+28h] BYREF
  bool v16; // [rsp+80h] [rbp+30h] BYREF
  bool v17; // [rsp+88h] [rbp+38h] BYREF

  *(_QWORD *)this = &CAastPreStartContext::`vftable';
  v2 = (char *)this + 24;
  if ( *((_BYTE *)this + 16) )
  {
    CWindowsPolicyManager::Lock((__int64)this, &v12);
    v11 = 0.0;
    v14 = 0;
    v16 = 0;
    v15 = 0;
    v17 = 0;
    v3 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)v2);
    v4 = CApplicationManager::RevertEndpointVolumeOverride(
           (struct _RTL_CRITICAL_SECTION *)&v16,
           v3,
           *((_DWORD *)this + 5),
           &v14,
           &v16,
           &v11,
           &v15,
           &v17);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        127LL,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v4);
    if ( v14 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)this + 5), 3);
    if ( v16 || v15 )
    {
      v5 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)v2);
      updated = CApplicationManager::UpdateEndpointVolume(v7, v5, v8, v11, v9, v6);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          137LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)updated);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  }
  std::wstring::~wstring((__int64)v2);
  *((_DWORD *)this + 3) = -1073741823;
}
