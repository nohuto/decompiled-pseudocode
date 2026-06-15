/*
 * XREFs of ??_GCpuManager@@UEAAPEAXI@Z @ 0x140067FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CpuManager@@UEAA@XZ @ 0x140067F98 (--1CpuManager@@UEAA@XZ.c)
 */

CpuManager *__fastcall CpuManager::`scalar deleting destructor'(CpuManager *this, char a2)
{
  CpuManager::~CpuManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
