/*
 * XREFs of ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180002FB8
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003860 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180003A70 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180002D0C (CempLockAcquireExclusive.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003EF0 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::RegisterCommitMemoryCallback(
        ModernResourceManagerProxy *this,
        void (*a2)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *),
        void (*a3)(unsigned __int64, unsigned __int64))
{
  _QWORD *v4; // rbx
  int v5; // edi

  CempLockAcquireExclusive((__int64)this + 96);
  v4 = (_QWORD *)((char *)this + 32);
  if ( *(_OWORD *)((char *)this + 24) == 0LL )
  {
    *((_QWORD *)this + 3) = Windows::System::CMemoryManager::OnCommitLevelChangeRoutine;
    *v4 = Windows::System::CMemoryManager::OnCommitLimitChangeRoutine;
    v5 = ModernResourceManagerProxy::RegisterWithServer(this);
    if ( v5 >= 0 )
    {
      v5 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    v5 = -2147483635;
  }
  *((_QWORD *)this + 3) = 0LL;
  *v4 = 0LL;
LABEL_4:
  *((_DWORD *)this + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 96);
  return (unsigned int)v5;
}
