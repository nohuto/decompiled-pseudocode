/*
 * XREFs of ?SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicationViewCollection@@@Z @ 0x1802717E8
 * Callers:
 *     ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180270A10 (-SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?copy_ref@?$com_ptr@UIUnknown@@@winrt@@AEAAXPEAUIUnknown@@@Z @ 0x1800CF9C4 (-copy_ref@-$com_ptr@UIUnknown@@@winrt@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapInteraction::InteractionTracker::SubscribeToServices(
        SnapInteraction::InteractionTracker *this,
        struct ISnapComponent *a2,
        struct IApplicationViewCollection *a3)
{
  unsigned int v5; // eax
  struct ISnapComponent **v6; // rbx
  struct ISnapComponent *v7; // rcx
  unsigned int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF

  winrt::com_ptr<IUnknown>::copy_ref((__int64 *)this + 5, (__int64)a3);
  v11 = 0;
  v12 = 0LL;
  try
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5));
    winrt::check_hresult(&v14, v5, &v11);
    v6 = (struct ISnapComponent **)((char *)this + 56);
    v7 = (struct ISnapComponent *)*((_QWORD *)this + 7);
    if ( v7 != a2 )
    {
      if ( v7 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
      *v6 = a2;
      v7 = a2;
      if ( a2 )
      {
        (*(void (__fastcall **)(struct ISnapComponent *))(*(_QWORD *)a2 + 8LL))(a2);
        v7 = *v6;
      }
    }
    v11 = 0;
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct ISnapComponent *, unsigned __int64, char *))(*(_QWORD *)v7 + 64LL))(
           v7,
           ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
           (char *)this + 64);
    winrt::check_hresult(&v14, v8, &v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB0,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
                           v9);
  }
  return result;
}
