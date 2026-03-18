/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x140A7248C
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 * Callees:
 *     MiDecrementVadsBeingDeleted @ 0x1402A3F10 (MiDecrementVadsBeingDeleted.c)
 *     MiLockVadShared @ 0x1402A7C94 (MiLockVadShared.c)
 *     MiSetVadDeleted @ 0x14031F8D0 (MiSetVadDeleted.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A31480 (PerfInfoLogVirtualAlloc.c)
 */

LONG __fastcall MiFinishPlaceholderVadReplacement(unsigned int *P, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rsi
  __int16 *ProcessPartition; // rax
  unsigned __int64 v9; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a3 )
  {
    MiLockVadShared((__int64)CurrentThread, (__int64)P);
    if ( !(unsigned int)MiVadDeleted((__int64)P) && (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
    {
      ProcessPartition = (__int16 *)MiGetProcessPartition(Process);
      v9 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      PerfInfoLogVirtualAlloc(
        v9 << 12,
        ((P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) - v9 + 1) << 12,
        Process,
        0x2000,
        *ProcessPartition,
        *ProcessPartition);
    }
    MiUnlockAndDereferenceVadShared(P);
  }
  else
  {
    MiSetVadDeleted((__int64)P);
    MiDeleteVad((__int64)P, 0LL);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
