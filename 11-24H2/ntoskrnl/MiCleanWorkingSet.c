/*
 * XREFs of MiCleanWorkingSet @ 0x140462994
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiDrainSystemAccessLog @ 0x140462A14 (MiDrainSystemAccessLog.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 v3; // di
  __int64 v4; // rbx

  v1 = a1 + 1024;
  v3 = MiLockWorkingSetExclusive(a1 + 1024);
  *(_BYTE *)(v1 + 187) = HIBYTE(*(_DWORD *)(v1 + 184)) | 1;
  --*(_QWORD *)(a1 + 648);
  MiDrainSystemAccessLog(v1);
  v4 = *(_QWORD *)(v1 + 112);
  MiUnlockWorkingSetExclusive(v1, v3);
  return v4 - 4;
}
