/*
 * XREFs of MiUnlockCodePage @ 0x1402C7618
 * Callers:
 *     MiUnlockImageSection @ 0x1402C7130 (MiUnlockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x140A3DA08 (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverPages @ 0x140A3E5CC (MiUnlockDriverPages.c)
 *     MiUnlockDriverCode @ 0x140A8823C (MiUnlockDriverCode.c)
 *     MmUnlockPreChargedPagedPool @ 0x140AAD8F0 (MmUnlockPreChargedPagedPool.c)
 * Callees:
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockCodePage(_QWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // r14
  ULONG_PTR v6; // rdi
  __int64 LeafVa; // rax
  void *v8; // rsi
  unsigned __int8 v9; // al
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int8 v12; // r12
  unsigned __int64 *v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  ULONG_PTR v16; // rbx
  unsigned int v17; // ebp
  unsigned __int64 *v18; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx

  v5 = (unsigned __int64)a1;
  v6 = 0LL;
  LeafVa = MiGetLeafVa(a1);
  v8 = MiVaToFlushVm(LeafVa);
  v9 = MiLockWorkingSetShared(v8);
  v11 = 0xFFFFF68000000000uLL;
  v12 = v9;
  v13 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v5 > a2 )
    goto LABEL_15;
  do
  {
    if ( v6 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(v8, v6);
      if ( v12 < 2u )
      {
        LOBYTE(v21) = v12;
        MiUnlockWorkingSetShared(v8, v21);
        MiLockWorkingSetShared(v8);
      }
    }
    v20 = (unsigned __int64)v13;
    if ( !a3 )
      v20 = v5;
    v6 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)v8, v6);
LABEL_4:
    if ( a3 )
      v14 = *v13;
    else
      v14 = *(_QWORD *)v5;
    v15 = (v14 >> 12) & 0xFFFFFFFFFFLL;
    if ( a3 )
      v15 += (v5 >> 3) & 0x1FF;
    v16 = 48 * v15 - 0x220000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v16, v11, v10);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v5 += 8LL;
    v11 = 0xFFFFF68000000000uLL;
    v18 = v13 + 1;
    if ( (v5 & 0xFFF) != 0 )
      v18 = v13;
    v13 = v18;
  }
  while ( v5 <= a2 );
  if ( v6 )
    MiUnlockPageTableInternal(v8, v6);
LABEL_15:
  LOBYTE(v11) = v12;
  return MiUnlockWorkingSetShared(v8, v11);
}
