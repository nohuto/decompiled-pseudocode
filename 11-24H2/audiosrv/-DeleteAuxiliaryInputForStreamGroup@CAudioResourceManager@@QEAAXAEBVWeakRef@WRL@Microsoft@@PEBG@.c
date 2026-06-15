/*
 * XREFs of ?DeleteAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@PEBG@Z @ 0x1800BBF74
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call @ 0x1800F8E00 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Do_call.c)
 * Callees:
 *     _lambda_82c9212e29ceb5f8e3f8d325d4b387fa_::_lambda_82c9212e29ceb5f8e3f8d325d4b387fa_ @ 0x1800B63B4 (_lambda_82c9212e29ceb5f8e3f8d325d4b387fa_--_lambda_82c9212e29ceb5f8e3f8d325d4b387fa_.c)
 *     _lambda_73ada75428367bd29c5c2dda60bd7903_::operator() @ 0x1800B72B0 (_lambda_73ada75428367bd29c5c2dda60bd7903_--operator().c)
 */

void __fastcall CAudioResourceManager::DeleteAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        const struct Microsoft::WRL::WeakRef *a2,
        const unsigned __int16 *a3)
{
  _QWORD *v3; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  const unsigned __int16 *v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  v3 = lambda_82c9212e29ceb5f8e3f8d325d4b387fa_::_lambda_82c9212e29ceb5f8e3f8d325d4b387fa_(
         v4,
         (__int64)a2,
         (__int64)&v5,
         (__int64)this);
  lambda_73ada75428367bd29c5c2dda60bd7903_::operator()((__int64)v3);
}
