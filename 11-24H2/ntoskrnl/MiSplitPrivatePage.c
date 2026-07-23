/*
 * XREFs of MiSplitPrivatePage @ 0x1403C7720
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiMakePrototypePteVadLookup @ 0x1402104D0 (MiMakePrototypePteVadLookup.c)
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiMakeProtoLeafValid @ 0x1403C7C20 (MiMakeProtoLeafValid.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 Process; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  int v9; // r15d
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 ProtoPteAddress; // rax
  volatile unsigned __int64 PrototypePteVadLookup; // rbx
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rbx
  struct _KTHREAD *v24; // rsi
  __int64 v25; // rdx
  int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  BOOL v35; // [rsp+30h] [rbp-88h]
  int v36; // [rsp+34h] [rbp-84h]
  int v37; // [rsp+38h] [rbp-80h] BYREF
  __int64 v38; // [rsp+40h] [rbp-78h]
  __int64 v39; // [rsp+48h] [rbp-70h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  __int64 v41[12]; // [rsp+58h] [rbp-60h] BYREF
  int v44; // [rsp+D0h] [rbp+18h]
  int v45; // [rsp+D8h] [rbp+20h]

  v39 = 0LL;
  v37 = 0;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v38 = Process;
  v5 = Process + 1024;
  v35 = MiVadPureReserve(a2);
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41[0] = *(_QWORD *)(v7 + 72);
  v8 = 0LL;
  v45 = 0;
  v44 = 0;
  v36 = 0;
  v9 = MiChargeFullProcessCommitment(Process);
  v10 = (*(_DWORD *)(v3 + 48) >> 12) & 0x7F;
  v14 = MiLockWorkingSetShared(Process + 1024, v11, v12, v13);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v35 )
      {
        NextPageTable = MiGetNextPageTable(v6, v6, v14, 0, &v37);
        if ( NextPageTable )
          v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v6 != NextPageTable )
        {
          if ( v8 )
            MiUnlockPageTableInternal(v5, v8);
          MiUnlockWorkingSetShared(v5, v14);
          if ( v9 < 0 )
            return (unsigned int)v9;
          v24 = CurrentThread;
          v36 = 1;
          LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
          v26 = MiCommitPageTablesForVad(v3, a1, a1);
          if ( v26 < 0 )
          {
            UNLOCK_PAGE_TABLE_COMMITMENT((__int64)v24, Process);
            MiReturnFullProcessCommitment(Process);
            return (unsigned int)v26;
          }
          v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v14 = MiLockWorkingSetShared(v5, v25, v27, v28);
          MiMakeSystemAddressValid(v6, v10, v14, 0);
          v3 = a2;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v6, v10, v14, 0);
      }
      ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 8u, v41);
      PrototypePteVadLookup = *(_QWORD *)v6;
      v18 = ProtoPteAddress;
      if ( !*(_QWORD *)v6 )
      {
        if ( v9 < 0 )
          goto LABEL_11;
        MiIncreaseUsedPtes(0xFFFFF68000000000uLL, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
        if ( v35 )
        {
          if ( !v18 )
            goto LABEL_18;
          v29 = *(_QWORD *)(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (v29 & 1) == 0 && (v29 & 0x3E0) == 0 )
            goto LABEL_18;
        }
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(1);
        *(_QWORD *)v6 = PrototypePteVadLookup;
      }
      if ( (PrototypePteVadLookup & 1) == 0 )
        break;
      v19 = 48 * ((PrototypePteVadLookup >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v19 + 40) >= 0 || (*(_QWORD *)(v19 + 8) | 0x8000000000000000uLL) != v18 )
        goto LABEL_21;
      if ( v9 < 0 )
        goto LABEL_11;
      v30 = MiCopyOnWrite(a1, (volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL, 0, &v39);
      if ( v30 >= 0 )
        goto LABEL_19;
      if ( v8 )
      {
        MiUnlockPageTableInternal(v5, v8);
        v8 = 0LL;
      }
      MiUnlockWorkingSetShared(v5, v14);
      MiCopyOnWriteCheckConditions(v5, (unsigned int)v30, v39);
      MiLockWorkingSetShared(v5, v31, v32, v33);
      Process = v38;
LABEL_45:
      v3 = a2;
    }
    if ( (PrototypePteVadLookup & 0x400) == 0 )
      goto LABEL_21;
    if ( !MiIsPrototypePteVadLookup(PrototypePteVadLookup) )
    {
      v34 = PrototypePteVadLookup;
      if ( qword_140E2DCC0 && (PrototypePteVadLookup & 0x10) == 0 )
        v34 = PrototypePteVadLookup & ~qword_140E2DCC0;
      if ( v34 >> 16 != v18 )
        goto LABEL_21;
    }
    if ( (int)MiMakeProtoLeafValid(v6) < 0 && PrototypePteVadLookup == *(_QWORD *)v6 )
      break;
    Process = v38;
    v3 = a2;
    if ( v8 )
    {
      MiUnlockPageTableInternal(v5, v8);
      v8 = 0LL;
      goto LABEL_45;
    }
  }
  if ( v9 < 0 )
  {
LABEL_11:
    if ( v8 )
      MiUnlockPageTableInternal(v5, v8);
    MiUnlockWorkingSetShared(v5, v14);
    return (unsigned int)v9;
  }
LABEL_18:
  v45 = 1;
LABEL_19:
  v44 = 1;
  v21 = *(unsigned int *)(a2 + 52);
  v22 = (v21 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) + 1;
  *(_DWORD *)(a2 + 52) = v21 + 1;
  *(_BYTE *)(a2 + 34) = BYTE4(v22);
  if ( v45 )
    *(_QWORD *)v6 = MiMakeDemandZeroPte(1);
LABEL_21:
  if ( v8 )
    MiUnlockPageTableInternal(v5, v8);
  MiUnlockWorkingSetShared(v5, v14);
  v23 = v38;
  if ( v36 )
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v38);
  if ( !v44 && v9 >= 0 )
    MiReturnFullProcessCommitment(v23);
  return 0LL;
}
