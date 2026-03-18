/*
 * XREFs of MiLockPagedAddress @ 0x14047910C
 * Callers:
 *     MiLockPagedRange @ 0x140A5457C (MiLockPagedRange.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiWriteValidPteVolatile @ 0x140232800 (MiWriteValidPteVolatile.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int8 v5; // r15
  volatile unsigned __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // esi
  volatile unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // ebx
  int v14; // eax
  ULONG_PTR v15; // rdi
  int v16; // edi

  v2 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = MiLockWorkingSetShared((__int64)&unk_140E37FC0);
  while ( 1 )
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v2, 0, v5, 4);
      v6 = *(_QWORD *)v2;
      if ( (*(_QWORD *)v2 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)&unk_140E37FC0, v4);
      MiUnlockWorkingSetShared((__int64)&unk_140E37FC0, v5);
      v14 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v15 = v14;
      if ( v14 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v15, 0LL, BugCheckParameter1);
      }
LABEL_18:
      MiLockWorkingSetShared((__int64)&unk_140E37FC0);
    }
    if ( (v6 & 0x200) == 0 )
      break;
    v16 = MiCopyOnWrite((__int64)(v2 << 25) >> 16, (volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
    MiUnlockPageTableInternal((__int64)&unk_140E37FC0, v4);
    if ( v16 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)&unk_140E37FC0, v5);
      MiCopyOnWriteCheckConditions((__int64)&unk_140E37FC0, v16, 0LL);
      goto LABEL_18;
    }
  }
  v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v7, 0) )
  {
    v9 = 1;
    v3 = MiCaptureDirtyBitToPfn(v7);
  }
  else
  {
    v9 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)), v3, 1LL);
    v10 = *(_QWORD *)v2;
    v11 = *(_QWORD *)v2 & 0x42LL;
    if ( (*(_QWORD *)v2 & 0x20) != 0 && v11 )
    {
      v12 = 128;
    }
    else
    {
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
      v12 = ~(unsigned __int8)(v10 >> 3) & 4;
      if ( !v11 )
        v12 |= 0x10u;
    }
    if ( (MiFlags & 0x100) == 0 )
      MiFlushSingleTbEntry(BugCheckParameter1, 2, v12);
  }
  MiUnlockPageTableInternal((__int64)&unk_140E37FC0, v4);
  MiUnlockWorkingSetShared((__int64)&unk_140E37FC0, v5);
  return v9;
}
