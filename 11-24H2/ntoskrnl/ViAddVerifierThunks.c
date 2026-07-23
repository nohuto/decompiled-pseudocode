/*
 * XREFs of ViAddVerifierThunks @ 0x14060EA0C
 * Callers:
 *     DifRegisterClassDriverPlugin @ 0x14060E2B0 (DifRegisterClassDriverPlugin.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     VfThunkAddDriverThunks @ 0x140B98E3C (VfThunkAddDriverThunks.c)
 */

__int64 __fastcall ViAddVerifierThunks(unsigned __int64 *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v6; // rsi
  unsigned int v7; // edi
  struct _KTHREAD *Lock; // r15
  __int64 *DataTableEntryByAddress; // rax
  __int64 *v10; // r8
  unsigned __int64 v11; // r10
  int v12; // edx
  PVOID *v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned int v16; // ebx

  v2 = 0;
  if ( !ViVerifierEnabled )
    return 3221225659LL;
  if ( KernelVerifier )
    return 3221228661LL;
  v6 = a1;
  v7 = a2 >> 4;
  if ( !(a2 >> 4) )
    return 3221225711LL;
  VfNumberOfClassDriverThunks += v7;
  if ( MmVerifierData )
  {
    Lock = MiAcquireLoadLock(1);
    DataTableEntryByAddress = MmFindDataTableEntryByAddress(*a1);
    v10 = DataTableEntryByAddress;
    if ( DataTableEntryByAddress )
    {
      v11 = DataTableEntryByAddress[6];
      v12 = 0;
      v13 = (PVOID *)PsLoadedModuleList;
      v14 = v11 + *((unsigned int *)DataTableEntryByAddress + 16);
      while ( 1 )
      {
        if ( v13 == &PsLoadedModuleList )
          goto LABEL_14;
        if ( DataTableEntryByAddress == (__int64 *)v13 )
          break;
        if ( (unsigned int)++v12 >= 2 )
        {
LABEL_14:
          while ( v2 < v7 )
          {
            if ( *v6 < v11 )
              goto LABEL_21;
            if ( *v6 >= v14 )
              goto LABEL_21;
            v15 = v6[1];
            if ( v15 < v11 || v15 >= v14 )
              goto LABEL_21;
            v6 += 2;
            ++v2;
          }
          v16 = VfThunkAddDriverThunks(a1, a2, v10, v14);
          MmReleaseLoadLock(Lock);
          return v16;
        }
        v13 = (PVOID *)*v13;
      }
    }
LABEL_21:
    MmReleaseLoadLock(Lock);
  }
  return 3221225712LL;
}
