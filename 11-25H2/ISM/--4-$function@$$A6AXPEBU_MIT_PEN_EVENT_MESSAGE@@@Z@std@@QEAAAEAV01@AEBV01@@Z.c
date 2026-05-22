/*
 * XREFs of ??4?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000AA4C
 * Callers:
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z@std@@@Z @ 0x18000A87C (-Initialize@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18000AF6C (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_tagActivationObjectNotification@@@Z@std@@@Z @ 0x18000B2E8 (-Initialize@-$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_VPTP_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x18000B4DC (-Initialize@-$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@@Z @ 0x18000C438 (-Initialize@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSessio.c)
 * Callees:
 *     ?_Swap@?$_Func_class@X_N@std@@IEAAXAEAV12@@Z @ 0x18000A314 (-_Swap@-$_Func_class@X_N@std@@IEAAXAEAV12@@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (_MIT_PEN_EVENT_MESSAGE const *)>::operator=(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  _BYTE *v4; // rdx
  _BYTE v6[56]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v7; // [rsp+58h] [rbp-20h]

  v7 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v3 )
    v7 = (_BYTE *)(**v3)(v3, v6);
  std::_Func_class<void,bool>::_Swap((__int64)v6, a1);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v7 + 32LL))(v7, v4);
  }
  return a1;
}
