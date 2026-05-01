/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___::_scalar_deleting_destructor_ @ 0x1802F6B10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___::_ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___ @ 0x1802F5C50 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776ba.c)
 */

void *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___::_ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
