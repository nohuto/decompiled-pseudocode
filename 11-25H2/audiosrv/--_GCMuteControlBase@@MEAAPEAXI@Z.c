/*
 * XREFs of ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x1800FDDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMuteControlBase@@MEAA@XZ @ 0x1800FDCD0 (--1CMuteControlBase@@MEAA@XZ.c)
 */

void **__fastcall CMuteControlBase::`scalar deleting destructor'(void **this, char a2)
{
  CMuteControlBase::~CMuteControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
