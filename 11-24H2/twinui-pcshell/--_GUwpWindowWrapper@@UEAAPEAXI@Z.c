/*
 * XREFs of ??_GUwpWindowWrapper@@UEAAPEAXI@Z @ 0x1801CEDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UwpWindowWrapper@@UEAA@XZ @ 0x1801CEE0C (--1UwpWindowWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

UwpWindowWrapper *__fastcall UwpWindowWrapper::`scalar deleting destructor'(UwpWindowWrapper *this, char a2)
{
  UwpWindowWrapper::~UwpWindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2D0);
  return this;
}
