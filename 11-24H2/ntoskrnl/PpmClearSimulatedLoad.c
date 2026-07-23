/*
 * XREFs of PpmClearSimulatedLoad @ 0x140AB0B2C
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmClearSimulatedLoad(PPROCESSOR_NUMBER ProcNumber, __int64 a2, unsigned int a3)
{
  void *v4; // rdi
  __int64 i; // rcx
  unsigned int j; // edx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // ebx
  ULONG ProcessorIndexFromNumber; // eax

  v4 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  if ( *(_DWORD *)ProcNumber < 0 )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        v7 = *(_QWORD *)(i + 312) + 1192LL * j;
        if ( *(_DWORD *)(v7 + 16) == 1 && *(_DWORD *)(v7 + 20) == (*(_DWORD *)ProcNumber & 0x7FFFFFFF) )
        {
          v8 = *(_QWORD *)v7;
          if ( *(_QWORD *)v7 )
            goto LABEL_15;
          break;
        }
      }
    }
    goto LABEL_11;
  }
  if ( ProcNumber->Reserved
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber), ProcessorIndexFromNumber == -1) )
  {
LABEL_11:
    v9 = -1073741811;
    goto LABEL_16;
  }
  v8 = KeGetPrcb(ProcessorIndexFromNumber) + 35248;
LABEL_15:
  v4 = *(void **)(v8 + 24);
  *(_QWORD *)(v8 + 24) = 0LL;
  v9 = 0;
LABEL_16:
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x704D5050u);
  return v9;
}
