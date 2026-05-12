/*
 * XREFs of StorCheckForNvmeTimeoutUpdates @ 0x14008EF10
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 */

__int64 __fastcall StorCheckForNvmeTimeoutUpdates(__int64 a1)
{
  __int64 Pool; // rax
  _WORD *v3; // rdi
  int NVMePollingInformation; // ebx
  int v5; // ecx

  Pool = RaidAllocatePool(64LL, 4096LL, 1447977298LL, *(_QWORD *)(a1 + 8));
  v3 = (_WORD *)Pool;
  if ( Pool )
  {
    NVMePollingInformation = StorGetNVMePollingInformation(a1, Pool);
    if ( NVMePollingInformation >= 0 )
    {
      if ( *v3 >= 0x101u )
      {
        v5 = (unsigned __int16)v3[6];
        *(_WORD *)(a1 + 6232) = v5;
        *(_WORD *)(a1 + 6234) = v3[7];
        if ( (_WORD)v5 )
          *(_DWORD *)(a1 + 4124) = v5;
      }
      else
      {
        NVMePollingInformation = -1073741637;
      }
    }
    ExFreePoolWithTag(v3, 0x564E6152u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)NVMePollingInformation;
}
