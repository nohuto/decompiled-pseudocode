/*
 * XREFs of ?GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@XZ @ 0x1802C011C
 * Callers:
 *     ?InsertAfterWindow@CApplicationViewBase@@UEAAJPEAUHWND__@@@Z @ 0x1802C0070 (-InsertAfterWindow@CApplicationViewBase@@UEAAJPEAUHWND__@@@Z.c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x18031101C (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002B1E4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _lambda_a869f7513e8efdf703e23387751d77d1_::operator() @ 0x18030F1F0 (_lambda_a869f7513e8efdf703e23387751d77d1_--operator().c)
 */

_QWORD *__fastcall ApplicationViewManagement::CGlobals::GetPrivilegedArrangementOperations(_QWORD *a1)
{
  volatile signed __int32 *v3; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v4; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v4 = a1;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v3);
  if ( v3 )
    lambda_a869f7513e8efdf703e23387751d77d1_::operator()(&v4);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v3);
  return a1;
}
