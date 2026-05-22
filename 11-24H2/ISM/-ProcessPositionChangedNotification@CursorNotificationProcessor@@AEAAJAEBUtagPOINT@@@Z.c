/*
 * XREFs of ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x180085B58
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180015334 (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001582C (-_Tidy@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessPositionChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagPOINT *a2)
{
  std::_Mutex_base *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rbp
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (std::_Mutex_base *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
  std::_Mutex_base::lock(v4);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 120LL))(*(_QWORD *)this, v11);
  v5 = (_QWORD *)v11[0];
  v6 = (_QWORD *)v11[1];
  while ( v5 != v6 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(
           *v5,
           (unsigned int)a2->x,
           (unsigned int)a2->y);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 179LL;
      goto LABEL_7;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(
           *v5,
           (unsigned int)a2->x,
           (unsigned int)a2->y);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 183LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursor"
                      "notificationprocessor.cpp",
        (const char *)(unsigned int)v7,
        v11[0]);
      goto LABEL_10;
    }
    ++v5;
  }
  v8 = 0;
LABEL_10:
  std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Tidy((__int64)v11);
  _Mtx_unlock(v4);
  return v8;
}
