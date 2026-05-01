/*
 * XREFs of ??_GCRunnableTask@@MEAAPEAXI@Z @ 0x180600190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CRunnableTask@@MEAA@XZ @ 0x1805FF7C0 (--1CRunnableTask@@MEAA@XZ.c)
 */

CRunnableTask *__fastcall CRunnableTask::`scalar deleting destructor'(CRunnableTask *this, char a2)
{
  CRunnableTask::~CRunnableTask(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
