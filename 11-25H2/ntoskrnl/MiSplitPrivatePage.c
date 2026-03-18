/*
 * XREFs of MiSplitPrivatePage @ 0x1404672C0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14090603C (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiMakePrototypePteVadLookup @ 0x14037DD10 (MiMakePrototypePteVadLookup.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140384DF0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiMakeProtoLeafValid @ 0x1404677A8 (MiMakeProtoLeafValid.c)
 *     MiCommitPageTablesForVad @ 0x140900E00 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
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
  char v11; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 ProtoPteAddress; // rax
  volatile unsigned __int64 PrototypePteVadLookup; // rbx
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rbx
  struct _KTHREAD *v21; // rsi
  int v22; // ebx
  __int64 v23; // rax
  int v24; // ebx
  __int64 v25; // rax
  BOOL v26; // [rsp+30h] [rbp-88h]
  int v27; // [rsp+34h] [rbp-84h]
  int v28; // [rsp+38h] [rbp-80h] BYREF
  __int64 v29; // [rsp+40h] [rbp-78h]
  __int64 v30; // [rsp+48h] [rbp-70h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  unsigned __int64 *v32; // [rsp+58h] [rbp-60h] BYREF
  int v35; // [rsp+D0h] [rbp+18h]
  int v36; // [rsp+D8h] [rbp+20h]

  v30 = 0LL;
  v28 = 0;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v29 = Process;
  v5 = Process + 1024;
  v26 = MiVadPureReserve(a2);
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = *(unsigned __int64 **)(v7 + 72);
  v8 = 0LL;
  v36 = 0;
  v35 = 0;
  v27 = 0;
  v9 = MiChargeFullProcessCommitment(Process, 1LL);
  v10 = (*(_DWORD *)(v3 + 48) >> 12) & 0x7F;
  v11 = MiLockWorkingSetShared(Process + 1024);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v26 )
      {
        NextPageTable = MiGetNextPageTable(v6, v6, v11, 0, &v28);
        if ( NextPageTable )
          v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v6 != NextPageTable )
        {
          if ( v8 )
            MiUnlockPageTable(v5, v8);
          MiUnlockWorkingSetShared(v5, v11);
          if ( v9 < 0 )
            return (unsigned int)v9;
          v21 = CurrentThread;
          v27 = 1;
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
          v22 = MiCommitPageTablesForVad(v3, a1, a1);
          if ( v22 < 0 )
          {
            UNLOCK_PAGE_TABLE_COMMITMENT((__int64)v21, Process);
            MiReturnFullProcessCommitment(Process, 1LL);
            return (unsigned int)v22;
          }
          v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v11 = MiLockWorkingSetShared(v5);
          MiMakeSystemAddressValid(v6, v10, v11, 0);
          v3 = a2;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v6, v10, v11, 0);
      }
      ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 8, &v32);
      PrototypePteVadLookup = *(_QWORD *)v6;
      v15 = ProtoPteAddress;
      if ( !*(_QWORD *)v6 )
      {
        if ( v9 < 0 )
          goto LABEL_11;
        MiIncreaseUsedPtes(0xFFFFF68000000000uLL, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 0);
        if ( v26 )
        {
          if ( !v15 )
            goto LABEL_18;
          v23 = *(_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (v23 & 1) == 0 && (v23 & 0x3E0) == 0 )
            goto LABEL_18;
        }
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(1);
        *(_QWORD *)v6 = PrototypePteVadLookup;
      }
      if ( (PrototypePteVadLookup & 1) == 0 )
        break;
      v16 = 48 * ((PrototypePteVadLookup >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v16 + 40) >= 0 || (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) != v15 )
        goto LABEL_21;
      if ( v9 < 0 )
        goto LABEL_11;
      v24 = MiCopyOnWrite(a1, (volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL, 0, &v30);
      if ( v24 >= 0 )
        goto LABEL_19;
      if ( v8 )
      {
        MiUnlockPageTable(v5, v8);
        v8 = 0LL;
      }
      MiUnlockWorkingSetShared(v5, v11);
      MiCopyOnWriteCheckConditions(v5, v24, v30);
      MiLockWorkingSetShared(v5);
      Process = v29;
LABEL_45:
      v3 = a2;
    }
    if ( (PrototypePteVadLookup & 0x400) == 0 )
      goto LABEL_21;
    if ( !MiIsPrototypePteVadLookup(PrototypePteVadLookup) )
    {
      v25 = PrototypePteVadLookup;
      if ( qword_140E2D940 && (PrototypePteVadLookup & 0x10) == 0 )
        v25 = PrototypePteVadLookup & ~qword_140E2D940;
      if ( v25 >> 16 != v15 )
        goto LABEL_21;
    }
    if ( (int)MiMakeProtoLeafValid(v6) < 0 && PrototypePteVadLookup == *(_QWORD *)v6 )
      break;
    Process = v29;
    v3 = a2;
    if ( v8 )
    {
      MiUnlockPageTable(v5, v8);
      v8 = 0LL;
      goto LABEL_45;
    }
  }
  if ( v9 < 0 )
  {
LABEL_11:
    if ( v8 )
      MiUnlockPageTable(v5, v8);
    MiUnlockWorkingSetShared(v5, v11);
    return (unsigned int)v9;
  }
LABEL_18:
  v36 = 1;
LABEL_19:
  v35 = 1;
  v18 = *(unsigned int *)(a2 + 52);
  v19 = (v18 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) + 1;
  *(_DWORD *)(a2 + 52) = v18 + 1;
  *(_BYTE *)(a2 + 34) = BYTE4(v19);
  if ( v36 )
    *(_QWORD *)v6 = MiMakeDemandZeroPte(1);
LABEL_21:
  if ( v8 )
    MiUnlockPageTable(v5, v8);
  MiUnlockWorkingSetShared(v5, v11);
  v20 = v29;
  if ( v27 )
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v29);
  if ( !v35 && v9 >= 0 )
    MiReturnFullProcessCommitment(v20, 1LL);
  return 0LL;
}
