/*
 * XREFs of ?CanChangeForeground@@YAJXZ @ 0x180036868
 * Callers:
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x1800367D0 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801C5BB8 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x18023BA50 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x1802E3AF0 (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
 *     ?s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z @ 0x180307AA0 (-s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 CanChangeForeground(void)
{
  return (unsigned int)CanCurrentThreadChangeForeground() == 0 ? 0x8007139F : 0;
}
