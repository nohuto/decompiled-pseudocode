/*
 * XREFs of ??_GCStandardEvent@@UEAAPEAXI@Z @ 0x180105C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CStandardEvent@@UEAA@XZ @ 0x180105724 (--1CStandardEvent@@UEAA@XZ.c)
 */

void **__fastcall CStandardEvent::`scalar deleting destructor'(void **this, char a2)
{
  CStandardEvent::~CStandardEvent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
