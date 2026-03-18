/*
 * XREFs of PsWatchWorkingSet @ 0x14044BCD0
 * Callers:
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 */

signed __int64 __fastcall PsWatchWorkingSet(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax
  unsigned int *v6; // r9
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int64 v9; // rdx
  bool v10; // zf
  unsigned __int16 v11; // dx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  signed __int32 v14; // eax
  int v15; // edx
  int v16; // ett

  CurrentThread = KeGetCurrentThread();
  result = (signed __int64)CurrentThread->ApcState.Process;
  v6 = *(unsigned int **)(result + 704);
  if ( v6 )
  {
    v7 = 0x4000000000000000LL;
    if ( a1 >= 276 )
      v7 = 0x8000000000000000uLL;
    _m_prefetchw(v6);
    result = *v6;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --CurrentThread->KernelApcDisable;
    do
    {
      if ( (result & 1) != 0 )
        goto LABEL_11;
      if ( ((unsigned __int16)result & 0xFFFEu) >= 0x800 )
        break;
      v15 = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + 2)) & 0xFFFE;
      v16 = result;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)v6,
                               v15 ^ (v15 ^ (v15 + 0x10000)) & 0x7FFF0000,
                               result);
    }
    while ( v16 != (_DWORD)result );
    if ( (result & 1) != 0 || ((unsigned __int16)result & 0xFFFEu) >= 0x800 )
    {
LABEL_11:
      _m_prefetchw(v6 + 2);
      v9 = *((_QWORD *)v6 + 1);
      do
      {
        if ( v9 == -1 )
          break;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 1, v9 + 1, v9);
        v10 = v9 == result;
        v9 = result;
      }
      while ( !v10 );
      goto LABEL_14;
    }
    v11 = result;
    v12 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
    v9 = v11 >> 1;
    a3 |= 1uLL;
    if ( a1 >= 276 )
      a3 = v12;
    v13 = 3 * v9;
    *(_QWORD *)&v6[2 * v13 + 10] = a2;
    *(_QWORD *)&v6[6 * v9 + 12] = a3;
    *(_QWORD *)&v6[2 * v13 + 14] = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFF0000);
    if ( (v14 & 1) != 0 && (v14 & 0x7FFF0000) == 0x10000 )
      KeSignalGate(v6 + 4, 0LL);
    result = (signed __int64)CurrentThread->WaitBlock[0].SparePtr;
    if ( result )
      _InterlockedOr64((volatile signed __int64 *)result, v7);
LABEL_14:
    if ( !CurrentIrql )
      return (signed __int64)KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9, a3, (__int64)v6);
  }
  return result;
}
