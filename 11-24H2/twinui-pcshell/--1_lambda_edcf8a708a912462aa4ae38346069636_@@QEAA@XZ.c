/*
 * XREFs of ??1_lambda_edcf8a708a912462aa4ae38346069636_@@QEAA@XZ @ 0x1802C4B28
 * Callers:
 *     ??1?$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1802C4B00 (--1-$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@UEA.c)
 *     ??$QueueViewManagementTask@V_lambda_6ff91a5acb023164635626d4f2ce69ec_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_6ff91a5acb023164635626d4f2ce69ec_@@@Z @ 0x1802C7760 (--$QueueViewManagementTask@V_lambda_6ff91a5acb023164635626d4f2ce69ec_@@@CIAMGlobals@@QEAAJ$$QEAV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall _lambda_edcf8a708a912462aa4ae38346069636_::~_lambda_edcf8a708a912462aa4ae38346069636_(
        _lambda_edcf8a708a912462aa4ae38346069636_ *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
