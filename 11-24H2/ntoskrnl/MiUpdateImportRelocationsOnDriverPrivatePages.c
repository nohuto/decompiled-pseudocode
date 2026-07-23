/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A83AFC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReferenceDriverPage @ 0x140205D18 (MiReferenceDriverPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14043A5B4 (MiUpdateImagePfnImportRelocations.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  ULONG_PTR *v7; // rbx
  unsigned __int8 v8; // r13
  __int64 v9; // r15
  ULONG_PTR v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // r14
  unsigned int v13; // edi
  int updated; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  ULONG_PTR *v29; // [rsp+70h] [rbp+8h]

  v4 = a3;
  v5 = 0LL;
  v6 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (ULONG_PTR *)(v6 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 64) >> 12));
  v29 = v7;
  v8 = MiLockWorkingSetShared((__int64)&unk_140E37E80, a2, a3, a4);
  v9 = 0LL;
  while ( v6 < (unsigned __int64)v7 )
  {
    if ( !v5 )
      goto LABEL_19;
    if ( (v6 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal((__int64)&unk_140E37E80, v5);
LABEL_19:
      v5 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E37E80, v5);
    }
    v10 = *(_QWORD *)v6;
    if ( !*(_QWORD *)v6 )
      goto LABEL_8;
    if ( (v10 & 1) != 0 )
    {
      v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
      v12 = 48 * v11 - 0x220000000000LL;
      if ( *(__int64 *)(v12 + 40) < 0 )
      {
        v7 = v29;
        v6 += 8LL;
        v9 += 8LL;
      }
      else
      {
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v13);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v11 - 0x220000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)&unk_140E37E80, v5);
        v5 = 0LL;
        MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v8);
        updated = MiUpdateImagePfnImportRelocations(a2, v4, v9 >> 3, v11);
        MiLockPageInline(48 * v11 - 0x220000000000LL, v15, v16, v17);
        v21 = 0LL;
        v22 = 0LL;
        if ( updated != 1 )
        {
          v21 = MiCaptureDirtyBitToPfn(v12);
          v22 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v12, v18, v19, v20);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v21 )
          MiReleasePageFileInfo(v22, v21, 1LL, v23);
        MiLockWorkingSetSharedAtDpc((__int64)&unk_140E37E80);
        v4 = a3;
        v6 += 8LL;
        v9 += 8LL;
LABEL_17:
        v7 = v29;
      }
    }
    else
    {
      if ( (v10 & 0x400) == 0 )
      {
        MiUnlockPageTableInternal((__int64)&unk_140E37E80, v5);
        v5 = 0LL;
        MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v8);
        v25 = MmAccessFault(0LL, (__int64)(v6 << 25) >> 16, 0, 0LL);
        if ( v25 < 0 )
          KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v6 << 25) >> 16, v10, v25);
        MiLockWorkingSetShared((__int64)&unk_140E37E80, v26, v27, v28);
        goto LABEL_17;
      }
LABEL_8:
      v7 = v29;
      v6 += 8LL;
      v9 += 8LL;
    }
  }
  if ( v5 )
    MiUnlockPageTableInternal((__int64)&unk_140E37E80, v5);
  return MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v8);
}
