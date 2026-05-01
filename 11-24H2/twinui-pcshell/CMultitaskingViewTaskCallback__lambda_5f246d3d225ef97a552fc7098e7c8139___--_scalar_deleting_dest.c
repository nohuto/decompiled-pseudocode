/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___::_scalar_deleting_destructor_ @ 0x180296530
 * Callers:
 *     <none>
 * Callees:
 *     CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___::_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___ @ 0x18029656C (CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___--_CMultitaskingViewTas.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___::_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x80);
  return a1;
}
