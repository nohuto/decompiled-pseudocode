/*
 * XREFs of ExGetNextWakeTime @ 0x140B6FA08
 * Callers:
 *     PopIsWakeTimerImmanent @ 0x140753378 (PopIsWakeTimerImmanent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoStoreDiagnosticContext @ 0x1402BA9FC (PoStoreDiagnosticContext.c)
 *     KeQueryTimerDueTime @ 0x140488D50 (KeQueryTimerDueTime.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall ExGetNextWakeTime(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  __int64 v6; // rbp
  unsigned __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  KIRQL v13; // al
  __int64 v14; // r13
  _BYTE *v15; // rcx
  KIRQL v16; // dl
  __int64 TimerDueTime; // rax
  unsigned __int64 *Pool2; // rax
  ULONG_PTR v20; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h]
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]

  v20 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = (__int64 *)ExpWakeTimerList;
  v21 = MEMORY[0xFFFFF78000000008];
  if ( (__int64 *)ExpWakeTimerList == &ExpWakeTimerList )
    goto LABEL_19;
  do
  {
    v11 = (__int64)(v9 - 33);
    v12 = 0LL;
    v9 = (__int64 *)*v9;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 64));
    v14 = *(_QWORD *)(v11 + 256);
    v15 = (_BYTE *)(v11 + 304);
    NewIrql = v13;
    v16 = v13;
    if ( a3 && (*v15 & 4) == 0 )
      goto LABEL_12;
    if ( (*v15 & 2) != 0 )
    {
      TimerDueTime = *(_QWORD *)(v11 + 312);
      if ( *(_BYTE *)(v11 + 248) == 1 )
      {
        v12 = 0LL;
        if ( TimerDueTime )
          v12 = v21 + TimerDueTime - v8;
        goto LABEL_10;
      }
    }
    else
    {
      TimerDueTime = KeQueryTimerDueTime(v11);
      v16 = NewIrql;
    }
    v12 = TimerDueTime;
LABEL_10:
    if ( v12 < a1 )
      v12 = 0LL;
LABEL_12:
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 64), v16);
    if ( v12 - 1 < a2 - 1 )
    {
      a2 = v12;
      v6 = v14;
    }
  }
  while ( v9 != &ExpWakeTimerList );
  v7 = 0LL;
  if ( v6 )
  {
    PoStoreDiagnosticContext(v6, 0LL, &v20);
    Pool2 = (unsigned __int64 *)ExAllocatePool2(0x100uLL, v20, 0x53577254u);
    v7 = Pool2;
    if ( Pool2 )
    {
      if ( (int)PoStoreDiagnosticContext(v6, Pool2, &v20) < 0 )
      {
        ExFreePoolWithTag(v7, 0x53577254u);
        v7 = 0LL;
      }
    }
  }
LABEL_19:
  *a4 = a2;
  *a5 = v7;
  return v6 != 0;
}
