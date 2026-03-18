/*
 * XREFs of KiAbProcessPreContextSwitch @ 0x140316AB0
 * Callers:
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 */

char __fastcall KiAbProcessPreContextSwitch(_QWORD *a1, int a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rax
  char v4; // bp
  char v5; // r14
  __int64 v7; // r14
  unsigned int v8; // ebx
  int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rax
  BOOL v12; // r9d
  __int64 v13; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *i; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rdi
  volatile signed __int16 *v20; // rsi
  signed __int32 v22[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _SINGLE_LIST_ENTRY v23; // [rsp+80h] [rbp+8h] BYREF
  int v24; // [rsp+88h] [rbp+10h]
  _QWORD *v25; // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h]

  v24 = a2;
  v2 = a1[143];
  v3 = a1 + 143;
  v4 = 0;
  v5 = a2;
  if ( v2 )
  {
    v7 = a1[100];
    v3 = a1 + 143;
    if ( v7 )
    {
      v8 = 0;
      v3 = a1 + 143;
      v9 = *(unsigned __int16 *)(v2 + 8);
      if ( *(_BYTE *)(v2 + 12) )
      {
        do
        {
          v10 = *(_QWORD *)(v7 + 8LL * v8);
          v26 = v10;
          if ( v10 )
          {
            if ( (v10 & 2) == 0 )
            {
              v18 = v2 + 88LL * v8;
              if ( v10 >= 0 || !*(_BYTE *)(v18 + 25) && (v10 & 1) != 0 )
              {
                v19 = v10 & 0x7FFFFFFFFFFFFFFCLL;
                if ( *(_QWORD *)(v18 + 16) )
                {
                  _disable();
                  KiAbEntryFreeAndEnableInterrupts(v18 + 16, (ULONG_PTR)a1, v19, 0, 0LL);
                  v9 |= 1 << v8;
                }
                if ( v19 )
                {
                  *(_QWORD *)(v18 + 16) = v19;
                  v9 &= ~(1 << v8);
                  *(_BYTE *)(v18 + 24) &= ~0x40u;
                  if ( (v26 & 1) != 0 )
                    *(_BYTE *)(v18 + 25) = 1;
                  HIBYTE(v26) |= 0x80u;
                  *(_QWORD *)(v7 + 8LL * v8) = v26;
                }
              }
            }
          }
          ++v8;
        }
        while ( v8 < *(unsigned __int8 *)(v2 + 12) );
        v3 = a1 + 143;
      }
      *(_WORD *)(v2 + 8) = v9;
    }
    v5 = v24;
  }
  v11 = *v3;
  if ( v11 )
    v12 = (unsigned int)(1LL << *(_BYTE *)(v11 + 12)) - 1 == (*(unsigned __int16 *)(v11 + 8) | *(unsigned __int16 *)(v11 + 10));
  else
    v12 = 1;
  v13 = a1[142];
  if ( (unsigned int)(1LL << *(_BYTE *)(v13 + 12)) - 1 != (*(unsigned __int16 *)(v13 + 8) | *(unsigned __int16 *)(v13 + 10))
    || !v12 )
  {
    v23.Next = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = 0LL;
    KiAbProcessThreadLocks((__int64)a1, 7, (__int64)&v23, &v25, &CurrentPrcb->AbSelfIoBoostsList.Next);
    for ( i = v25; v25; i = v25 )
    {
      v20 = (volatile signed __int16 *)(i - 101);
      v25 = (_QWORD *)*i;
      *i = 1LL;
      _InterlockedOr(v22, 0);
      if ( *((_BYTE *)i - 16) )
        KiAbProcessThreadLocks((__int64)(i - 101), 4, (__int64)&v23, &v25, &CurrentPrcb->AbSelfIoBoostsList.Next);
      _InterlockedDecrement16(v20 + 434);
    }
    Next = v23.Next;
    if ( v23.Next )
    {
      v23.Next = v23.Next->Next;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v23, 0LL);
        Next = v23.Next;
        ++v4;
        if ( v23.Next )
          v23.Next = v23.Next->Next;
        if ( (v4 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      }
      while ( Next );
    }
    LOBYTE(v13) = KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    if ( (v5 & 1) != 0 )
    {
      LOBYTE(v17) = 2;
      LOBYTE(v13) = KiCheckForThreadDispatch(CurrentPrcb, v17);
    }
  }
  return v13;
}
