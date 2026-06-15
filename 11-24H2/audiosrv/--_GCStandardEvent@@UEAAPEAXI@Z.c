/*
 * XREFs of ??_GCStandardEvent@@UEAAPEAXI@Z @ 0x18010BE60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CStandardEvent@@UEAA@XZ @ 0x18010B874 (--1CStandardEvent@@UEAA@XZ.c)
 */

void **__fastcall CStandardEvent::`scalar deleting destructor'(void **this, char a2)
{
  CStandardEvent::~CStandardEvent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
