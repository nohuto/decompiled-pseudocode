/*
 * XREFs of PspDetachSession @ 0x140348AEC
 * Callers:
 *     PsDetachSession @ 0x1405E6DB0 (PsDetachSession.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 *     PsQuitNextSession @ 0x140A0B390 (PsQuitNextSession.c)
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
  KiUnstackDetachProcess(a2, 0);
  if ( v4 )
    KeSignalGate(v4 + 14, 1LL);
  return PsQuitNextSession(a1);
}
