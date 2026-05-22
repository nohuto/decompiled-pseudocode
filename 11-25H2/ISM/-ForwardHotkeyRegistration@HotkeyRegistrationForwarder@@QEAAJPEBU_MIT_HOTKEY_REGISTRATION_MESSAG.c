/*
 * XREFs of ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x18007AAA8
 * Callers:
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x180039F6C (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800F0A60 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_1800F0A60.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@AEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x1801045A4 (--$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@-$vector@UHotKeyRegistrationData@@V-$allocat.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::ForwardHotkeyRegistration(
        HotkeyRegistrationForwarder *this,
        const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rdx
  __int64 **v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // xmm1_8
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *((_QWORD *)this + 3);
  v7 = (__int64 **)((char *)this + 16);
  v8 = *v7;
  if ( *v7 != (__int64 *)v6 )
  {
    a4 = (const char *)*((unsigned int *)a2 + 1);
    do
    {
      if ( *(_QWORD *)((char *)a2 + 4) == *v8
        && *((unsigned __int8 *)a2 + 14) == *((_WORD *)v8 + 5)
        && ((*((_BYTE *)a2 + 12) ^ *((_BYTE *)v8 + 8)) & 0xF) == 0 )
      {
        break;
      }
      v8 = (__int64 *)((char *)v8 + 12);
    }
    while ( v8 != (__int64 *)v6 );
  }
  if ( *(_DWORD *)a2 )
  {
    if ( v8 == (__int64 *)v6 )
    {
      try
      {
        v19 = *(_QWORD *)((char *)a2 + 4);
        LOWORD(v20) = *((_WORD *)a2 + 6);
        HIWORD(v20) = *((unsigned __int8 *)a2 + 14);
        if ( (__int64 *)v6 == v7[2] )
        {
          std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(v7, v6, &v19);
          v10 = v20;
          v9 = v19;
        }
        else
        {
          v9 = v19;
          *(_QWORD *)v6 = v19;
          v10 = v20;
          *(_DWORD *)(v6 + 8) = v20;
          v7[1] = (__int64 *)((char *)v7[1] + 12);
        }
        v11 = (__int64 *)*((_QWORD *)this + 6);
        if ( v11 )
        {
          v12 = *v11;
          v19 = v9;
          v20 = v10;
          LOBYTE(v10) = 1;
          v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(v12 + 488))(v11, &v19, v10);
          if ( v13 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4B,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregi"
                            "strationforwarder.cpp",
              (const char *)(unsigned int)v13,
              v18);
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x4E,
                               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforw"
                                             "arder\\hotkeyregistrationforwarder.cpp",
                               a4);
      }
    }
  }
  else if ( v8 != (__int64 *)v6 )
  {
    v14 = (__int64 *)*((_QWORD *)this + 6);
    if ( v14 )
    {
      v15 = *v14;
      v19 = *v8;
      v20 = *((_DWORD *)v8 + 2);
      v16 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v15 + 488))(v14, &v19, 0LL);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x58,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistra"
                        "tionforwarder.cpp",
          (const char *)(unsigned int)v16,
          v18);
    }
    memmove_0(v8, (char *)v8 + 12, *((_QWORD *)this + 3) - ((_QWORD)v8 + 12));
    *((_QWORD *)this + 3) -= 12LL;
  }
  return 0LL;
}
