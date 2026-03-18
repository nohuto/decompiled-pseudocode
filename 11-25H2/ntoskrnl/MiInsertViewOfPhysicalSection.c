/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x1402A496C
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiInsertPhysicalPteMapping @ 0x140338440 (MiInsertPhysicalPteMapping.c)
 *     MiPageTableLockIsContended @ 0x140338780 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 */

__int64 __fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  char v13; // bl
  __int64 v15; // rdx
  _QWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+3Ch] [rbp-2Ch]

  v18 = 0;
  v4 = *(unsigned __int8 *)(a2 + 32);
  v16[0] = a2;
  v17 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
  v7 = 8 * ((*(unsigned int *)(a2 + 24) | (unsigned __int64)(v4 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v10 = a1 + 1024;
  v11 = 0LL;
  MiLockVad(CurrentThread, a2);
  MiInsertVad(a2, a1, 0LL);
  v13 = MiLockWorkingSetShared(a1 + 1024);
  if ( v7 > v9 )
    goto LABEL_8;
  do
  {
    if ( v11 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTable(v10, v11);
    }
    MiMakeSystemAddressValid(v7);
    v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_4:
    v16[1] = v7;
    v16[2] = a3;
    MiInsertPhysicalPteMapping(v16);
    v7 += 8LL;
    if ( (v7 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v10, 0LL)
       || (unsigned int)MiPageTableLockIsContended(v10, v11)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTable(v10, v11);
      LOBYTE(v15) = v13;
      MiUnlockWorkingSetShared(v10, v15);
      v11 = 0LL;
      MiLockWorkingSetShared(v10);
    }
    ++a3;
  }
  while ( v7 <= v9 );
  if ( v11 )
    MiUnlockPageTable(v10, v11);
LABEL_8:
  LOBYTE(v12) = v13;
  MiUnlockWorkingSetShared(v10, v12);
  return MiUnlockVad(CurrentThread, a2);
}
