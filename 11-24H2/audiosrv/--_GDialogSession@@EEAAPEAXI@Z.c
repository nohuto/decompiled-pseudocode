/*
 * XREFs of ??_GDialogSession@@EEAAPEAXI@Z @ 0x1800FB200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DialogSession@@EEAA@XZ @ 0x1800FB164 (--1DialogSession@@EEAA@XZ.c)
 */

DialogSession *__fastcall DialogSession::`scalar deleting destructor'(DialogSession *this, char a2)
{
  DialogSession::~DialogSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
