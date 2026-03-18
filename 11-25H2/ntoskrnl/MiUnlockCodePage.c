/*
 * XREFs of MiUnlockCodePage @ 0x14036E5B8
 * Callers:
 *     MiUnlockImageSection @ 0x14036E15C (MiUnlockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x140A396E8 (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverPages @ 0x140A3A2AC (MiUnlockDriverPages.c)
 *     MiUnlockDriverCode @ 0x140A8370C (MiUnlockDriverCode.c)
 *     MmUnlockPreChargedPagedPool @ 0x140AA8410 (MmUnlockPreChargedPagedPool.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **v8; // rsi
  unsigned __int8 v9; // al
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int8 v13; // r12
  unsigned __int64 *v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG_PTR v17; // rbx
  int v18; // ebp
  unsigned __int64 *v19; // rax
  unsigned __int64 v21; // rcx

  v5 = a1;
  v6 = 0LL;
  LeafVa = MiGetLeafVa(a1);
  v8 = MiVaToFlushVm(LeafVa);
  v9 = MiLockWorkingSetShared((__int64)v8);
  v12 = 0xFFFFF68000000000uLL;
  v13 = v9;
  v14 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v5 > a2 )
    return MiUnlockWorkingSetShared((__int64)v8, v13);
  do
  {
    if ( v6 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTable((__int64)v8, v6);
      if ( v13 < 2u )
      {
        MiUnlockWorkingSetShared((__int64)v8, v13);
        MiLockWorkingSetShared((__int64)v8);
      }
    }
    v21 = (unsigned __int64)v14;
    if ( !a3 )
      v21 = v5;
    v6 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)v8, v6, v10, v11);
LABEL_4:
    if ( a3 )
      v15 = *v14;
    else
      v15 = *(_QWORD *)v5;
    v16 = (v15 >> 12) & 0xFFFFFFFFFFLL;
    if ( a3 )
      v16 += (v5 >> 3) & 0x1FF;
    v17 = 48 * v16 - 0x220000000000LL;
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
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
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v17, v12, v10, v11);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v5 += 8LL;
    v12 = 0xFFFFF68000000000uLL;
    v19 = v14 + 1;
    if ( (v5 & 0xFFF) != 0 )
      v19 = v14;
    v14 = v19;
  }
  while ( v5 <= a2 );
  if ( v6 )
    MiUnlockPageTable((__int64)v8, v6);
  return MiUnlockWorkingSetShared((__int64)v8, v13);
}
