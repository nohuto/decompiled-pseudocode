/*
 * XREFs of CmpHiveCachePopulateHiveEntry @ 0x1407E5854
 * Callers:
 *     CmpMachineHiveCachePopulateEntry @ 0x1407D8FA8 (CmpMachineHiveCachePopulateEntry.c)
 * Callees:
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     CmSiAllocateMemory @ 0x140485138 (CmSiAllocateMemory.c)
 *     CmSiSetEvent @ 0x140668BAC (CmSiSetEvent.c)
 *     CmpCreateRegistryThread @ 0x1407D819C (CmpCreateRegistryThread.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x1407E5678 (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x1407E56DC (CmpHiveCacheEntryLockRelease.c)
 */

__int64 __fastcall CmpHiveCachePopulateHiveEntry(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int RegistryThread; // edi
  __int64 Memory; // rax
  __int64 v11; // rdx

  if ( a1 && a2 && a5 )
  {
    if ( *(_DWORD *)(a1 + 336) == 1 )
    {
      RegistryThread = -1073741822;
LABEL_11:
      CmpHiveCacheEntryLockAcquire(a1);
      *(_DWORD *)(a1 + 168) = 3;
      CmpHiveCacheEntryLockRelease(a1);
      CmSiSetEvent(a1 + 272);
      CmSiSetEvent(a1 + 288);
      return (unsigned int)RegistryThread;
    }
    Memory = CmSiAllocateMemory();
    if ( !Memory )
    {
      RegistryThread = -1073741801;
      goto LABEL_11;
    }
    *(_QWORD *)(Memory + 24) = a5;
    *(_DWORD *)(Memory + 20) = 22609921;
    *(_DWORD *)(Memory + 16) = a3;
    *(_QWORD *)(Memory + 8) = a2;
    *(_QWORD *)(Memory + 32) = a6;
    *(_QWORD *)Memory = a1;
    RegistryThread = CmpCreateRegistryThread(a1 + 360, v11, (__int64)CmpHiveCachePopulateHiveEntryThread, Memory);
    if ( RegistryThread < 0 )
      goto LABEL_11;
  }
  else
  {
    RegistryThread = -1073741811;
    SetFailureLocation(a6, 0, 41, -1073741811, 16);
    if ( a1 )
      goto LABEL_11;
  }
  return (unsigned int)RegistryThread;
}
