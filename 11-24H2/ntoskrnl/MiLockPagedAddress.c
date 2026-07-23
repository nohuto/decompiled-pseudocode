/*
 * XREFs of MiLockPagedAddress @ 0x14047499C
 * Callers:
 *     MiLockPagedRange @ 0x140A4C4C8 (MiLockPagedRange.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140203330 (MiWriteValidPteVolatile.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiFlushAllFilesystemPages @ 0x1404CFFDC (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int8 v8; // r15
  volatile unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // r9
  unsigned int v13; // esi
  volatile unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  int v16; // ebx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR v22; // rdi
  int v23; // edi

  v5 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0LL;
  v7 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = MiLockWorkingSetShared((__int64)&unk_140E38100, a2, a3, a4);
  while ( 1 )
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v5, 0, v8, 4);
      v9 = *(_QWORD *)v5;
      if ( (*(_QWORD *)v5 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)&unk_140E38100, v7);
      MiUnlockWorkingSetShared((__int64)&unk_140E38100, v8);
      v18 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v22 = v18;
      if ( v18 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v22, 0LL, BugCheckParameter1);
      }
LABEL_18:
      MiLockWorkingSetShared((__int64)&unk_140E38100, v19, v20, v21);
    }
    if ( (v9 & 0x200) == 0 )
      break;
    v23 = MiCopyOnWrite((__int64)(v5 << 25) >> 16, (volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
    MiUnlockPageTableInternal((__int64)&unk_140E38100, v7);
    if ( v23 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)&unk_140E38100, v8);
      MiCopyOnWriteCheckConditions((__int64)&unk_140E38100, v23, 0LL);
      goto LABEL_18;
    }
  }
  v10 = 48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v10, 0) )
  {
    v13 = 1;
    v6 = MiCaptureDirtyBitToPfn(v10);
  }
  else
  {
    v13 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 )
  {
    if ( v6 )
      MiReleasePageFileInfo(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)), v6, 1LL, v12);
    v14 = *(_QWORD *)v5;
    v15 = *(_QWORD *)v5 & 0x42LL;
    if ( (*(_QWORD *)v5 & 0x20) != 0 && v15 )
    {
      v16 = 128;
    }
    else
    {
      MiWriteValidPteVolatile((volatile signed __int64 *)v5, 3, 0);
      v16 = ~(unsigned __int8)(v14 >> 3) & 4;
      if ( !v15 )
        v16 |= 0x10u;
    }
    if ( (MiFlags & 0x100) == 0 )
      MiFlushSingleTbEntry(BugCheckParameter1, 2, v16);
  }
  MiUnlockPageTableInternal((__int64)&unk_140E38100, v7);
  MiUnlockWorkingSetShared((__int64)&unk_140E38100, v8);
  return v13;
}
