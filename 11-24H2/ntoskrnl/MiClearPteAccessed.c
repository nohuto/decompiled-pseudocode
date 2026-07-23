/*
 * XREFs of MiClearPteAccessed @ 0x140304BA0
 * Callers:
 *     MiResetAccessBitPteWorker @ 0x1402941D8 (MiResetAccessBitPteWorker.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x140345608 (MiCrcStillIntact.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402023A0 (MiUnlockNestedPageTableWritePte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x140296DE0 (MiGetVaAge.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  BOOL v8; // r13d
  int v9; // r12d
  int v10; // r15d
  int v11; // eax
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // r8
  char VaAge; // al
  __int64 v20; // r9
  char v21; // bl
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+80h] [rbp+18h]
  int v26; // [rsp+90h] [rbp+28h]

  v8 = a4 || (a5 & 4) != 0;
  v9 = 0;
  v23 = 0;
  v24 = a5 & 1;
  v10 = (a5 >> 1) & 1;
  v26 = 0;
  v11 = *(_DWORD *)(a1 + 184);
  v12 = (__int64)(a3 << 25) >> 16;
  v13 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( (v11 & 0xF) != 0 && v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
  {
    v14 = 0;
    if ( !v8 )
      goto LABEL_52;
    goto LABEL_19;
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(a2 + 40) >= 0
    || (*(_DWORD *)(a1 + 184) & 0xF) != 0 && (unsigned __int16)*(_DWORD *)(a2 + 32) > 1u )
  {
    return 0LL;
  }
  v14 = 1;
  if ( !v8 )
    goto LABEL_25;
  if ( v12 < 0xFFFFF68000000000uLL )
  {
LABEL_19:
    if ( v12 < 0xFFFFF68000000000uLL )
      goto LABEL_22;
LABEL_20:
    if ( v12 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( v12 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_20;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    LOBYTE(v9) = ((a3 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL;
LABEL_21:
  v26 = 1;
  MiLockNestedPageTable(a1, a3);
LABEL_22:
  if ( v14 )
  {
    if ( v9 )
      ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
LABEL_25:
    v23 = 1;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    v13 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(a2 + 40) >= 0
      || (*(_DWORD *)(a1 + 184) & 0xF) != 0 && (unsigned __int16)*(_DWORD *)(a2 + 32) > 1u )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v9 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          SpinLock = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
      }
      if ( v26 )
        MiUnlockPageTableInternal(a1, a3);
      return 0LL;
    }
  }
  if ( v8 )
  {
    v17 = MI_READ_PTE_LOCK_FREE(a3);
    if ( v26 )
      MiUnlockNestedPageTableWritePte(a1, a3, v17 & 0xCFFFFFFFFFFFFFDFuLL, v9);
    else
      MiWriteValidPteNewProtection(a3, v17 & 0xFFFFFFFFFFFFFFDFuLL, v18);
    v13 = a4;
    v10 = 1;
    if ( a4 )
      MiInsertTbFlushEntry(a4, (__int64)(a3 << 25) >> 16, 1LL, 0);
  }
LABEL_52:
  if ( v23 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v9 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        SpinLock = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
    }
  }
  if ( !v10 )
    return 1LL;
  VaAge = MiGetVaAge(v13, (__int64)(a3 << 25) >> 16);
  v21 = VaAge;
  if ( !v24 )
    goto LABEL_62;
  if ( VaAge != 7 )
  {
    MiLogPageAccess(a1, a3);
LABEL_62:
    if ( !v21 )
    {
      LOBYTE(v20) = 1;
      MiSetVaAgeList(a1, (__int64)(a3 << 25) >> 16, 1LL, v20);
    }
  }
  return 1LL;
}
