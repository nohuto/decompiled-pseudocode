/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x1403C8524
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiInsertPhysicalPteMapping @ 0x1403910B8 (MiInsertPhysicalPteMapping.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 */

__int64 __fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 v16; // bl
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v21[3]; // [rsp+20h] [rbp-48h] BYREF
  int v22; // [rsp+38h] [rbp-30h]
  int v23; // [rsp+3Ch] [rbp-2Ch]

  v23 = 0;
  v4 = *(unsigned __int8 *)(a2 + 32);
  v21[0] = a2;
  v22 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
  v7 = 8 * ((*(unsigned int *)(a2 + 24) | (unsigned __int64)(v4 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v10 = a1 + 1024;
  v11 = 0LL;
  MiLockVad((__int64)CurrentThread, a2);
  MiInsertVad(a2, a1, 0LL, v12);
  v16 = MiLockWorkingSetShared(a1 + 1024, v13, v14, v15);
  if ( v7 > v9 )
    goto LABEL_8;
  do
  {
    if ( v11 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(v10, v11);
    }
    MiMakeSystemAddressValid(v7, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v16, 0);
    v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_4:
    v21[1] = v7;
    v21[2] = a3;
    MiInsertPhysicalPteMapping((__int64)v21);
    v7 += 8LL;
    if ( (v7 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v10, 0)
       || (unsigned int)MiPageTableLockIsContended(v10, v11)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v10, v11);
      MiUnlockWorkingSetShared(v10, v16);
      v11 = 0LL;
      MiLockWorkingSetShared(v10, v18, v19, v20);
    }
    ++a3;
  }
  while ( v7 <= v9 );
  if ( v11 )
    MiUnlockPageTableInternal(v10, v11);
LABEL_8:
  MiUnlockWorkingSetShared(v10, v16);
  return MiUnlockVad(CurrentThread, a2);
}
