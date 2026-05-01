/*
 * XREFs of ??_GFrameWrapper@@UEAAPEAXI@Z @ 0x180207B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1FrameWrapper@@UEAA@XZ @ 0x180207B70 (--1FrameWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

FrameWrapper *__fastcall FrameWrapper::`scalar deleting destructor'(FrameWrapper *this, char a2)
{
  FrameWrapper::~FrameWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
