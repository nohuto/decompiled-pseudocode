/*
 * XREFs of PspDetachSession @ 0x1403D6470
 * Callers:
 *     PsDetachSession @ 0x1405DAC60 (PsDetachSession.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 * Callees:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
 *     PsQuitNextSession @ 0x140A070D0 (PsQuitNextSession.c)
 */

__int64 __fastcall PspDetachSession(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v4; // rbx
  int v6; // eax
  int v7; // r8d

  CurrentThread = KeGetCurrentThread();
  v4 = *(_DWORD **)(a1 + 744);
  PspLockProcessListExclusive(CurrentThread);
  v6 = v4[1];
  v7 = v4[13] - 1;
  v4[13] = v7;
  if ( (v6 & 2) == 0 || v7 )
    v4 = 0LL;
  PspUnlockProcessListExclusive(CurrentThread);
  KiUnstackDetachProcess(a2, 0LL);
  if ( v4 )
    KeSignalGate(v4 + 14, 1);
  return PsQuitNextSession(a1);
}
