/*
 * XREFs of ?push_back@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800BDC80
 * Callers:
 *     ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x18008A154 (-ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800BCDF8 (-CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV-$vector@V-.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800C046C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::push_back(
        __int64 a1,
        __int64 *a2)
{
  char **v2; // r9
  char *result; // rax

  v2 = *(char ***)(a1 + 8);
  if ( v2 == *(char ***)(a1 + 16) )
    return std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
             (char *)a1,
             *(__int64 **)(a1 + 8),
             a2);
  result = (char *)*a2;
  *a2 = 0LL;
  *v2 = result;
  *(_QWORD *)(a1 + 8) += 8LL;
  return result;
}
