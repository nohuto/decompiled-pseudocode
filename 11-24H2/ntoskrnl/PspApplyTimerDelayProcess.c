/*
 * XREFs of PspApplyTimerDelayProcess @ 0x1405E2DC8
 * Callers:
 *     PspTimerDelayProcess @ 0x1405E3500 (PspTimerDelayProcess.c)
 *     PspTimerDelayWorkerRoutine @ 0x1405E3570 (PspTimerDelayWorkerRoutine.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405E3280 (PspSetProcessTimerDelayForKTimers.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405E33F8 (PspSetProcessTimerDelayForWin32.c)
 */

__int64 __fastcall PspApplyTimerDelayProcess(__int64 a1, _DWORD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v4; // esi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  signed __int64 v8; // rax
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rtt
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  signed __int64 i; // rax
  signed __int64 v16; // rdi
  bool v17; // zf

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v6 = 0LL;
  --CurrentThread->SpecialApcDisable;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 4u);
  if ( a2 )
  {
    LOBYTE(a3) = 0;
    v6 = (*a2 / 0x2710u) & 0x3FFFFFFF | ((unsigned __int64)((a2[1] / 0x2710u) & 0x3FFFFFFF) << 30);
  }
  else
  {
    LOBYTE(a3) = 1;
  }
  v7 = *(_QWORD *)(a1 + 1776);
  if ( (_BYTE)a3 )
  {
    if ( ((v7 | (v7 >> 30)) & 0x3FFFFFFF) == 0 )
      goto LABEL_24;
    v6 = v7 & 0xFFFFFFFFFFFFFFFLL;
  }
  else if ( (((unsigned int)v6 ^ (unsigned int)v7) & 0x3FFFFFFF) == 0
         && (v7 & 0xFFFFFFFC0000000LL) == (v6 & 0xFFFFFFFFC0000000uLL) )
  {
    goto LABEL_24;
  }
  v8 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v9 = ((unsigned __int64)(unsigned __int8)a3 << 61) | 0x8000000000000000uLL | v6;
  while ( 1 )
  {
    v10 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1776), v9, v8);
    if ( v10 == v8 )
      break;
    if ( v8 < 0 )
    {
      if ( (_BYTE)a3 )
      {
        v9 = v8 ^ (v8 ^ v9) & 0xF000000000000000uLL;
      }
      else if ( (v8 & 0x2000000000000000LL) == 0 )
      {
        goto LABEL_24;
      }
      v9 |= 0x4000000000000000uLL;
    }
    else
    {
      v9 &= ~0x4000000000000000uLL;
      if ( (_BYTE)a3 )
        v9 = v8 ^ (v8 ^ v9) & 0xF000000000000000uLL;
    }
  }
  if ( (v9 & 0x4000000000000000LL) == 0 )
  {
    v11 = v9;
    PspSetProcessTimerDelayForKTimers(a1, 0x4000000000000000LL, a3, 0xF000000000000000uLL);
    v4 = PspSetProcessTimerDelayForWin32(a1);
    for ( i = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1776), v9 & 0x1FFFFFFFFFFFFFFFLL, v9);
          ;
          i = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1776), v16 & 0x1FFFFFFFFFFFFFFFLL, v16) )
    {
      v16 = i;
      if ( v11 == i )
        break;
      v11 = i;
      PspSetProcessTimerDelayForKTimers(a1, v12, v13, v14);
      v4 = PspSetProcessTimerDelayForWin32(a1);
    }
  }
LABEL_24:
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v4;
}
