/*
 * XREFs of PspDetachSession @ 0x1403C252C
 * Callers:
 *     PsDetachSession @ 0x1405E43B0 (PsDetachSession.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 *     PsQuitNextSession @ 0x140A0A5D0 (PsQuitNextSession.c)
 */

__int64 __fastcall PspDetachSession(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  int v6; // eax
  int v7; // r8d
  __int64 v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 744);
  PspLockProcessListExclusive(CurrentThread);
  v6 = *(_DWORD *)(v4 + 4);
  v7 = *(_DWORD *)(v4 + 52) - 1;
  *(_DWORD *)(v4 + 52) = v7;
  if ( (v6 & 2) == 0 || v7 )
    v4 = 0LL;
  PspUnlockProcessListExclusive(CurrentThread);
  KiUnstackDetachProcess(a2, 0, v8, v9);
  if ( v4 )
    KeSignalGate((volatile signed __int32 *)(v4 + 56), 1LL);
  return PsQuitNextSession(a1);
}
