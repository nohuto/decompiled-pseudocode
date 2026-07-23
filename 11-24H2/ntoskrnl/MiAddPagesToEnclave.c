/*
 * XREFs of MiAddPagesToEnclave @ 0x14046D958
 * Callers:
 *     MiCommitEnclavePages @ 0x14046D738 (MiCommitEnclavePages.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiReserveEnclavePages @ 0x1403F6D34 (MiReserveEnclavePages.c)
 *     MiInitializeEnclavePfn @ 0x14046DD14 (MiInitializeEnclavePfn.c)
 *     MiGetPageForEnclave @ 0x14046DE64 (MiGetPageForEnclave.c)
 *     KeAddEnclavePage @ 0x14046DEB8 (KeAddEnclavePage.c)
 *     MiWriteEnclavePte @ 0x14046E030 (MiWriteEnclavePte.c)
 *     MiReturnEnclavePage @ 0x1404CE13C (MiReturnEnclavePage.c)
 *     MiReturnReservedEnclavePages @ 0x140B658E0 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiAddPagesToEnclave(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, ULONG_PTR a4, unsigned int a5)
{
  ULONG_PTR v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r14
  struct _LIST_ENTRY **p_Blink; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  int v13; // r10d
  void *v14; // rcx
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // al
  unsigned __int64 v17; // rdi
  __int64 v18; // r12
  unsigned __int8 v19; // r13
  int v20; // r12d
  __int64 result; // rax
  unsigned __int64 v22; // rbx
  ULONG_PTR v23; // rcx
  ULONG_PTR ValidPte; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-84h]
  __int64 v30; // [rsp+38h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-78h]
  __int64 v32; // [rsp+48h] [rbp-70h]
  void *v33; // [rsp+50h] [rbp-68h]
  __int64 v34; // [rsp+58h] [rbp-60h]
  unsigned __int8 v35; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v36; // [rsp+C8h] [rbp+10h]

  v28 = 0;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v8 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v10 = *((_QWORD *)qword_140E300C8 + *((unsigned __int16 *)p_Blink + 87));
  v11 = *(_QWORD *)(a1 + 112);
  v32 = v10;
  if ( a2 <= v11 || (v8 = a2 - v11, result = MiReserveEnclavePages(a1, v10, (int)a2 - (int)v11), (int)result >= 0) )
  {
    v12 = *(unsigned int *)(a1 + 64);
    v13 = 4;
    v14 = 0LL;
    if ( (v12 & 2) == 0 )
      v14 = qword_140E374A0;
    v33 = v14;
    v15 = (a5 >> 1) & 2 | 0x35;
    if ( (a5 & 2) == 0 )
      v15 = (a5 >> 1) & 2 | 0x31;
    if ( (v12 & 2) == 0 )
      v13 = a5;
    v29 = v13;
    v16 = v15 | 0x40;
    if ( (v12 & 2) == 0 )
      v16 = v15;
    v35 = v16;
    v17 = 0LL;
    v34 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
    v18 = (__int64)(v5 << 25) >> 16;
    v30 = v18;
    v19 = MiLockWorkingSetShared((__int64)p_Blink, v15, (a5 >> 1) & 2 | 0x31, v12);
    while ( 1 )
    {
      if ( v5 > a4 )
      {
        if ( v17 )
          MiUnlockPageTableInternal((__int64)p_Blink, v17);
        v20 = 0;
        goto LABEL_16;
      }
      if ( (v5 & 0x78) != 0 || v5 == a3 )
      {
        if ( !v17 )
          goto LABEL_22;
      }
      else
      {
        if ( (unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0) || KeShouldYieldProcessor() )
        {
          if ( v17 )
LABEL_45:
            MiUnlockPageTableInternal((__int64)p_Blink, v17);
          MiUnlockWorkingSetShared((__int64)p_Blink, v19);
          MiLockWorkingSetShared((__int64)p_Blink, v25, v26, v27);
LABEL_22:
          v17 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v5, (*(_DWORD *)(a1 + 48) >> 12) & 0x7F, v19, 0);
          goto LABEL_23;
        }
        if ( !v17 )
          goto LABEL_22;
        if ( (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v17) )
          goto LABEL_45;
      }
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal((__int64)p_Blink, v17);
        goto LABEL_22;
      }
LABEL_23:
      if ( (MI_READ_PTE_LOCK_FREE(v5) & 1) == 0 )
      {
        if ( v8 == v6 )
          --v8;
        v36 = v6 - 1;
        BugCheckParameter2 = MiGetPageForEnclave(a1, v32);
        v22 = MiMapPageInHyperSpaceWorker(BugCheckParameter2, 0LL, 0x80000000);
        v20 = KeAddEnclavePage(v34, (_DWORD)v33, v22, v18, v35, (__int64)&v28);
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        v23 = BugCheckParameter2;
        *(_QWORD *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
        if ( v20 < 0 )
        {
          MiReturnEnclavePage(v23);
          if ( v20 == -1073740657 )
            v20 = -1073741823;
          if ( v17 )
            MiUnlockPageTableInternal((__int64)p_Blink, v17);
LABEL_16:
          MiUnlockWorkingSetShared((__int64)p_Blink, v19);
          if ( v8 )
            MiReturnReservedEnclavePages(a1, v8);
          return (unsigned int)v20;
        }
        MiInitializeEnclavePfn(v23, v5, v29, 1LL);
        ValidPte = MiMakeValidPte(v5, BugCheckParameter2, v29 | 0x80000000);
        MiWriteEnclavePte(v5, ValidPte, 0);
        v6 = v36;
        v18 = v30;
      }
      v5 += 8LL;
      v18 += 4096LL;
      v30 = v18;
    }
  }
  return result;
}
