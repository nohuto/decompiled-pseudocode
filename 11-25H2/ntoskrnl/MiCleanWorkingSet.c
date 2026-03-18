/*
 * XREFs of MiCleanWorkingSet @ 0x1403C3D9C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiDrainSystemAccessLog @ 0x1403C3E1C (MiDrainSystemAccessLog.c)
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
