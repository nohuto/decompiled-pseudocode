/*
 * XREFs of ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x180105120
 * Callers:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800764F8 (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SESSION_EVENT@@UEAA@XZ @ 0x1801050D8 (--1SESSION_EVENT@@UEAA@XZ.c)
 */

void **__fastcall SESSION_EVENT::`scalar deleting destructor'(void **this, char a2)
{
  SESSION_EVENT::~SESSION_EVENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
