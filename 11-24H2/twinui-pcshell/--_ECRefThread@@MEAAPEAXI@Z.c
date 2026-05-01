/*
 * XREFs of ??_ECRefThread@@MEAAPEAXI@Z @ 0x1803EBC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRefThread@@MEAA@XZ @ 0x1802C2CF8 (--1CRefThread@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CRefThread *__fastcall CRefThread::`vector deleting destructor'(CRefThread *this, char a2)
{
  CRefThread::~CRefThread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
