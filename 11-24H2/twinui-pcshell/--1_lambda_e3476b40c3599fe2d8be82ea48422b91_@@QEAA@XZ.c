/*
 * XREFs of ??1_lambda_e3476b40c3599fe2d8be82ea48422b91_@@QEAA@XZ @ 0x1801F8C80
 * Callers:
 *     ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x1801F8BE0 (--$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV.c)
 *     ??1_lambda_e02303751d4e49a7e603e0304fd9978e_@@QEAA@XZ @ 0x1801F8C58 (--1_lambda_e02303751d4e49a7e603e0304fd9978e_@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall _lambda_e3476b40c3599fe2d8be82ea48422b91_::~_lambda_e3476b40c3599fe2d8be82ea48422b91_(
        _lambda_e3476b40c3599fe2d8be82ea48422b91_ *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
}
