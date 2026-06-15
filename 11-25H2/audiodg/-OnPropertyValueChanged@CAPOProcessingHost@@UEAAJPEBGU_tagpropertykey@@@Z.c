/*
 * XREFs of ?OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x140017EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x140018224 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x140018308 (--$find@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018588 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400185CC (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall CAPOProcessingHost::OnPropertyValueChanged(
        CAPOProcessingHost *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v7; // r8
  CAPOEndpointNotificationsHandler *v9; // rcx
  DWORD pid; // eax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v15[32]; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v14 = v3;
  v7 = -1LL;
  memset(v15, 0, sizeof(v15));
  do
    ++v7;
  while ( a2[v7] );
  std::wstring::_Construct<1,unsigned short const *>(v15, a2);
  std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::find<void>(
    (char *)this + 72,
    &v13,
    v15);
  if ( *(_QWORD *)&v15[24] > 7uLL )
    std::_Deallocate<16,0>(*(_QWORD *)v15, 2LL * *(_QWORD *)&v15[24] + 2);
  if ( v13 == *((_QWORD *)this + 10)
    || (v9 = *(CAPOEndpointNotificationsHandler **)(v13 + 48),
        pid = a3->pid,
        *(GUID *)v15 = a3->fmtid,
        *(_DWORD *)&v15[16] = pid,
        v11 = CAPOEndpointNotificationsHandler::OnPropertyValueChanged(v9, (struct _tagpropertykey *)v15),
        v12 = v11,
        v11 >= 0) )
  {
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C3,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v11);
    CSAutoLock<1>::~CSAutoLock<1>(&v14);
    return v12;
  }
}
