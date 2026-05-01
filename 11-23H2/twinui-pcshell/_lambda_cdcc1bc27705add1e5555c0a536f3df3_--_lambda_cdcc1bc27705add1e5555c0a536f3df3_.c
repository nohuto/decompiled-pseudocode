/*
 * XREFs of _lambda_cdcc1bc27705add1e5555c0a536f3df3_::_lambda_cdcc1bc27705add1e5555c0a536f3df3_ @ 0x18020CB14
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180526460 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_cdcc1bc27705add1e5555c0a536f3df3_::_lambda_cdcc1bc27705add1e5555c0a536f3df3_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v5; // rcx

  v5 = *a2;
  *a1 = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  a1[1] = a3;
  return a1;
}
