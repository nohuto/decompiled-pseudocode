/*
 * XREFs of KiAbProcessPreContextSwitch @ 0x1402A5600
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 */

__int64 __fastcall KiAbProcessPreContextSwitch(_QWORD *a1, int a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rax
  char v4; // bp
  __int64 v6; // r14
  unsigned int v7; // ebx
  int v8; // r12d
  __int64 v9; // rdi
  __int64 v10; // rax
  BOOL v11; // r9d
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *i; // rcx
  _QWORD *v15; // rbx
  char v16; // si
  __int64 v17; // r15
  __int64 v18; // rdi
  volatile signed __int16 *v19; // rsi
  signed __int32 v20[8]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v21; // [rsp+80h] [rbp+8h] BYREF
  int v22; // [rsp+88h] [rbp+10h]
  _QWORD *v23; // [rsp+90h] [rbp+18h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h]

  v22 = a2;
  v2 = a1[143];
  v3 = a1 + 143;
  v4 = a2;
  if ( v2 )
  {
    v3 = a1 + 143;
    v6 = a1[100];
    if ( v6 )
    {
      v7 = 0;
      v3 = a1 + 143;
      v8 = *(unsigned __int16 *)(v2 + 8);
      if ( *(_BYTE *)(v2 + 12) )
      {
        do
        {
          v9 = *(_QWORD *)(v6 + 8LL * v7);
          v24 = v9;
          if ( v9 )
          {
            if ( (v9 & 2) == 0 )
            {
              v17 = v2 + 88LL * v7;
              if ( v9 >= 0 || !*(_BYTE *)(v17 + 25) && (v9 & 1) != 0 )
              {
                v18 = v9 & 0x7FFFFFFFFFFFFFFCLL;
                if ( *(_QWORD *)(v17 + 16) )
                {
                  _disable();
                  KiAbEntryFreeAndEnableInterrupts(v17 + 16, (ULONG_PTR)a1, v18, 0LL, 0LL);
                  v8 |= 1 << v7;
                }
                if ( v18 )
                {
                  *(_QWORD *)(v17 + 16) = v18;
                  v8 &= ~(1 << v7);
                  *(_BYTE *)(v17 + 24) &= ~0x40u;
                  if ( (v24 & 1) != 0 )
                    *(_BYTE *)(v17 + 25) = 1;
                  HIBYTE(v24) |= 0x80u;
                  *(_QWORD *)(v6 + 8LL * v7) = v24;
                }
              }
            }
          }
          ++v7;
        }
        while ( v7 < *(unsigned __int8 *)(v2 + 12) );
        v3 = a1 + 143;
        v4 = v22;
      }
      *(_WORD *)(v2 + 8) = v8;
    }
  }
  v10 = *v3;
  if ( v10 )
    v11 = (unsigned int)(1LL << *(_BYTE *)(v10 + 12)) - 1 == (*(unsigned __int16 *)(v10 + 8) | *(unsigned __int16 *)(v10 + 10));
  else
    v11 = 1;
  result = a1[142];
  if ( (unsigned int)(1LL << *(_BYTE *)(result + 12)) - 1 != (*(unsigned __int16 *)(result + 8) | *(unsigned __int16 *)(result + 10))
    || !v11 )
  {
    v21 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = 0LL;
    KiAbProcessThreadLocks((__int64)a1, 7, (__int64)&v21, &v23, &CurrentPrcb->AbSelfIoBoostsList.Next);
    for ( i = v23; v23; i = v23 )
    {
      v19 = (volatile signed __int16 *)(i - 101);
      v23 = (_QWORD *)*i;
      *i = 1LL;
      _InterlockedOr(v20, 0);
      if ( *((_BYTE *)i - 16) )
        KiAbProcessThreadLocks((__int64)(i - 101), 4, (__int64)&v21, &v23, &CurrentPrcb->AbSelfIoBoostsList.Next);
      _InterlockedDecrement16(v19 + 434);
    }
    v15 = v21;
    if ( v21 )
    {
      v16 = 0;
      v21 = (_QWORD *)*v21;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, v15 - 27, &v21, 0LL);
        v15 = v21;
        ++v16;
        if ( v21 )
          v21 = (_QWORD *)*v21;
        if ( (v16 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      }
      while ( v15 );
    }
    result = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    if ( (v4 & 1) != 0 )
      return KiCheckForThreadDispatch(CurrentPrcb);
  }
  return result;
}
