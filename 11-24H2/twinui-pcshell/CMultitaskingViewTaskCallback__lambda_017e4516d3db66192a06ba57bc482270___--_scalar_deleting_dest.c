/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::_scalar_deleting_destructor_ @ 0x18023B0A0
 * Callers:
 *     <none>
 * Callees:
 *     CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::_CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x1802ADF60 (CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___--_CMultitaskingViewTas.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::_CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x60);
  return a1;
}
