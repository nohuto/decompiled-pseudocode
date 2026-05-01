/*
 * XREFs of ??_G_System_error_category@std@@UEAAPEAXI@Z @ 0x180315850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::_System_error_category *__fastcall std::_System_error_category::`scalar deleting destructor'(
        std::_System_error_category *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
