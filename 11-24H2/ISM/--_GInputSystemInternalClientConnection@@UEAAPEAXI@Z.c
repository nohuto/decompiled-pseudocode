/*
 * XREFs of ??_GInputSystemInternalClientConnection@@UEAAPEAXI@Z @ 0x18012DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x18012DC24 (--1InputSystemInternalClientConnection@@UEAA@XZ.c)
 */

InputSystemInternalClientConnection *__fastcall InputSystemInternalClientConnection::`scalar deleting destructor'(
        InputSystemInternalClientConnection *this,
        char a2)
{
  InputSystemInternalClientConnection::~InputSystemInternalClientConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}
