/*
 * XREFs of ??1_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEAA@XZ @ 0x180029980
 * Callers:
 *     ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x18003C120 (-TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU-$I.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_163dbea914ec29e3eb0ae38e4a9291a3__Windows::Internal::CHSTRINGResult_::COperationLambdaVar_0__lambda_163dbea914ec29e3eb0ae38e4a9291a3__Windows::Internal::CHSTRINGResult___lambda_163dbea914ec29e3eb0ae38e4a9291a3____::_1_::dtor$1 @ 0x1800B7628 (_Windows--Internal--COperationLambdaVar_0__lambda_163dbea914ec29e3eb0ae38e4a9291a3__Windows--Int.c)
 *     _ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync_::_1_::dtor$1 @ 0x1800B7FB4 (_ContentManagement--IdentityManager--TryGetSecondaryMSATicketAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall _lambda_163dbea914ec29e3eb0ae38e4a9291a3_::~_lambda_163dbea914ec29e3eb0ae38e4a9291a3_(HSTRING *this)
{
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
}
