/*
 * XREFs of ??_GCImpWorkerWndProc@@MEAAPEAXI@Z @ 0x1804B90F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImpWorkerWndProc@@MEAA@XZ @ 0x1804B9034 (--1CImpWorkerWndProc@@MEAA@XZ.c)
 */

CImpWorkerWndProc *__fastcall CImpWorkerWndProc::`scalar deleting destructor'(CImpWorkerWndProc *this, char a2)
{
  CImpWorkerWndProc::~CImpWorkerWndProc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
