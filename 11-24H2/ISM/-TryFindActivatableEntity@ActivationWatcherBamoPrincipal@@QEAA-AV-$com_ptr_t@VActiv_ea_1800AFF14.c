/*
 * XREFs of ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800AFF14
 * Callers:
 *     ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800ADEA8 (-RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z @ 0x1800ADFA8 (-SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AE0DC (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800AF4C8 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x18002332C (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 */

_QWORD *__fastcall ActivationWatcherBamoPrincipal::TryFindActivatableEntity(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD v5[10]; // [rsp+28h] [rbp-50h] BYREF

  v5[1] = a3;
  v5[0] = off_1801E2F60;
  v5[7] = v5;
  ActivationWatcherBamoPrincipal::find_and_return_if(a1, a2, (__int64)v5);
  return a2;
}
