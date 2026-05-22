/*
 * XREFs of ??_GTextInputStateAdapter@@EEAAPEAXI@Z @ 0x1801C5E20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TextInputStateAdapter@@EEAA@XZ @ 0x1801C5D80 (--1TextInputStateAdapter@@EEAA@XZ.c)
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
