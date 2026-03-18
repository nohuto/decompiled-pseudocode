/*
 * XREFs of MiCleanWorkingSet @ 0x140469A70
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiDrainSystemAccessLog @ 0x140469AF0 (MiDrainSystemAccessLog.c)
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
