/*
 * XREFs of ??_GTextInputStateAdapter@@EEAAPEAXI@Z @ 0x1801CD6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TextInputStateAdapter@@EEAA@XZ @ 0x1801CD60C (--1TextInputStateAdapter@@EEAA@XZ.c)
 */

TextInputStateAdapter *__fastcall TextInputStateAdapter::`scalar deleting destructor'(
        TextInputStateAdapter *this,
        char a2)
{
  TextInputStateAdapter::~TextInputStateAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
