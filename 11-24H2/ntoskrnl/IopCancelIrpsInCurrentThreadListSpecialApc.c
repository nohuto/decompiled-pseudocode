/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140487180
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAlertThread @ 0x140475190 (KeAlertThread.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListSpecialApc(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v6; // r14
  char v7; // bp
  KIRQL v8; // al
  KIRQL v9; // r9
  unsigned int *v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r8d
  __int64 v16; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread);
  v9 = v8;
  v10 = *(unsigned int **)&CurrentThread[1].SystemCallNumber;
  *v6 = 0;
  *(_DWORD *)(a1 + 132) = 0;
  if ( &CurrentThread[1].SystemCallNumber == v10 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread, v8);
  }
  else
  {
    do
    {
      if ( *((char *)v10 + 35) < *((char *)v10 + 34) + 2 )
      {
        v12 = *(_QWORD *)(a1 + 96);
        if ( !v12 || (v13 = *(_QWORD *)(a1 + 96), *((_QWORD *)v10 + 5) == v12) )
        {
          v14 = *(_QWORD *)(a1 + 88);
          if ( !v14 || (v13 = *(_QWORD *)(a1 + 96), *((_QWORD *)v10 + 20) == v14) )
          {
            v15 = *(v10 - 4);
            v13 = *(_QWORD *)(a1 + 96);
            if ( (v15 & 0x402) == 0 && ((v15 & 0x84) != 0 || (*((_BYTE *)v10 + 39) & 2) != 0) )
            {
              *((_BYTE *)v10 + 36) = 1;
              v7 = 1;
              *v6 = 1;
              v13 = *(_QWORD *)(a1 + 96);
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
        if ( !*(_BYTE *)(a1 + 128) && (!v13 || *((_QWORD *)v10 + 5) == v13) )
        {
          v16 = *(_QWORD *)(a1 + 88);
          if ( (!v16 || *((_QWORD *)v10 + 20) == v16) && (*(v10 - 4) & 2) == 0 )
          {
            *v6 = 1;
            *(_DWORD *)(a1 + 132) = 1;
          }
        }
      }
      v10 = *(unsigned int **)v10;
    }
    while ( &CurrentThread[1].SystemCallNumber != v10 );
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread, v9);
    if ( v7 )
      KeAlertThread((__int64)CurrentThread, 0LL);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
