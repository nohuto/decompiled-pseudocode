/*
 * XREFs of ?push_back@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800EAF38
 * Callers:
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800EA250 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800EA580 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800EA890 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::push_back(__int64 a1, __int64 *a2)
{
  char **v2; // r9
  char *result; // rax

  v2 = *(char ***)(a1 + 8);
  if ( v2 == *(char ***)(a1 + 16) )
    return std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
             (const char *)a1,
             *(_QWORD *)(a1 + 8),
             a2);
  result = (char *)*a2;
  *a2 = 0LL;
  *v2 = result;
  *(_QWORD *)(a1 + 8) += 8LL;
  return result;
}
