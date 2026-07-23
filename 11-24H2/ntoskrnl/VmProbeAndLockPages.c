/*
 * XREFs of VmProbeAndLockPages @ 0x1406488F0
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140670158 (MmUpdateMdlTrackerForMdlSwitch.c)
 */

__int64 __fastcall VmProbeAndLockPages(PMDL MemoryDescriptorList, char a2, LOCK_OPERATION a3)
{
  unsigned int v4; // ebx
  __int64 ByteCount; // r9
  char *v6; // rdx
  char *v7; // rax
  char *v8; // rax

  v4 = 0;
  if ( a2 || (unsigned int)a3 > IoWriteAccess )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ByteCount = MemoryDescriptorList->ByteCount;
    v6 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
    v7 = &v6[ByteCount - 1];
    if ( !(_DWORD)ByteCount )
      v7 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
    if ( v7 < v6 )
      return (unsigned int)-1073741637;
    v8 = &v6[ByteCount - 1];
    if ( !(_DWORD)ByteCount )
      v8 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
    if ( (unsigned __int64)v8 > 0x7FFFFFFEFFFFLL )
      return (unsigned int)-1073741637;
    MmProbeAndLockPages(MemoryDescriptorList, 0, a3);
    if ( (MemoryDescriptorList->MdlFlags & 0xFFFFFF77) != 0x102 )
    {
      MmUnlockPages(MemoryDescriptorList);
      return (unsigned int)-1073741637;
    }
    MmUpdateMdlTrackerForMdlSwitch((ULONG_PTR)MemoryDescriptorList);
  }
  return v4;
}
