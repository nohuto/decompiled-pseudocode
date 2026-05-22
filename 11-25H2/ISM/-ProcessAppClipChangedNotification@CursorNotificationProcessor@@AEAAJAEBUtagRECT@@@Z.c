/*
 * XREFs of ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800152F8
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180014D64 (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001525C (-_Tidy@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessAppClipChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagRECT *a2)
{
  std::_Mutex_base *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rbp
  int v7; // eax
  unsigned int v8; // edi
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (std::_Mutex_base *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
  std::_Mutex_base::lock(v4);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 120LL))(*(_QWORD *)this, v10);
  v5 = (_QWORD *)v10[0];
  v6 = (_QWORD *)v10[1];
  while ( 1 )
  {
    if ( v5 == v6 )
    {
      v8 = 0;
      goto LABEL_6;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(*(_QWORD *)*v5 + 96LL))(*v5, a2);
    v8 = v7;
    if ( v7 < 0 )
      break;
    ++v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC9,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornoti"
                  "ficationprocessor.cpp",
    (const char *)(unsigned int)v7,
    v10[0]);
LABEL_6:
  std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Tidy((__int64)v10);
  _Mtx_unlock(v4);
  return v8;
}
