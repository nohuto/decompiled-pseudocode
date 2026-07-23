/*
 * XREFs of PpmSetSimulatedLoad @ 0x140AAFAA0
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmSetSimulatedLoad(PPROCESSOR_NUMBER ProcNumber, __int64 a2, unsigned int a3)
{
  void *v4; // rsi
  __int64 i; // rdx
  unsigned int j; // ecx
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int v9; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  _BYTE *Pool2; // rax

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
          if ( v8 )
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
    goto LABEL_18;
  }
  v8 = KeGetPrcb(ProcessorIndexFromNumber) + 35248;
LABEL_15:
  Pool2 = (_BYTE *)ExAllocatePool2(0x40uLL, 2uLL, 0x704D5050u);
  if ( Pool2 )
  {
    *Pool2 = ProcNumber[1].Group;
    Pool2[1] = HIBYTE(ProcNumber[1].Group);
    v4 = *(void **)(v8 + 24);
    *(_QWORD *)(v8 + 24) = Pool2;
    v9 = 0;
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_18:
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x704D5050u);
  return v9;
}
