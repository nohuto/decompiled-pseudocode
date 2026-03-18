/*
 * XREFs of MiInitializeWorkingSetList @ 0x1404A791C
 * Callers:
 *     MiInitializeSystemWorkingSetList @ 0x1407DA984 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 */

__int64 __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // eax
  unsigned __int8 v6; // bl
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 v10; // [rsp+60h] [rbp+18h]

  v4 = *(_DWORD *)(a1 + 184);
  HIBYTE(v10) = BYTE1(v4);
  if ( (v4 & 0xF) != a3 )
  {
    LOBYTE(v10) = a3 & 0xF | v4 & 0xF0;
    *(_WORD *)(a1 + 184) = v10;
  }
  if ( a3 )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_QWORD *)(a1 + 120) = a4;
    *(_QWORD *)(a1 + 16) = a2;
  }
  else
  {
    *(_QWORD *)(a1 - 376) = 1LL;
    *(_QWORD *)(a1 + 16) = a2;
    v6 = MiLockWorkingSetShared(a1);
    MiLockNestedPageTable(a1, 0xFFFFF6FB7DBEDF68uLL, v7, v8);
    MiAllocateWsle(
      a1,
      0xFFFFF6FB7DBEDF68uLL,
      48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
      0,
      CLFS_LSN_NULL_EXT,
      32,
      0LL);
    MiUnlockPageTable(a1, 0xFFFFF6FB7DBEDF68uLL);
    MiUnlockWorkingSetShared(a1, v6);
  }
  return 0LL;
}
