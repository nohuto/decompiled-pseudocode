/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x140679F28
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x14067A0D0 (MmTrimAllSystemPagableMemory.c)
 *     MmShutdownSystem @ 0x140B64690 (MmShutdownSystem.c)
 *     MmVerifierTrimMemory @ 0x140BA67F8 (MmVerifierTrimMemory.c)
 * Callees:
 *     MiPurgePartitionStandby @ 0x14024DAA0 (MiPurgePartitionStandby.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiEmptyTargetedWorkingSet @ 0x140679A10 (MiEmptyTargetedWorkingSet.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1)
{
  _DWORD *v1; // r14
  unsigned int v3; // edi
  int i; // edx
  char *AnyMultiplexedVm; // rax
  int v6; // edx
  unsigned int v7; // r9d
  _DWORD *v8; // r8
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v11; // r15d
  int v12; // ebp
  char *v13; // r13
  int v14; // eax
  bool v15; // zf

  v1 = &unk_140E37540;
  v3 = 0;
  for ( i = 0; i <= 3; i = v7 + v6 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(i);
    if ( *v8 != *((_DWORD *)AnyMultiplexedVm + 1) )
      v3 |= v7 << v6;
  }
  if ( !v3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  CurrentThread->SpecialApcDisable -= v7;
  if ( v7 + _InterlockedExchangeAdd(&dword_140E37504, v7) == v7 )
  {
    v11 = v7;
    _InterlockedExchange64(&qword_140E37550, (__int64)KeGetCurrentThread());
    v12 = 0;
    do
    {
      if ( ((unsigned __int8)v3 & (unsigned __int8)v7) != 0 )
      {
        v13 = MiGetAnyMultiplexedVm(v12);
        v14 = MiEmptyTargetedWorkingSet((__int64)v13);
        v7 = v11;
        if ( v14 )
          *v1 = *((_DWORD *)v13 + 1);
      }
      v12 += v7;
      ++v1;
      v3 >>= 1;
    }
    while ( v3 );
    if ( a1 )
    {
      MiPurgePartitionStandby((__int64)&MiSystemPartition, 8u);
      LOWORD(v7) = v11;
    }
    _InterlockedExchange64(&qword_140E37550, 0LL);
  }
  _InterlockedDecrement(&dword_140E37504);
  v15 = (_WORD)v7 + CurrentThread->SpecialApcDisable == 0;
  CurrentThread->SpecialApcDisable += v7;
  if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v11;
}
