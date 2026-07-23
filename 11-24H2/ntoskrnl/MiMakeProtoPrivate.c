/*
 * XREFs of MiMakeProtoPrivate @ 0x1403C9630
 * Callers:
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiMakeProtoPrivate(__int64 a1, unsigned __int8 a2, volatile signed __int64 *a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ebp
  __int64 CloneAddress; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (unsigned __int64)*a3 >> 12;
  v14 = 0LL;
  v8 = 0LL;
  v9 = 48 * (v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v9 + 8) <= 0 )
  {
    CloneAddress = MiLocateCloneAddress(
                     KeGetCurrentThread()->ApcState.Process,
                     *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL);
    v8 = CloneAddress & -(__int64)(*(_QWORD *)(CloneAddress + 96) < *(_QWORD *)(*(_QWORD *)(v13 + 1040) + 1064LL));
  }
  v10 = MiCopyOnWrite((__int64)((_QWORD)a3 << 25) >> 16, a3, 0xFFFFFFFFFFFFFFFFuLL, 0, &v14);
  if ( v10 < 0 )
  {
    MiUnlockPageTableInternal(a1, (((unsigned __int64)a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiUnlockWorkingSetShared(a1, a2);
    MiCopyOnWriteCheckConditions(a1, v10, v14);
    return 2LL;
  }
  else
  {
    LOBYTE(v4) = v8 != 0;
    return v4;
  }
}
