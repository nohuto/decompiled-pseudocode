/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x140A69CDC
 * Callers:
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDecrementVadsBeingDeleted @ 0x140229A10 (MiDecrementVadsBeingDeleted.c)
 *     MiLockVadShared @ 0x140345480 (MiLockVadShared.c)
 *     MiSetVadDeleted @ 0x140360BE0 (MiSetVadDeleted.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A2C1A8 (PerfInfoLogVirtualAlloc.c)
 */

LONG __fastcall MiFinishPlaceholderVadReplacement(unsigned __int8 *P, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 *ProcessPartition; // rax
  unsigned __int64 v12; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a3 )
  {
    MiLockVadShared((__int64)CurrentThread, (__int64)P);
    if ( !(unsigned int)MiVadDeleted((__int64)P) && (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
    {
      ProcessPartition = (__int16 *)MiGetProcessPartition(Process);
      v12 = *((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32);
      PerfInfoLogVirtualAlloc(
        v12 << 12,
        ((*((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32)) - v12 + 1) << 12,
        Process,
        0x2000,
        *ProcessPartition,
        *ProcessPartition);
    }
    MiUnlockAndDereferenceVadShared((__int64)P, v8, v9, v10);
  }
  else
  {
    MiSetVadDeleted((__int64)P);
    MiDeleteVad(P, 0LL);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
