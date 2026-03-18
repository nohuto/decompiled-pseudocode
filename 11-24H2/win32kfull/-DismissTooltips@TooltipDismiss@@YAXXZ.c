/*
 * XREFs of ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1402246D4
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?ClearTooltipRegisteredList@TooltipDismiss@@YAXXZ @ 0x14026C0C4 (-ClearTooltipRegisteredList@TooltipDismiss@@YAXXZ.c)
 */

void __fastcall TooltipDismiss::DismissTooltips(TooltipDismiss *this, __int64 a2)
{
  __int64 v2; // rdx
  TooltipDismiss *v3; // rcx
  __int64 *i; // rbx
  __int64 v5; // rax

  for ( i = *(__int64 **)(W32GetUserSessionState(this, a2) + 71456); i; i = (__int64 *)i[1] )
  {
    LOBYTE(v2) = 1;
    v5 = HMValidateHandleNoSecure(*i, v2);
    if ( v5 )
      PostMessage(v5, 837, 0, 0);
  }
  TooltipDismiss::ClearTooltipRegisteredList(v3);
}
