/*
 * XREFs of ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1800369FC
 * Callers:
 *     ?NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z @ 0x180075FD4 (-NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x1800369B4 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18006452C (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800647B0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x18007A598 (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  __int64 v5; // rsi
  char *v8; // rcx
  char *v9; // rax
  char *v10; // rdx
  HotkeyRegistrationForwarder *HotkeyRegistrationForwarder; // rax
  int v12; // eax
  char *v14; // [rsp+20h] [rbp-30h] BYREF
  char *v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h]
  _DWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF
  __int16 v18; // [rsp+44h] [rbp-Ch]
  char v19; // [rsp+46h] [rbp-Ah]
  char v20; // [rsp+47h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v4 = a4;
  v5 = a3;
  if ( IsEdition(8778LL) )
  {
    PenEventsDispatcherPrincipal::GetShellClients(a1, &v14);
    v8 = v14;
    v9 = v14;
    v10 = v15;
    while ( v9 != v15 )
    {
      if ( *(_QWORD *)v9 == a2 )
      {
        if ( v14 )
          goto LABEL_8;
        return 0LL;
      }
      v9 += 8;
    }
    v20 = 0;
    v17[0] = v4;
    v17[1] = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(a2 + 32) + 16LL));
    v17[2] = 0;
    v18 = *((_WORD *)&PenEventsDispatcherPrincipal::s_hotkeyList + 2 * v5);
    v19 = *((_BYTE *)&PenEventsDispatcherPrincipal::s_hotkeyList + 4 * v5 + 2);
    HotkeyRegistrationForwarder = ISMStatics::GetHotkeyRegistrationForwarder();
    v12 = HotkeyRegistrationForwarder::ForwardHotkeyRegistration(
            HotkeyRegistrationForwarder,
            (const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *)v17);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x130,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v12,
        (int)v14);
    v8 = v14;
    if ( v14 )
    {
      v10 = v15;
LABEL_8:
      std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(v8, v10);
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)((v16 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  return 0LL;
}
