/*
 * XREFs of wistd::__function::__func__lambda_c27fb3894833df319de68fad3b02a886__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x1801E47A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_c27fb3894833df319de68fad3b02a886__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
