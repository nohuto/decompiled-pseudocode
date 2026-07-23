/*
 * XREFs of MiCreateZeroThreadContext @ 0x1407FF9F4
 * Callers:
 *     MiStartZeroEngineThreads @ 0x14080010C (MiStartZeroEngineThreads.c)
 * Callees:
 *     MiGetClosestNodeWithProcessors @ 0x14026FC80 (MiGetClosestNodeWithProcessors.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiSetZeroThreadState @ 0x14049DB8C (MiSetZeroThreadState.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateZeroThreadContext(__int64 a1)
{
  unsigned int ClosestNodeWithProcessors; // eax
  ULONG_PTR v3; // r9
  unsigned int v4; // ebx
  __int64 PoolMm; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // r14
  __int64 *v12; // r12
  __int64 v13; // r15
  _DWORD *v14; // r13
  __int64 v15; // rsi

  ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(*(_DWORD *)(*(_QWORD *)(a1 + 176) + 56LL));
  v3 = ClosestNodeWithProcessors;
  LODWORD(v3) = ClosestNodeWithProcessors | 0x80000000;
  v4 = ClosestNodeWithProcessors;
  PoolMm = ExAllocatePoolMm(0x40uLL, 0x2B0uLL, 1952082253, v3);
  v9 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  v11 = 0LL;
  v12 = (__int64 *)(PoolMm + 608);
  v13 = 0LL;
  v14 = (_DWORD *)(PoolMm + 592);
  v15 = 4LL;
  do
  {
    *v14 = ExGenRandom(1, v6, v7, v8);
    MiInitializePageColorBase(0LL, 3, v4 + 1, v13 + v9 + 608);
    v13 += 16LL;
    v8 = v11 + v9 + 592;
    ++v14;
    v11 += 4LL;
    *v12 = v8;
    v12 += 2;
    --v15;
  }
  while ( v15 );
  if ( !(unsigned int)MiCreateUltraThreadContext(v9 + 448, v9 + 608, 14, 8u) )
  {
    ExFreePoolWithTag((PVOID)v9, 0);
    return 0LL;
  }
  KeInitializeEvent((PRKEVENT)(v9 + 392), SynchronizationEvent, 0);
  MiSetZeroThreadState(v9, 2u);
  result = v9;
  *(_QWORD *)(v9 + 336) = a1;
  return result;
}
