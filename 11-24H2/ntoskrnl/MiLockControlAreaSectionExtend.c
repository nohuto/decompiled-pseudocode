/*
 * XREFs of MiLockControlAreaSectionExtend @ 0x140270E50
 * Callers:
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiLockControlAreaSectionExtend(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile LONG *v5; // r14
  _QWORD *v6; // r15
  __int64 v7; // rbp
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 *v10; // rcx
  KIRQL v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v15; // r12
  __int64 v16; // rax

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
    v10 = *(__int64 **)(BugCheckParameter2 + 80);
    v11 = v8;
    if ( v10 )
    {
      v9 = *(unsigned int *)(a2 + 8);
      while ( 1 )
      {
        v15 = v10;
        if ( ((unsigned int)v9 & (_DWORD)v10[1]) != 0 )
          break;
        v10 = (__int64 *)*v10;
        if ( !v10 )
          goto LABEL_5;
      }
      v16 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
      v7 = v16;
      v10 = v15;
      if ( v16 )
      {
        KeAbPreWait(v16);
        v10 = v15;
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
    if ( !v10 )
      break;
    LOBYTE(v9) = v11;
    MiReleaseSpinLockExclusive(v5, v9);
    KeWaitForGate(a2 + 16, 18LL);
    if ( v7 )
    {
      KeAbPreAcquire(BugCheckParameter2, v7, 0LL);
      KeAbPostReleaseEx(BugCheckParameter2);
    }
  }
  v12 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  if ( v12 )
    *(_BYTE *)(v12 + 10) = 1;
  LOBYTE(v13) = v11;
  return MiReleaseSpinLockExclusive(v5, v13);
}
