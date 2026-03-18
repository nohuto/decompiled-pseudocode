/*
 * XREFs of MiDemoteCombinedPte @ 0x14037EFEC
 * Callers:
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiAgePte @ 0x1402483B0 (MiAgePte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiWalkVaCheckCommon @ 0x14037D6F0 (MiWalkVaCheckCommon.c)
 *     MiEmptyWorkingSetHelper @ 0x1403808F0 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140380E70 (MiEmptyPte.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     MiTrimPte @ 0x140387FA0 (MiTrimPte.c)
 *     MiUpdateOldPte @ 0x140441BC0 (MiUpdateOldPte.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiDecrementCombinedPteEx @ 0x140224E9C (MiDecrementCombinedPteEx.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableCharges @ 0x1402CBD20 (MiUnlockPageTableCharges.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     MiUpdatePageFileBlockOwner @ 0x1402CF4D0 (MiUpdatePageFileBlockOwner.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402FD330 (MiUpdateWorkingSetPrivateSize.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiLogCombinedPteDelete @ 0x140679DBC (MiLogCombinedPteDelete.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiDemoteCombinedPte(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  char WsleContents; // di
  unsigned __int64 v12; // r11
  __int64 v13; // r10
  int v14; // r14d
  int v15; // eax
  BOOL v16; // eax
  int v17; // r15d
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r11
  unsigned int PagingFileOffset; // edx
  unsigned __int16 v25; // r11
  __int64 v27; // [rsp+38h] [rbp-A0h] BYREF
  ULONG_PTR v28; // [rsp+40h] [rbp-98h]
  __int64 v29; // [rsp+48h] [rbp-90h]
  __int64 ContainingPageTable; // [rsp+50h] [rbp-88h]
  unsigned __int64 v31; // [rsp+58h] [rbp-80h]
  __int64 v32; // [rsp+60h] [rbp-78h]
  unsigned __int64 v33; // [rsp+68h] [rbp-70h]
  __int128 v34; // [rsp+70h] [rbp-68h] BYREF
  __int64 v35; // [rsp+80h] [rbp-58h]
  __int128 *v36; // [rsp+88h] [rbp-50h] BYREF
  int v37; // [rsp+90h] [rbp-48h]
  int v38; // [rsp+94h] [rbp-44h]

  v3 = *(_QWORD *)a2;
  v35 = 0LL;
  v5 = *(_QWORD *)(a3 - 32 + 56);
  v28 = a2;
  v31 = v3;
  v34 = 0LL;
  if ( v5 > 1 )
    return 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
  {
    v7 = a1 - 1024;
    if ( *(_QWORD *)(a1 - 1024 + 624) )
      return 0LL;
  }
  v33 = (v3 >> 12) & 0xFFFFFFFFFFLL;
  v8 = 48 * v33 - 0x220000000000LL;
  v9 = *(unsigned __int16 *)(a1 + 174);
  v32 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  if ( *((_QWORD *)qword_140E2FD48 + v9) != v32 )
    return 0LL;
  v10 = (__int64)(a2 << 25) >> 16;
  WsleContents = MiGetWsleContents(0xFFFFFFFFFFLL, v10);
  ContainingPageTable = MiGetContainingPageTable(v12);
  v14 = 0;
  v29 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v15 = *(_DWORD *)(v8 + 32);
  v16 = (_WORD)v15 != 1 && ((_WORD)v15 != 2 || (*(_BYTE *)(v8 + 34) & 8) == 0);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v16 || (unsigned int)MiDecrementCombinedPteEx(a1, a3, 6) == 2 )
    return 0LL;
  _InterlockedDecrement((volatile signed __int32 *)(v29 + 392));
  v17 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v19 = ContainingPageTable;
  *(_QWORD *)(v8 + 8) = v28;
  *(_QWORD *)(v8 + 40) &= ~0x8000000000000000uLL;
  v20 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL;
  MiSetPfnContainingFrame(v8, v19);
  v21 = v31;
  v22 = *(_QWORD *)(v8 + 16) >> 5;
  if ( (v22 & 5) == 5 )
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v22 & 0x1E));
  v27 = *(_QWORD *)(v8 + 16);
  if ( (v27 & 4) != 0 )
  {
    MiClearPageFileReservation((unsigned __int64)&v27);
    v23 = v27;
  }
  else
  {
    v23 = 0LL;
  }
  PagingFileOffset = MiGetPagingFileOffset(v23);
  if ( (v25 & 4) != 0 )
    MiUpdatePageFileBlockOwner(
      *(_QWORD *)(v32 + 8LL * (v25 >> 12) + 18528),
      PagingFileOffset,
      *(_QWORD *)(v8 + 8),
      a3 & 0x7FFFFFFFFFFFFFFFLL,
      (*(unsigned __int8 *)(v8 + 34) >> 3) & 1);
  if ( v17 )
    MiIdentifyPfn(v33, (__int64 *)&v34);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v21 & 0x200) != 0 )
    MiWriteValidPteNewProtection(v28, v21 & 0xFFFFFFFFFFFFF5DFuLL | 0x820);
  if ( (WsleContents & 0xF) == 8 )
    MiUnlockPageTableCharges(48 * v20 - 0x220000000000LL, 1);
  MiLockAndDecrementShareCount(48 * v20 - 0x220000000000LL, 2);
  MiUpdateWorkingSetPrivateSize(a1, v10, 1uLL, 0);
  if ( v7 )
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 648));
  if ( v17 )
  {
    MiLogCombinedPteDelete(a3);
    v38 = 0;
    v36 = &v34;
    v37 = 24;
    EtwTraceKernelEvent((int)&v36, 1, 0x28000001u, 630, 290462468);
  }
  return 1LL;
}
