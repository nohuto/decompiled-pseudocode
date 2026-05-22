/*
 * XREFs of ??$?4V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@std@@$0A@@?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAAAEAV01@$$QEAV?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@1@@Z @ 0x1801A5350
 * Callers:
 *     ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x180095FC0 (--0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x18000A3C0 (-_Reset_move@-$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18000A430 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall ____4V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std___0A____function___A6AXPEAUDeviceInfo___Z_std__QEAAAEAV01___QEAV___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__1__Z(
        __int64 a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 (__fastcall **v7)(); // [rsp+20h] [rbp-39h] BYREF
  __int128 v8; // [rsp+28h] [rbp-31h]
  char v9; // [rsp+38h] [rbp-21h]
  __int64 v10; // [rsp+40h] [rbp-19h]
  __int64 (__fastcall ***v11)(); // [rsp+58h] [rbp-1h]
  _BYTE v12[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  v2 = *a2;
  v13 = 0LL;
  v7 = ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std__XPEAUDeviceInfo___std__6B_;
  v9 = *((_BYTE *)a2 + 16);
  v10 = *((_QWORD *)a2 + 3);
  v11 = &v7;
  v8 = v2;
  std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move((__int64)v12, (__int64)&v7);
  std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move((__int64)&v7, a1);
  std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(a1, (__int64)v12);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v12, v4);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v7, v5);
  return a1;
}
