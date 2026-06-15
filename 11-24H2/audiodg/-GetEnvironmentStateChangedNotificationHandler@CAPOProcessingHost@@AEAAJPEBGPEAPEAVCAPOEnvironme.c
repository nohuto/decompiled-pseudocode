/*
 * XREFs of ?GetEnvironmentStateChangedNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@@Z @ 0x14004CF50
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x1400150B0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 *     ?AddEnvironmentStateChangedNotificationClient@CAPOProcessingHost@@AEAAJPEBGPEAVCAPOProcessingHostObject@@@Z @ 0x1400580CC (-AddEnvironmentStateChangedNotificationClient@CAPOProcessingHost@@AEAAJPEBGPEAVCAPOProcessingHos.c)
 * Callees:
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x140017040 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x140017F24 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1400180CC (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCAPOEnvironmentStateChangedNotificationsHandler@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@AEAPEBG@Z @ 0x140060EF0 (--$MakeAndInitialize@VCAPOEnvironmentStateChangedNotificationsHandler@@V1@AEAPEBG@Details@WRL@Mi.c)
 *     ??$emplace@AEAPEBGAEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEnvironmentStateChangedNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEnvironmentStateChangedNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEnvironmentStateChangedNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEBGAEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@@Z @ 0x140061118 (--$emplace@AEAPEBGAEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@@-$_Hash@V-$_Umap_trai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHost::GetEnvironmentStateChangedNotificationHandler(
        CAPOProcessingHost *this,
        const unsigned __int16 *a2,
        struct CAPOEnvironmentStateChangedNotificationsHandler **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  const unsigned __int8 *v9; // rdx
  __int64 appended; // rax
  const char *v11; // r9
  unsigned __int64 v12; // r11
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // r10
  int v16; // edi
  __int64 result; // rax
  struct CAPOEnvironmentStateChangedNotificationsHandler *v18; // rcx
  const unsigned __int16 *v19; // [rsp+20h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int8 *v21[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v19 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 416);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  v20 = v6;
  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  try
  {
    std::wstring::_Construct<1,unsigned short const *>((char **)v21, a2, v7);
    v9 = (const unsigned __int8 *)v21;
    if ( v23 > 7 )
      v9 = v21[0];
    appended = std::_Fnv1a_append_bytes(v8, v9, 2 * v22);
    v13 = 2 * (appended & *((_QWORD *)this + 63));
    v14 = *(_QWORD **)(*((_QWORD *)this + 60) + 16 * (appended & *((_QWORD *)this + 63)) + 8);
    if ( v14 == *((_QWORD **)this + 58) )
    {
LABEL_9:
      v14 = 0LL;
    }
    else
    {
      while ( std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                v13,
                (char *)v21,
                v14 + 2) )
      {
        if ( v14 == v15 )
          goto LABEL_9;
        v14 = (_QWORD *)v14[1];
      }
    }
    if ( !v14 )
      v14 = (_QWORD *)*((_QWORD *)this + 58);
    if ( v12 > 7 )
      std::_Deallocate<16,0>(v21[0], 2 * v12 + 2);
    if ( v14 == *((_QWORD **)this + 58) )
    {
      v16 = Microsoft::WRL::Details::MakeAndInitialize<CAPOEnvironmentStateChangedNotificationsHandler,CAPOEnvironmentStateChangedNotificationsHandler,unsigned short const * &>(
              a3,
              &v19);
      if ( v16 < 0 )
      {
        CSAutoLock<1>::~CSAutoLock<1>(&v20);
        return (unsigned int)v16;
      }
      std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEnvironmentStateChangedNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEnvironmentStateChangedNotificationsHandler,wil::err_returncode_policy>>>,0>>::emplace<unsigned short const * &,CAPOEnvironmentStateChangedNotificationsHandler * &>(
        (char *)this + 456,
        v21,
        &v19,
        a3);
    }
    else
    {
      v18 = (struct CAPOEnvironmentStateChangedNotificationsHandler *)v14[6];
      if ( v18 )
      {
        *a3 = v18;
        (*(void (__fastcall **)(struct CAPOEnvironmentStateChangedNotificationsHandler *))(*(_QWORD *)v18 + 8LL))(v18);
      }
      else
      {
        *a3 = 0LL;
      }
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x115,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                           v11);
  }
  return result;
}
