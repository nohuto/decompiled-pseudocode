/*
 * XREFs of MiInitializeVadCellBitMap @ 0x14091A2FC
 * Callers:
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x140918A94 (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadCellBitMap(unsigned __int64 *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v5; // r8
  __int64 Process; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  int v9; // esi

  CurrentThread = KeGetCurrentThread();
  v5 = a1[8] >> 15 << 12;
  Process = (__int64)CurrentThread->ApcState.Process;
  v7 = *(_QWORD *)(Process + 1040);
  a1[2] = a1[8] & 0x7FFF;
  v8 = qword_140E2F3C8 + v5;
  *a1 = 0LL;
  a1[1] = v8;
  if ( a2 )
    ++*(_QWORD *)(v7 + 984);
  else
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  v9 = MiExpandVadBitMap(a1, 1uLL, 0LL, 0LL);
  if ( !v9 )
  {
    if ( a2 )
      --*(_QWORD *)(v7 + 984);
    *a1 = 0LL;
  }
  a1[4] = a1[2];
  if ( !a2 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  return v9 == 0 ? 0xC0000017 : 0;
}
