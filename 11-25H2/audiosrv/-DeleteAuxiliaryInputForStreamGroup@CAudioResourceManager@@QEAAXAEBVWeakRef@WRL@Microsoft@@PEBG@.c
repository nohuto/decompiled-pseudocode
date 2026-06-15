/*
 * XREFs of ?DeleteAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@PEBG@Z @ 0x1800BC714
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call @ 0x1800F3DA0 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Do_call.c)
 * Callees:
 *     _lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_ @ 0x1800B6FEC (_lambda_dacf159241f8e1fef226fb2cfac8af81_--_lambda_dacf159241f8e1fef226fb2cfac8af81_.c)
 *     _lambda_a5b05a19d77442a7b86c350de8e12946_::operator() @ 0x1800B7A24 (_lambda_a5b05a19d77442a7b86c350de8e12946_--operator().c)
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
  v3 = lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_(
         v4,
         (__int64)a2,
         (__int64)&v5,
         (__int64)this);
  lambda_a5b05a19d77442a7b86c350de8e12946_::operator()((__int64)v3);
}
