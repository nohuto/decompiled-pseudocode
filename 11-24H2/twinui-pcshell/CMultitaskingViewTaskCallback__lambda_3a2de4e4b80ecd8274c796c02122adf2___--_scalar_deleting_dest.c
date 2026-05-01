/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::_scalar_deleting_destructor_ @ 0x18049AD10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::_CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___ @ 0x18049ABAC (CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___--_CMultitaskingViewTas.c)
 */

void *__fastcall CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::_CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
