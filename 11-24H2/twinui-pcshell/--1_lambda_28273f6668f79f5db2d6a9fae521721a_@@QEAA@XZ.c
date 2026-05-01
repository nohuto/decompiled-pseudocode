/*
 * XREFs of ??1_lambda_28273f6668f79f5db2d6a9fae521721a_@@QEAA@XZ @ 0x1803ECFAC
 * Callers:
 *     ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x1803ECCE0 (--$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda.c)
 *     ??1?$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1803ED004 (--1-$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@UEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall _lambda_28273f6668f79f5db2d6a9fae521721a_::~_lambda_28273f6668f79f5db2d6a9fae521721a_(
        _lambda_28273f6668f79f5db2d6a9fae521721a_ *this)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 3);
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>((__int64)this + 8);
}
