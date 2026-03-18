/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8760C (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiReferenceDriverPage @ 0x14023DF88 (MiReferenceDriverPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1402C89A4 (MiUpdateImagePfnImportRelocations.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  ULONG_PTR v4; // rbp
  unsigned __int64 v5; // rsi
  ULONG_PTR *v6; // rbx
  __int64 v7; // rdx
  char v8; // r13
  __int64 v9; // r15
  ULONG_PTR v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // r14
  unsigned int v13; // edi
  __int64 v14; // rdx
  int updated; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v21; // rdx
  int v22; // eax
  ULONG_PTR *v23; // [rsp+70h] [rbp+8h]

  v3 = a3;
  v4 = 0LL;
  v5 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (ULONG_PTR *)(v5 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 64) >> 12));
  v23 = v6;
  v8 = MiLockWorkingSetShared(&unk_140E37D40);
  v9 = 0LL;
  while ( v5 < (unsigned __int64)v6 )
  {
    if ( !v4 )
      goto LABEL_19;
    if ( (v5 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(&unk_140E37D40, v4);
LABEL_19:
      v4 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E37D40, v4);
    }
    v10 = *(_QWORD *)v5;
    if ( !*(_QWORD *)v5 )
      goto LABEL_8;
    if ( (v10 & 1) != 0 )
    {
      v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
      v12 = 48 * v11 - 0x220000000000LL;
      if ( *(__int64 *)(v12 + 40) < 0 )
      {
        v6 = v23;
        v5 += 8LL;
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
        MiUnlockPageTableInternal(&unk_140E37D40, v4);
        LOBYTE(v14) = v8;
        v4 = 0LL;
        MiUnlockWorkingSetShared(&unk_140E37D40, v14);
        updated = MiUpdateImagePfnImportRelocations(a2, v3, v9 >> 3, v11);
        MiLockPageInline(48 * v11 - 0x220000000000LL);
        v18 = 0LL;
        v19 = 0LL;
        if ( updated != 1 )
        {
          v18 = MiCaptureDirtyBitToPfn(v12);
          v19 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v12, v16, v17);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v18 )
          MiReleasePageFileInfo(v19, v18, 1LL);
        MiLockWorkingSetSharedAtDpc(&unk_140E37D40);
        v3 = a3;
        v5 += 8LL;
        v9 += 8LL;
LABEL_17:
        v6 = v23;
      }
    }
    else
    {
      if ( (v10 & 0x400) == 0 )
      {
        MiUnlockPageTableInternal(&unk_140E37D40, v4);
        LOBYTE(v21) = v8;
        v4 = 0LL;
        MiUnlockWorkingSetShared(&unk_140E37D40, v21);
        v22 = MmAccessFault(0LL, (__int64)(v5 << 25) >> 16, 0, 0LL);
        if ( v22 < 0 )
          KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v5 << 25) >> 16, v10, v22);
        MiLockWorkingSetShared(&unk_140E37D40);
        goto LABEL_17;
      }
LABEL_8:
      v6 = v23;
      v5 += 8LL;
      v9 += 8LL;
    }
  }
  if ( v4 )
    MiUnlockPageTableInternal(&unk_140E37D40, v4);
  LOBYTE(v7) = v8;
  return MiUnlockWorkingSetShared(&unk_140E37D40, v7);
}
