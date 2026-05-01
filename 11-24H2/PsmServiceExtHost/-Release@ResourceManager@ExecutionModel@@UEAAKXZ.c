/*
 * XREFs of ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180086E10
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180086E50 (-Release@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180071DAC (--3@YAXPEAX@Z.c)
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180086730 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::Release(ExecutionModel::ResourceManager *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
  {
    ExecutionModel::ResourceManager::~ResourceManager(this);
    operator delete(this);
  }
  return v2;
}
