/*
 * XREFs of ??1?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA@XZ @ 0x1802D0354
 * Callers:
 *     _XamlLauncher::XamlLauncher_::_1_::dtor$3 @ 0x1806EC179 (_XamlLauncher--XamlLauncher_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::~unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>(
        FocusHoldingTank **a1)
{
  wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset(a1, 0LL);
}
