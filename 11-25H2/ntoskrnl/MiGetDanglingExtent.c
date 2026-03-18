/*
 * XREFs of MiGetDanglingExtent @ 0x14066F9B4
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiGetDanglingExtent(_QWORD *a1)
{
  __int64 v2; // r14
  __int64 *v3; // rdi
  __int64 *v4; // rax
  unsigned __int8 v5; // r8
  __int64 *v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v10; // rsi
  unsigned __int64 v11; // rdi
  int v12; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  ExAcquireSpinLockExclusive(dword_140E3A560);
  do
  {
    v4 = MiUnlinkPageChainHead((__int64)&qword_140E2D368);
    if ( !v4 )
      break;
    if ( !v2 )
      v3 = v4;
    ++v2;
  }
  while ( (__int64 *)qword_140E2D368 == v4 - 6 );
  MiReleaseSpinLockExclusive(dword_140E3A560, v5);
  if ( !v2 )
    return -1LL;
  v7 = &v3[-6 * v2];
  v8 = (unsigned __int64)(v7 + 6);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( v8 <= (unsigned __int64)v3 )
  {
    v10 = (volatile signed __int32 *)(v7 + 9);
    v11 = ((unsigned __int64)v3 - v8) / 0x30 + 1;
    do
    {
      v12 = 0;
      while ( _interlockedbittestandset64(v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *(__int64 *)v10 < 0 );
      }
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      v10 += 12;
      --v11;
    }
    while ( v11 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  *a1 = v2;
  return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x44000000006LL) >> 4);
}
