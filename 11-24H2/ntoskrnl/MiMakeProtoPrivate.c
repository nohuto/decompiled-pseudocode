/*
 * XREFs of MiMakeProtoPrivate @ 0x140239334
 * Callers:
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLocateCloneAddress @ 0x1403E3608 (MiLocateCloneAddress.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiMakeProtoPrivate(__int64 a1, char a2, ULONG_PTR a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ebp
  __int64 CloneAddress; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)a3 >> 12;
  v15 = 0LL;
  v8 = 0LL;
  v9 = 48 * (v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v9 + 8) <= 0 )
  {
    CloneAddress = MiLocateCloneAddress(
                     KeGetCurrentThread()->ApcState.Process,
                     *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL,
                     a3);
    v8 = CloneAddress & -(__int64)(*(_QWORD *)(CloneAddress + 96) < *(_QWORD *)(*(_QWORD *)(v13 + 1040) + 1064LL));
  }
  v10 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, a3, (__int64)&v15);
  if ( v10 < 0 )
  {
    MiUnlockPageTableInternal(a1, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    LOBYTE(v14) = a2;
    MiUnlockWorkingSetShared(a1, v14);
    MiCopyOnWriteCheckConditions(a1, (unsigned int)v10, v15);
    return 2LL;
  }
  else
  {
    LOBYTE(v4) = v8 != 0;
    return v4;
  }
}
