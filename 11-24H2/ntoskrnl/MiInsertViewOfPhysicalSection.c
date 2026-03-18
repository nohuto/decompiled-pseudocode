/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x1403CEF18
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     MiPageTableLockIsContended @ 0x1403CFFE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 */

_QWORD *__fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int8 v12; // bl
  _QWORD v14[3]; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+3Ch] [rbp-2Ch]

  v16 = 0;
  v4 = *(unsigned __int8 *)(a2 + 32);
  v14[0] = a2;
  v15 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
  v7 = 8 * ((*(unsigned int *)(a2 + 24) | (unsigned __int64)(v4 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v10 = a1 + 1024;
  v11 = 0LL;
  MiLockVad((__int64)CurrentThread, a2);
  MiInsertVad(a2, a1, 0);
  v12 = MiLockWorkingSetShared(a1 + 1024);
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
    MiMakeSystemAddressValid(v7, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v12, 0);
    v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_4:
    v14[1] = v7;
    v14[2] = a3;
    MiInsertPhysicalPteMapping(v14);
    v7 += 8LL;
    if ( (v7 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v10, 0LL)
       || (unsigned int)MiPageTableLockIsContended(v10, v11)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v10, v11);
      MiUnlockWorkingSetShared(v10, v12);
      v11 = 0LL;
      MiLockWorkingSetShared(v10);
    }
    ++a3;
  }
  while ( v7 <= v9 );
  if ( v11 )
    MiUnlockPageTableInternal(v10, v11);
LABEL_8:
  MiUnlockWorkingSetShared(v10, v12);
  return MiUnlockVad((__int64)CurrentThread, a2);
}
