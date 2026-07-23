/*
 * XREFs of MiDemoteCombinedPte @ 0x140296374
 * Callers:
 *     MiTrimPte @ 0x1402130B0 (MiTrimPte.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiWalkVaCheckCommon @ 0x140295E20 (MiWalkVaCheckCommon.c)
 *     MiEmptyWorkingSetHelper @ 0x140296F20 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x1402976F0 (MiEmptyPte.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiAgePte @ 0x140303CD0 (MiAgePte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdateOldPte @ 0x140438350 (MiUpdateOldPte.c)
 * Callees:
 *     MiUpdateWorkingSetPrivateSize @ 0x140219A20 (MiUpdateWorkingSetPrivateSize.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiUpdatePageFileBlockOwner @ 0x140269EDC (MiUpdatePageFileBlockOwner.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiDecrementCombinedPteEx @ 0x140294CC8 (MiDecrementCombinedPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 *     MiLogCombinedPteDelete @ 0x14068677C (MiLogCombinedPteDelete.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r14d
  __int64 v18; // rcx
  int v19; // eax
  BOOL v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r15d
  unsigned int v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // r14
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r10
  unsigned int PagingFileOffset; // edx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int16 v35; // r10
  __int64 v37; // [rsp+38h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-98h]
  __int64 v39; // [rsp+48h] [rbp-90h]
  __int64 ContainingPageTable; // [rsp+50h] [rbp-88h]
  unsigned __int64 v41; // [rsp+58h] [rbp-80h]
  __int64 v42; // [rsp+60h] [rbp-78h]
  __int64 v43; // [rsp+68h] [rbp-70h]
  __int128 v44; // [rsp+70h] [rbp-68h] BYREF
  __int64 v45; // [rsp+80h] [rbp-58h]
  __int128 *v46; // [rsp+88h] [rbp-50h] BYREF
  int v47; // [rsp+90h] [rbp-48h]
  int v48; // [rsp+94h] [rbp-44h]

  v3 = *(_QWORD *)a2;
  v45 = 0LL;
  v5 = *(_QWORD *)(a3 - 32 + 56);
  BugCheckParameter2 = a2;
  v41 = v3;
  v44 = 0LL;
  if ( v5 > 1 )
    return 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
  {
    v7 = a1 - 1024;
    if ( *(_QWORD *)(a1 - 1024 + 624) )
      return 0LL;
  }
  v43 = (v3 >> 12) & 0xFFFFFFFFFFLL;
  v8 = 48 * v43 - 0x220000000000LL;
  v9 = *(unsigned __int16 *)(a1 + 174);
  v42 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  if ( *((_QWORD *)qword_140E300C8 + v9) != v42 )
    return 0LL;
  v10 = (__int64)(a2 << 25) >> 16;
  WsleContents = MiGetWsleContents(0xFFFFFFFFFFLL, v10);
  ContainingPageTable = MiGetContainingPageTable(v12);
  v17 = 0;
  v18 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v39 = v18;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v17 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18, v14, v15, v16) )
      {
        HvlNotifyLongSpinWait(v17);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v19 = *(_DWORD *)(v8 + 32);
  v20 = (_WORD)v19 != 1 && ((_WORD)v19 != 2 || (*(_BYTE *)(v8 + 34) & 8) == 0);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v20 || (unsigned int)MiDecrementCombinedPteEx(a1, a3, 6) == 2 )
    return 0LL;
  _InterlockedDecrement((volatile signed __int32 *)(v39 + 392));
  v25 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v26 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22, v21, v23, v24) )
      {
        HvlNotifyLongSpinWait(v26);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v27 = ContainingPageTable;
  *(_QWORD *)(v8 + 8) = BugCheckParameter2;
  *(_QWORD *)(v8 + 40) &= ~0x8000000000000000uLL;
  v28 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL;
  MiSetPfnContainingFrame(v8, v27);
  v29 = v41;
  v30 = *(_QWORD *)(v8 + 16) >> 5;
  if ( (v30 & 5) == 5 )
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v30 & 0x1E));
  v37 = *(_QWORD *)(v8 + 16);
  if ( (v37 & 4) != 0 )
  {
    MiClearPageFileReservation(&v37);
    v31 = v37;
  }
  else
  {
    v31 = 0LL;
  }
  PagingFileOffset = MiGetPagingFileOffset(v31);
  if ( (v35 & 4) != 0 )
    MiUpdatePageFileBlockOwner(
      *(_QWORD *)(v42 + 8LL * (v35 >> 12) + 18528),
      PagingFileOffset,
      *(_QWORD *)(v8 + 8),
      a3 & 0x7FFFFFFFFFFFFFFFLL,
      (*(unsigned __int8 *)(v8 + 34) >> 3) & 1);
  if ( v25 )
    MiIdentifyPfn(v43, &v44);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v29 & 0x200) != 0 )
    MiWriteValidPteNewProtection(BugCheckParameter2, v29 & 0xFFFFFFFFFFFFF5DFuLL | 0x820, v33);
  if ( (WsleContents & 0xF) == 8 )
    MiUnlockPageTableCharges(48 * v28 - 0x220000000000LL);
  MiLockAndDecrementShareCount(48 * v28 - 0x220000000000LL, 2LL, v33, v34);
  MiUpdateWorkingSetPrivateSize(a1, v10, 1uLL, 0);
  if ( v7 )
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 648));
  if ( v25 )
  {
    MiLogCombinedPteDelete(a3);
    v48 = 0;
    v46 = &v44;
    v47 = 24;
    EtwTraceKernelEvent((int)&v46, 1, 0x28000001u, 630, 290462468);
  }
  return 1LL;
}
