/*
 * XREFs of MiCommitEnclavePages @ 0x14046D738
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 */

__int64 __fastcall MiCommitEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  unsigned int v9; // edi
  ULONG_PTR v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int8 v14; // al
  unsigned __int8 v16; // r15
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int8 v23[8]; // [rsp+80h] [rbp+28h]

  if ( a5 != 4096 )
    return 3221225715LL;
  v6 = a6;
  if ( (a6 & 7) == 0 || a6 > 7 || (a6 & 5) == 5 )
    return 3221225714LL;
  v7 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0;
  v10 = v7;
  v11 = 0LL;
  v12 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v14 = MiLockWorkingSetShared((__int64)p_Blink, 0x7FFFFFFFF8LL, a3, a4);
  v23[0] = v14;
  if ( v7 > v8 )
    goto LABEL_6;
  v16 = v14;
  do
  {
    if ( (v10 & 0x78) != 0 || v10 == v7 )
    {
      if ( !v12 )
        goto LABEL_12;
    }
    else
    {
      if ( (unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0) || KeShouldYieldProcessor() )
      {
        if ( v12 )
LABEL_29:
          MiUnlockPageTableInternal((__int64)p_Blink, v12);
        MiUnlockWorkingSetShared((__int64)p_Blink, v16);
        MiLockWorkingSetShared((__int64)p_Blink, v19, v20, v21);
LABEL_12:
        v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v10, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v16, 0);
        goto LABEL_13;
      }
      if ( !v12 )
        goto LABEL_12;
      if ( (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v12) )
        goto LABEL_29;
    }
    if ( (v10 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal((__int64)p_Blink, v12);
      goto LABEL_12;
    }
LABEL_13:
    v17 = (MI_READ_PTE_LOCK_FREE(v10) & 1) == 0;
    v18 = v11 + 1;
    if ( !v17 )
      v18 = v11;
    v10 += 8LL;
    v11 = v18;
  }
  while ( v10 <= v8 );
  v6 = a6;
  if ( v12 )
    MiUnlockPageTableInternal((__int64)p_Blink, v12);
  v14 = v23[0];
LABEL_6:
  MiUnlockWorkingSetShared((__int64)p_Blink, v14);
  if ( v11 )
    return (unsigned int)MiAddPagesToEnclave(a2, v11, v7, v8, v6);
  return v9;
}
