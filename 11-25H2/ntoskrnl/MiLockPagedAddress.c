/*
 * XREFs of MiLockPagedAddress @ 0x140478BA0
 * Callers:
 *     MiLockPagedRange @ 0x140A50D1C (MiLockPagedRange.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWriteValidPteVolatile @ 0x14037C940 (MiWriteValidPteVolatile.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiFlushAllFilesystemPages @ 0x1404D7D5C (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int8 v5; // r15
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  volatile unsigned __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // esi
  unsigned int v11; // esi
  volatile unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // ebx
  int v16; // eax
  ULONG_PTR v17; // rdi
  int v18; // edi

  v2 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = MiLockWorkingSetShared((__int64)&unk_140E37D80);
  while ( 1 )
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v2, 0, v5, 4);
      v8 = *(_QWORD *)v2;
      if ( (*(_QWORD *)v2 & 1) != 0 )
        break;
      MiUnlockPageTable((__int64)&unk_140E37D80, v4);
      MiUnlockWorkingSetShared((__int64)&unk_140E37D80, v5);
      v16 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v17 = v16;
      if ( v16 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v17, 0LL, BugCheckParameter1);
      }
LABEL_18:
      MiLockWorkingSetShared((__int64)&unk_140E37D80);
    }
    if ( (v8 & 0x200) == 0 )
      break;
    v18 = MiCopyOnWrite((__int64)(v2 << 25) >> 16, (volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
    MiUnlockPageTable((__int64)&unk_140E37D80, v4);
    if ( v18 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)&unk_140E37D80, v5);
      MiCopyOnWriteCheckConditions((__int64)&unk_140E37D80, v18, 0LL);
      goto LABEL_18;
    }
  }
  v9 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
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
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v9, 0, v6, v7) )
  {
    v11 = 1;
    v3 = MiCaptureDirtyBitToPfn(v9);
  }
  else
  {
    v11 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v11 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)), v3, 1);
    v12 = *(_QWORD *)v2;
    v13 = *(_QWORD *)v2 & 0x42LL;
    if ( (*(_QWORD *)v2 & 0x20) != 0 && v13 )
    {
      v14 = 128;
    }
    else
    {
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
      v14 = ~(unsigned __int8)(v12 >> 3) & 4;
      if ( !v13 )
        v14 |= 0x10u;
    }
    if ( (MiFlags & 0x100) == 0 )
      MiFlushSingleTbEntry(BugCheckParameter1, 2, v14);
  }
  MiUnlockPageTable((__int64)&unk_140E37D80, v4);
  MiUnlockWorkingSetShared((__int64)&unk_140E37D80, v5);
  return v11;
}
