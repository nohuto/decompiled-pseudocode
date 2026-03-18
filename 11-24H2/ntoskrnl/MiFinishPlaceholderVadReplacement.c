/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x140A7084C
 * Callers:
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDecrementVadsBeingDeleted @ 0x140274480 (MiDecrementVadsBeingDeleted.c)
 *     MiSetVadDeleted @ 0x1402B94A0 (MiSetVadDeleted.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x1402FC580 (MiLockVadShared.c)
 *     MiVadDeleted @ 0x140428540 (MiVadDeleted.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A37358 (PerfInfoLogVirtualAlloc.c)
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
