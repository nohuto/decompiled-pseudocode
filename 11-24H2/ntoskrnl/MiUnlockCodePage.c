/*
 * XREFs of MiUnlockCodePage @ 0x140203B44
 * Callers:
 *     MiUnlockImageSection @ 0x1402BBCB0 (MiUnlockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x140A33318 (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverPages @ 0x140A33EDC (MiUnlockDriverPages.c)
 *     MiUnlockDriverCode @ 0x140A8472C (MiUnlockDriverCode.c)
 *     MmUnlockPreChargedPagedPool @ 0x140AA8970 (MmUnlockPreChargedPagedPool.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 */

__int64 __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR v6; // rdi
  __int64 LeafVa; // rax
  __int64 v8; // rsi
  unsigned __int8 v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // r12
  unsigned __int64 *v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  unsigned int v18; // ebp
  unsigned __int64 *v19; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx

  v6 = 0LL;
  LeafVa = MiGetLeafVa();
  v8 = MiVaToFlushVm(LeafVa);
  v9 = MiLockWorkingSetShared(v8);
  v12 = 0xFFFFF68000000000uLL;
  v13 = v9;
  v14 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( a1 > a2 )
    goto LABEL_15;
  do
  {
    if ( v6 )
    {
      if ( (a1 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(v8, v6);
      if ( v13 < 2u )
      {
        LOBYTE(v22) = v13;
        MiUnlockWorkingSetShared(v8, v22);
        MiLockWorkingSetShared(v8);
      }
    }
    v21 = (unsigned __int64)v14;
    if ( !a3 )
      v21 = a1;
    v6 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable(v8, v6);
LABEL_4:
    if ( a3 )
      v15 = *v14;
    else
      v15 = *(_QWORD *)a1;
    v16 = (v15 >> 12) & 0xFFFFFFFFFFLL;
    if ( a3 )
      v16 += (a1 >> 3) & 0x1FF;
    v17 = 48 * v16 - 0x220000000000LL;
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v12, v10, v11) )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v17);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    a1 += 8LL;
    v12 = 0xFFFFF68000000000uLL;
    v19 = v14 + 1;
    if ( (a1 & 0xFFF) != 0 )
      v19 = v14;
    v14 = v19;
  }
  while ( a1 <= a2 );
  if ( v6 )
    MiUnlockPageTableInternal(v8, v6);
LABEL_15:
  LOBYTE(v12) = v13;
  return MiUnlockWorkingSetShared(v8, v12);
}
