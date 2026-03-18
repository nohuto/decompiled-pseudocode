/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x140678D48
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x140678EF0 (MmTrimAllSystemPagableMemory.c)
 *     MmShutdownSystem @ 0x140B625C0 (MmShutdownSystem.c)
 *     MmVerifierTrimMemory @ 0x140BA47F8 (MmVerifierTrimMemory.c)
 * Callees:
 *     MiPurgePartitionStandby @ 0x140220D50 (MiPurgePartitionStandby.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiEmptyTargetedWorkingSet @ 0x140678830 (MiEmptyTargetedWorkingSet.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1)
{
  _DWORD *v1; // r14
  unsigned int v3; // edi
  __int64 v4; // rdx
  char *AnyMultiplexedVm; // rax
  int v6; // edx
  _DWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v12; // r15d
  int v13; // ebp
  char *v14; // r13
  int v15; // eax
  bool v16; // zf
  $81B80DCEA5A02D890AB7B2872B48AC01 *v17; // rcx

  v1 = &unk_140E37400;
  v3 = 0;
  LODWORD(v4) = 0;
  do
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v4);
    if ( *v7 != *((_DWORD *)AnyMultiplexedVm + 1) )
      v3 |= v8 << v6;
    v4 = v8 + v6;
    v9 = (__int64)(v7 + 1);
  }
  while ( (int)v4 <= 3 );
  if ( !v3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  CurrentThread->SpecialApcDisable -= v8;
  if ( v8 + _InterlockedExchangeAdd(&dword_140E373C4, v8) == v8 )
  {
    v12 = v8;
    _InterlockedExchange64(&qword_140E37410, (__int64)KeGetCurrentThread());
    v13 = 0;
    do
    {
      if ( ((unsigned __int8)v3 & (unsigned __int8)v8) != 0 )
      {
        v14 = MiGetAnyMultiplexedVm(v13);
        v15 = MiEmptyTargetedWorkingSet((__int64)v14);
        v8 = v12;
        if ( v15 )
          *v1 = *((_DWORD *)v14 + 1);
      }
      v13 += v8;
      ++v1;
      v3 >>= 1;
    }
    while ( v3 );
    if ( a1 )
    {
      MiPurgePartitionStandby((__int64)&MiSystemPartition, 8u, v9);
      LOWORD(v8) = v12;
    }
    _InterlockedExchange64(&qword_140E37410, 0LL);
  }
  _InterlockedDecrement(&dword_140E373C4);
  v16 = (_WORD)v8 + CurrentThread->SpecialApcDisable == 0;
  CurrentThread->SpecialApcDisable += v8;
  if ( v16 )
  {
    v17 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v17->ApcState.ApcListHead[0].Flink != v17 )
      KiCheckForKernelApcDelivery((__int64)v17, v4);
  }
  return v12;
}
