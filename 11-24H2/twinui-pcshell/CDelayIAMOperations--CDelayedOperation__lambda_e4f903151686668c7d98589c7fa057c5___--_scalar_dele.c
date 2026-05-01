/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___::_scalar_deleting_destructor_ @ 0x1801F7B90
 * Callers:
 *     <none>
 * Callees:
 *     CDelayIAMOperations::CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___::_CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___ @ 0x1801F7BCC (CDelayIAMOperations--CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___--_CDelayedOpe.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CDelayIAMOperations::CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CDelayIAMOperations::CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___::_CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
