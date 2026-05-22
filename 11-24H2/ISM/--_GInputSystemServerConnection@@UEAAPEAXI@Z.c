/*
 * XREFs of ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x180114A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputSystemServerConnection@@UEAA@XZ @ 0x180114488 (--1InputSystemServerConnection@@UEAA@XZ.c)
 */

InputSystemServerConnection *__fastcall InputSystemServerConnection::`scalar deleting destructor'(
        InputSystemServerConnection *this,
        char a2)
{
  InputSystemServerConnection::~InputSystemServerConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x100);
  return this;
}
