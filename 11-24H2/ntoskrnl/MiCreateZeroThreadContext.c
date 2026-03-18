/*
 * XREFs of MiCreateZeroThreadContext @ 0x1407FF2B0
 * Callers:
 *     MiStartZeroEngineThreads @ 0x1407FF9CC (MiStartZeroEngineThreads.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiGetClosestNodeWithProcessors @ 0x1403A85A4 (MiGetClosestNodeWithProcessors.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     MiSetZeroThreadState @ 0x1404A2C6C (MiSetZeroThreadState.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateZeroThreadContext(__int64 a1)
{
  unsigned int ClosestNodeWithProcessors; // eax
  ULONG_PTR v3; // r9
  unsigned int v4; // ebx
  __int64 PoolMm; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // r14
  _QWORD *v9; // r12
  __int64 v10; // r15
  _DWORD *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r9

  ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(*(_DWORD *)(*(_QWORD *)(a1 + 176) + 56LL));
  v3 = ClosestNodeWithProcessors;
  LODWORD(v3) = ClosestNodeWithProcessors | 0x80000000;
  v4 = ClosestNodeWithProcessors;
  PoolMm = ExAllocatePoolMm(0x40uLL, 0x2B0uLL, 1952082253, v3);
  v6 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  v8 = 0LL;
  v9 = (_QWORD *)(PoolMm + 608);
  v10 = 0LL;
  v11 = (_DWORD *)(PoolMm + 592);
  v12 = 4LL;
  do
  {
    *v11 = ExGenRandom(1);
    MiInitializePageColorBase(0LL, 3, v4 + 1, v10 + v6 + 608);
    v10 += 16LL;
    v13 = v8 + v6 + 592;
    ++v11;
    v8 += 4LL;
    *v9 = v13;
    v9 += 2;
    --v12;
  }
  while ( v12 );
  if ( !(unsigned int)MiCreateUltraThreadContext(v6 + 448, v6 + 608, 14, 8u) )
  {
    ExFreePoolWithTag((PVOID)v6, 0);
    return 0LL;
  }
  KeInitializeEvent((PRKEVENT)(v6 + 392), SynchronizationEvent, 0);
  MiSetZeroThreadState(v6, 2u);
  result = v6;
  *(_QWORD *)(v6 + 336) = a1;
  return result;
}
