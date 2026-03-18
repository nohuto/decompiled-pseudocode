/*
 * XREFs of MiDemoteCombinedPte @ 0x1403FABBC
 * Callers:
 *     MiAgePte @ 0x14022F8D0 (MiAgePte.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiTrimPte @ 0x140242BA0 (MiTrimPte.c)
 *     MiEmptyWorkingSetHelper @ 0x140287320 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140287AF0 (MiEmptyPte.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiUpdateOldPte @ 0x1403FA590 (MiUpdateOldPte.c)
 *     MiWalkVaCheckCommon @ 0x1403FA9F0 (MiWalkVaCheckCommon.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402C49A0 (MiUpdateWorkingSetPrivateSize.c)
 *     MiUnlockPageTableCharges @ 0x1402C7D50 (MiUnlockPageTableCharges.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiDecrementCombinedPteEx @ 0x1402F9014 (MiDecrementCombinedPteEx.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiUpdatePageFileBlockOwner @ 0x1404889B8 (MiUpdatePageFileBlockOwner.c)
 *     MiLogCombinedPteDelete @ 0x14068564C (MiLogCombinedPteDelete.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
  unsigned int v14; // r14d
  int v15; // eax
  BOOL v16; // eax
  int v17; // r15d
  unsigned int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 PagingFileOffset; // rdx
  unsigned __int16 v25; // r10
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
  v32 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  if ( *((_QWORD *)qword_140E2FF88 + v9) != v32 )
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
        HvlNotifyLongSpinWait(v14);
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
        HvlNotifyLongSpinWait(v18);
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
    MiClearPageFileReservation(&v27);
    v23 = v27;
  }
  else
  {
    v23 = 0LL;
  }
  PagingFileOffset = (unsigned int)MiGetPagingFileOffset(v23);
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
