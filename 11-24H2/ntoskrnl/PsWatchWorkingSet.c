/*
 * XREFs of PsWatchWorkingSet @ 0x140442E10
 * Callers:
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 */

signed __int64 __fastcall PsWatchWorkingSet(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax
  volatile signed __int32 *v6; // r9
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int64 v9; // rdx
  bool v10; // zf
  unsigned __int16 v11; // dx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  signed __int32 v16; // eax
  int v17; // edx
  int v18; // ett

  CurrentThread = KeGetCurrentThread();
  result = (signed __int64)CurrentThread->ApcState.Process;
  v6 = *(volatile signed __int32 **)(result + 704);
  if ( v6 )
  {
    v7 = 0x4000000000000000LL;
    if ( a1 >= 276 )
      v7 = 0x8000000000000000uLL;
    _m_prefetchw((const void *)v6);
    result = *(unsigned int *)v6;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --CurrentThread->KernelApcDisable;
    do
    {
      if ( (result & 1) != 0 )
        goto LABEL_11;
      if ( ((unsigned __int16)result & 0xFFFEu) >= 0x800 )
        break;
      v17 = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + 2)) & 0xFFFE;
      v18 = result;
      result = (unsigned int)_InterlockedCompareExchange(v6, v17 ^ (v17 ^ (v17 + 0x10000)) & 0x7FFF0000, result);
    }
    while ( v18 != (_DWORD)result );
    if ( (result & 1) != 0 || ((unsigned __int16)result & 0xFFFEu) >= 0x800 )
    {
LABEL_11:
      _m_prefetchw((const void *)(v6 + 2));
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
    v13 = v11 >> 1;
    v14 = a3 | 1;
    if ( a1 >= 276 )
      v14 = v12;
    v15 = 3 * v13;
    *(_QWORD *)&v6[2 * v15 + 10] = a2;
    *(_QWORD *)&v6[6 * v13 + 12] = v14;
    *(_QWORD *)&v6[2 * v15 + 14] = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
    v16 = _InterlockedExchangeAdd(v6, 0xFFFF0000);
    if ( (v16 & 1) != 0 && (v16 & 0x7FFF0000) == 0x10000 )
      KeSignalGate(v6 + 4, 0LL);
    result = (signed __int64)CurrentThread->WaitBlock[0].SparePtr;
    if ( result )
      _InterlockedOr64((volatile signed __int64 *)result, v7);
LABEL_14:
    if ( !CurrentIrql )
      return (signed __int64)KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
