/*
 * XREFs of ??_GInputEaterElement@@UEAAPEAXI@Z @ 0x1804DBD40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputEaterElement@@UEAA@XZ @ 0x1804DBCA0 (--1InputEaterElement@@UEAA@XZ.c)
 */

InputEaterElement *__fastcall InputEaterElement::`scalar deleting destructor'(InputEaterElement *this, char a2)
{
  InputEaterElement::~InputEaterElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
