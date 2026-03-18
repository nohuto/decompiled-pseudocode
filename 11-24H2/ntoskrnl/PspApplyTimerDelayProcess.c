/*
 * XREFs of PspApplyTimerDelayProcess @ 0x1405E5820
 * Callers:
 *     PspTimerDelayProcess @ 0x1405E5F60 (PspTimerDelayProcess.c)
 *     PspTimerDelayWorkerRoutine @ 0x1405E5FD0 (PspTimerDelayWorkerRoutine.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405E5CE0 (PspSetProcessTimerDelayForKTimers.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405E5E58 (PspSetProcessTimerDelayForWin32.c)
 */

__int64 __fastcall PspApplyTimerDelayProcess(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v4; // esi
  unsigned __int64 v6; // rdi
  unsigned int v7; // kr00_4
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  signed __int64 v10; // rax
  unsigned __int64 v11; // rdi
  signed __int64 v12; // rtt
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int64 i; // rax
  signed __int64 v17; // rdi
  bool v18; // zf

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v6 = 0LL;
  --CurrentThread->SpecialApcDisable;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 4u);
  if ( a2 )
  {
    LOBYTE(a3) = 0;
    v7 = *(_DWORD *)(a2 + 4);
    a2 = (*(_DWORD *)a2 / 0x2710u) & 0x3FFFFFFF;
    v6 = a2 | ((unsigned __int64)((v7 / 0x2710) & 0x3FFFFFFF) << 30);
  }
  else
  {
    LOBYTE(a3) = 1;
  }
  v8 = *(_QWORD *)(a1 + 1776);
  if ( (_BYTE)a3 )
  {
    v9 = v8 | (v8 >> 30);
    if ( (v9 & 0x3FFFFFFF) == 0 )
      goto LABEL_24;
    v6 = v8 & 0xFFFFFFFFFFFFFFFLL;
  }
  else if ( (((unsigned int)v6 ^ (unsigned int)v8) & 0x3FFFFFFF) == 0 )
  {
    a2 = v6 & 0xFFFFFFFFC0000000uLL;
    v9 = v8 & 0xFFFFFFFC0000000LL;
    if ( (v8 & 0xFFFFFFFC0000000LL) == (v6 & 0xFFFFFFFFC0000000uLL) )
      goto LABEL_24;
  }
  v10 = v8 & 0x7FFFFFFFFFFFFFFFLL;
  v9 = ((unsigned __int64)(unsigned __int8)a3 << 61) | 0x8000000000000000uLL;
  a2 = 0x4000000000000000LL;
  v11 = v9 | v6;
  while ( 1 )
  {
    v12 = v10;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1776), v11, v10);
    if ( v12 == v10 )
      break;
    if ( v10 < 0 )
    {
      if ( (_BYTE)a3 )
      {
        v11 = v10 ^ (v10 ^ v11) & 0xF000000000000000uLL;
      }
      else if ( (v10 & 0x2000000000000000LL) == 0 )
      {
        goto LABEL_24;
      }
      v11 |= 0x4000000000000000uLL;
    }
    else
    {
      v9 = 0xBFFFFFFFFFFFFFFFuLL;
      v11 &= ~0x4000000000000000uLL;
      if ( (_BYTE)a3 )
        v11 = v10 ^ (v10 ^ v11) & 0xF000000000000000uLL;
    }
  }
  if ( (v11 & 0x4000000000000000LL) == 0 )
  {
    v13 = v11;
    PspSetProcessTimerDelayForKTimers(a1, 0x4000000000000000LL, a3, 0xF000000000000000uLL);
    v4 = PspSetProcessTimerDelayForWin32(a1);
    for ( i = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1776), v11 & 0x1FFFFFFFFFFFFFFFLL, v11);
          ;
          i = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1776), v17 & 0x1FFFFFFFFFFFFFFFLL, v17) )
    {
      v17 = i;
      if ( v13 == i )
        break;
      v13 = i;
      PspSetProcessTimerDelayForKTimers(a1, a2, v14, v15);
      v4 = PspSetProcessTimerDelayForWin32(a1);
      v9 = v17 & 0x1FFFFFFFFFFFFFFFLL;
    }
  }
LABEL_24:
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v9, a2);
  return v4;
}
