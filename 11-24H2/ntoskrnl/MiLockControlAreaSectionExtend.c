/*
 * XREFs of MiLockControlAreaSectionExtend @ 0x140414FF0
 * Callers:
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 */

__int64 __fastcall MiLockControlAreaSectionExtend(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile LONG *v5; // r14
  _QWORD *v6; // r15
  ULONG_PTR v7; // rbp
  KIRQL v8; // al
  __int64 *v9; // rcx
  unsigned __int8 v10; // r13
  _QWORD *v11; // rax
  __int64 *v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a2 + 8) == 16 )
    --CurrentThread->SpecialApcDisable;
  else
    --CurrentThread->KernelApcDisable;
  v5 = (volatile LONG *)(BugCheckParameter2 + 72);
  v6 = (_QWORD *)(a2 + 24);
  while ( 1 )
  {
    v7 = 0LL;
    v8 = ExAcquireSpinLockExclusive(v5);
    v9 = *(__int64 **)(BugCheckParameter2 + 80);
    v10 = v8;
    if ( v9 )
    {
      while ( 1 )
      {
        v13 = v9;
        if ( (*(_DWORD *)(a2 + 8) & (_DWORD)v9[1]) != 0 )
          break;
        v9 = (__int64 *)*v9;
        if ( !v9 )
          goto LABEL_5;
      }
      v14 = KeAbPreAcquire(BugCheckParameter2, 0LL);
      v7 = (ULONG_PTR)v14;
      v9 = v13;
      if ( v14 )
      {
        KeAbPreWait((__int64)v14, v15, v16);
        v9 = v13;
      }
    }
LABEL_5:
    *(_DWORD *)(a2 + 20) = 0;
    *(_WORD *)(a2 + 16) = 263;
    *(_BYTE *)(a2 + 18) = 6;
    v6[1] = v6;
    *v6 = v6;
    *(_QWORD *)a2 = *(_QWORD *)(BugCheckParameter2 + 80);
    *(_QWORD *)(BugCheckParameter2 + 80) = a2;
    if ( !v9 )
      break;
    MiReleaseSpinLockExclusive(v5, v10);
    KeWaitForGate(a2 + 16, 18LL);
    if ( v7 )
    {
      KeAbPreAcquire(BugCheckParameter2, v7);
      KeAbPostReleaseEx(BugCheckParameter2, v7);
    }
  }
  v11 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  return MiReleaseSpinLockExclusive(v5, v10);
}
