/*
 * XREFs of ??_GCStandardEvent@@UEAAPEAXI@Z @ 0x140044E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStandardEvent@@UEAA@XZ @ 0x140044E9C (--1CStandardEvent@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStandardEvent *__fastcall CStandardEvent::`scalar deleting destructor'(CStandardEvent *this, char a2)
{
  CStandardEvent::~CStandardEvent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
