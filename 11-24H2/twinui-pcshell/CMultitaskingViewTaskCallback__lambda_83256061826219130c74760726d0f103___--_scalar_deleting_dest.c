/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___::_scalar_deleting_destructor_ @ 0x1805BBAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___::_CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___ @ 0x1805BB9A0 (CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___--_CMultitaskingViewTas.c)
 */

void *__fastcall CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___::_CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
