/*
 * XREFs of MiInitializeWorkingSetList @ 0x1404A5D8C
 * Callers:
 *     MiInitializeSystemWorkingSetList @ 0x1407EA844 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // eax
  unsigned __int8 v7; // bl
  __int16 v8; // [rsp+60h] [rbp+18h]

  v4 = *(_DWORD *)(a1 + 184);
  HIBYTE(v8) = BYTE1(v4);
  if ( (v4 & 0xF) != a3 )
  {
    LOBYTE(v8) = a3 & 0xF | v4 & 0xF0;
    *(_WORD *)(a1 + 184) = v8;
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
    v7 = MiLockWorkingSetShared(a1);
    MiLockNestedPageTable(a1, 0xFFFFF6FB7DBEDF68uLL);
    MiAllocateWsle(
      a1,
      0xFFFFF6FB7DBEDF68uLL,
      48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
      0,
      CLFS_LSN_NULL_EXT,
      32,
      0LL);
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
    MiUnlockWorkingSetShared(a1, v7);
  }
  return 0LL;
}
